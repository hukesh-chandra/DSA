#include <bits/stdc++.h>
using namespace std;

void removeOuterPar(string &str) {
    string result;
    int balance = 0;

    for (char c : str) {
        if (c == '(') {
            if (balance > 0) result += c; 
            balance++;
        } else {
            balance--;
            if (balance > 0) result += c; 
        }
    }

    str = result;
}

void reverseWords(string &str) {
    string result;
    string currentWord;

    for (int i = str.size() - 1; i >= 0; i--) {

        if (str[i] == ' ') {
            reverse(currentWord.begin(), currentWord.end());
            result += currentWord + " ";
            currentWord.clear();
        } 
        else {
            currentWord += str[i];
        }
    }

    reverse(currentWord.begin(), currentWord.end());
    result += currentWord;

    str = result;
}

void largestOddString(string &str) {

    int idx = -1;
    for (int i = str.size() - 1; i >= 0; i--) {
        if ((str[i] - '0') % 2 != 0) {
            idx = i;
            break;
        }
    }

    if (idx == -1) {
        str = "";
        return;
    }

    int idx0 = 0;
    while (idx0 < str.size() && str[idx0] == '0') {
        idx0++;
    }

    if (idx0 == str.size()) {
        str = "";
        return;
    }

    str = str.substr(idx0);
    str = str.substr(0, idx - idx0 + 1);
}

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    for (int i = 0; i < strs.size(); i++) {
        if (strs[i].empty()) return "";
    }

    string result = "";
    int idx = 0;

    while (true) {
        if (idx >= strs[0].size()) break;

        char current = strs[0][idx];

        for (int i = 1; i < strs.size(); i++) {
            if (idx >= strs[i].size() || strs[i][idx] != current) {
                return result;
            }
        }

        result += current;
        idx++;
    }

    return result;
}

bool isomorphicString(string str1,string str2){
    vector<char> arr(26,0);
    for(int i =0;i<str1.size() && i<str2.size();i++){

        if(arr[str1[i]-'a'] == 0){
            arr[str1[i]-'a'] = str2[i];
        }else if(arr[str1[i]-'a'] == str2[i]){
            continue;
        }else{
            return false;
        }
    }
    return true;
}

bool checkRotation(string str1,string str2){
    string result = str1+str1;
    for(int i = 0;i<str1.size();i++){
        string sub = result.substr(i,str1.size());
        if(sub==str2){
            return true;
        }
    } 
    return false;
}

bool anagram(string str1,string str2){
    map<char,int> mp1;
    map<char,int> mp2;
    for(char x: str1){
        mp1[x]++;
    }
    for(char x:str2){
        mp2[x]++;
    }

    for(int i = 'A';i<='Z';i++){
        if(mp1[i]!=mp2[i]){
            return false;
        }
    }
    return true;
}


int main(){
    string str1,str2;
    cin>>str1>>str2;
    // cout<<str;

    // int num;
    // cin>>num;
    // vector<string> str(num);
    // for(string &x:str){
    //     cin>>x;
    // }
    cout<<anagram(str1,str2);

    return 0;
}