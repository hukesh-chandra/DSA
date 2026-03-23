#include <bits/stdc++.h>
using namespace std;

class Node{

public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }

    Node(Node* prev,int data){
        this->data = data;
        this->prev = prev;
        next = NULL;
    }

    Node(Node* prev,int data,Node* next){
        this->data = data;
        this->prev = prev;
        this->next = next;
    }

    Node(int data,Node* next){
        this->data = data;
        prev = NULL;
        this->next = next;
    }
};

class solution{
public:
    Node* pop_back(Node* head){
        Node* temp = head;

        if(head==nullptr){
            return nullptr;
        }

        if(head->next == nullptr){
            delete head;
            return nullptr;
        }

        while(temp->next->next != nullptr){
            temp = temp->next;
        }

        temp->next->prev = nullptr;
        delete temp->next;
        temp->next = nullptr;

        return head;
    }

    Node* push_back(Node* head,int data){
        Node* temp = head;
        Node* t = new Node(data);

        if(head == nullptr){
            return t;
        }

        while(temp->next != nullptr){
            temp = temp->next;
        }

        temp->next = t;
        t->prev = temp;
        return head;
    }

    Node* push_front(Node* head,int data){
        Node* t = new Node(data,head);
        head->prev = t;

        return t;
    }

    Node* insertAt(Node* head,int data,int idx){
        Node* temp = head;
        Node* t = new Node(data);

        if(head == nullptr){
            return t;
        }
        if(idx==0){
            t->next =head;
            if(head) head->prev = t;
            return t;
        }
        int cnt = 0;
        while(temp->next != nullptr && cnt<idx-1){
            cnt++;
            temp = temp->next;
        }
        t->next = temp->next;
        if(temp->next != nullptr){
            temp->next->prev = t;
        }
        temp->next = t;
        t->prev = temp;
        
        return head;
    }

    Node* arr2DLL(const vector<int>& arr){

        if(arr.size()==0) return nullptr;

        Node* head = new Node(arr[0]);
        if(arr.size()==1) return head;

        Node* prev = head;
        for(int i = 1;i<arr.size();i++){
            Node* n1 = new Node(prev,arr[i]);
            prev->next = n1;
            prev = n1;
        }

        return head;
    }


    Node* reverseDLL(Node* head){
        if(head == nullptr) return nullptr;

        Node* current = head;
        Node* temp = nullptr;

        while(current != nullptr){
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        }

        if(temp != nullptr)
            head = temp->prev;

        return head;
    }

    void printDLL(Node* head){
        while(head->next != nullptr){
            cout<<head->data<<" ";
            head= head->next;
        }

        cout<<head->data<<" "<<endl;
    }
};

int main(){
    solution sol;
    // Node* head = new Node(5);

    // cout<<head->data<<endl;

    vector<int> arr = {1,2,3,4,5};

    Node* head = sol.arr2DLL(arr);

    sol.printDLL(head);

    Node* rev = sol.reverseDLL(head);

    sol.printDLL(rev);

    return 0;
}