#include <bits/stdc++.h>
using namespace std;

int main(){
    class Student{
        public:
        string name;
        int rollNo;
        double marks;
        
    };

    Student S1;
    S1.rollNo =15;
    S1.marks = 70;
    S1.name = "Rahul";

    cout<<S1.rollNo<<endl<<sizeof(S1.rollNo)<<endl<<S1.marks<<endl<<sizeof(S1.marks)<<endl<<S1.name<<endl<<sizeof(S1.name);
    return 0;
}
