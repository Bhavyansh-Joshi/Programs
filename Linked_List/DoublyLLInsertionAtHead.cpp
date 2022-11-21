#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    //Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    
};

void print(Node* head){

    Node* temp = head;
    
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}

int getLength(Node* head){
    int length=0;
    Node* temp = head;
    
    while(temp!=NULL){
        temp=temp->next;
        length++;
    }
    
    return length;
}

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);

    temp ->next = head;
    head ->prev = temp;
    head = temp;
    
    
}

int main(){

    Node* n1 = new Node(1);
    Node* head = n1;

    print(head);
    
    insertAtHead(head,10);
    print(head);
    insertAtHead(head,11);
    print(head);

    insertAtHead(head,32);
    print(head);

    insertAtHead(head,43);
    print(head);


}