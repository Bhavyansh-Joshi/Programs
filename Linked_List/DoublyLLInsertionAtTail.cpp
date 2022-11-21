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

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);

    tail ->next = temp;
    temp ->prev = tail;
    tail = temp;
    
    
}

int main(){

    Node* n1 = new Node(1);
    Node* head = n1;
    Node* tail = n1;

    print(head);
    
    insertAtTail(tail,10);
    print(head);
    insertAtTail(tail,11);
    print(head);

    insertAtTail(tail,32);
    print(head);

    insertAtTail(tail,43);
    print(head);


}