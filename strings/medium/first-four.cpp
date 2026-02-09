#include <bits/stdc++.h>
using namespace std;

vector<char> sortByFreq(string str){
    int arr[26]={0};
    vector<char> res;
    for(char x:str){
        arr[x -'a']++;
    }
    int sum=0;
    for(int x:arr){
        sum+=x;
    }
    while(sum!=0){
        int cum = 0;
        int i;
        int idx= -1;
        for(i=0;i<26;i++){
            if(arr[i]>cum){
                cum =arr[i];
                idx=i;
            }
        }
        sum-=cum;
        if(idx != -1) res.push_back(idx+'a');
        arr[idx]=0;
    }

    return res;

}

int maxNesting(string str){
    int cur = 0;
    int cmax = 0;

    for(char x : str){
        if(x == '('){
            cur++;
            cmax = max(cmax, cur);
        }
        else if(x == ')'){
            cur--;
        }
    }

    return cmax;
}

int romanToInt(string str){
    map<char,int> db = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

    int sum =0;
    char prev = '1';
    for(char x: str){
        if(prev=='I' && x=='V'){
            sum+=3;
        }else if(prev=='I' && x=='X'){
            sum+=8;
        }else if(prev=='X' && x=='L'){
            sum+=30;
        }else if(prev=='X' && x=='C'){
            sum+=80;
        }else if(prev=='C' && x=='D'){
            sum+=300;
        }else if(prev=='C' && x=='M'){
            sum+=800;
        }else{
            sum+=db[x];
        }
        prev =x;
    }

    return sum;
}



int main(){
    string str;
    cin>>str;
    // vector<char> res = sortByFreq(str);
    // for(char x: res){
    //     cout<<x<<" ";
    // }
    cout<<romanToInt(str);
    return 0;
}