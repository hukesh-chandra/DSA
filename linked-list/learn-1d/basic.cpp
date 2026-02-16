#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

int main(){
    Node* a = new Node(5);
    Node* b = new Node(6,a);

    cout<<a->data<<endl;
    cout<<a->next<<endl<<b->data<<endl<<b->next;
    return 0;
}