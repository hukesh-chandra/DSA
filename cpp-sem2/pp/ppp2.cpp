#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
    string name,uid,course;
    int id =0;

    public:
    Student(){
        getline(cin,name);
        getline(cin,uid);
        getline(cin,course);
        id =id++;
    }

    void getStudent(){
        cout<<name<<endl<<uid<<endl<<course<<endl<<id<<endl;
    }

};

int main(){
    Student s1;
    s1.getStudent();
    return 0;
}