#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

class sol{
public:
    Node* push_front(Node* head,int value){
        Node* n1 = new Node(value);

        n1->next = head;

        return n1;
    }

    Node* pop_back(Node* head){

        //one or zero element
        if(head==NULL || head->next == nullptr){
            delete head;
            return NULL;
        }


        Node* temp = head;

        while(temp->next->next != nullptr){
            temp = temp->next;
        }

        delete temp->next;
        temp->next = nullptr;

        return head; 
    }

    int lengthOfLL(Node* head){
        Node* temp = head;
        if(head==NULL) return 0;
        if(head->next == nullptr) return 1;
        int cnt = 1;
        while(temp->next != nullptr){
            temp = temp->next;
            cnt++;
        }

        return cnt;
    }


    bool searchElement(Node* head,int t){
        if(head==nullptr){
            return 0;
        }

        Node* temp = head;

        while(temp->next != nullptr){
            if(temp->data==t){
                return 1;
            }
            temp = temp->next;
        }

        return 0;
    }
};

int main(){
    sol s;
    Node* head = new Node(5);
    // Node* n2 = new Node(6);
    head->next = new Node(6);

    cout<<s.lengthOfLL(head)<<endl;

    head = s.push_front(head,4);
    cout<<s.lengthOfLL(head)<<endl;

    cout<<s.searchElement(head,5)<<endl;
    cout<<s.searchElement(head,9)<<endl;

    head= s.pop_back(head);

    cout<<s.lengthOfLL(head)<<endl;

    return 0;
}