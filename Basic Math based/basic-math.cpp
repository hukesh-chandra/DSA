
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int countDigits(int n)
{
    int cnt = (int)(log10(n) + 1);
    return cnt;
}

int ReverseNumber(int n)
{
    int temp = n;
    int ans = 0;
    int digit = countDigits(n);
    if (n == 0)
    {
        return 0;
    }
    temp = abs(temp);
    while (temp > 0)
    {
        ans += (temp % 10) * pow(10, digit);
        temp = temp / 10;
        --digit;
    }
    if (n < 0)
    {
        return ans * (-1) / 10;
    }
    return ans / 10;
}

bool CheckPalindrome(int n)
{
    int original = n;
    int reversed = 0;

    while (n > 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return original == reversed;
}

int HCF(int a, int b)
{
    /*
    int max=0;
    for (int i = 1; i <= a && i <= b; i++)
    {
        if(a%i==0 && b%i == 0){
            max = i;
        }
    }
    return max;
    Euclidean algorithim*/ 
    while(a>0 && b>0){
       a>b ? a= a % b : b =b % a;
    }
       return a==0 ? b : a;
}

bool Armstrong(int n){
    int og=n;
    int sum =0;
    int digit = countDigits(n);
    while(n>0){
        int d = n%10;
        sum+=(int)(pow(d,digit)+0.5);
        n/=10;
    }
    return sum==og;
}

auto divisor(int n){
    for(int i =1;i<=n;i++){
        if(n%i==0){
            cout<<i<<", ";
        }
    }
    //this is not optimal sqrt will be used for optimal 
}

bool CheckPrime(int n){
    if (n==2) {return true;}


    for(int i = 2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}//not optimal sqrt for optimal


int main()
{
    int n;
    cin >> n;
    cout<<CheckPrime(n);
    
    return 0;
}
