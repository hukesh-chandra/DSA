#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int SumOfN(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + SumOfN(n - 1);
}

int Factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * Factorial(n - 1);
    ;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
// Function to reverse array using recursion
void reverseArray(int arr[], int start, int end)
{
    if (start < end)
    {
        swap(arr[start], arr[end]);
        reverseArray(arr, start + 1, end - 1);
    }
}

bool CheckPalindrome(string a, int n, int i)
{
    if (i > n / 2)
    {
        return true;
    }
    return a[i] == a[n - i - 1] ? CheckPalindrome(a, n, i + 1) : false;
}

auto Fibannoci(int n, int one, int two)
{if (n <= 0)
        return;

    cout << one << ", ";

    Fibannoci(n - 1, two, one + two);
}


int main()
{
    int n;
    cin >> n;
    Fibannoci(n, 0, 1);

    return 0;
}