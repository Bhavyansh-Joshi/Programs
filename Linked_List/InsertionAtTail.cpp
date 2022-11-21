#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

//do not make a copy of LL thats why reference
void insertAtTail(Node* &tail, int data){
    
    //new node for data
    Node * temp = new Node(data);

    //tail will star pointing to new node
    tail->next = temp;
    
    //change the tail node to the new node
    tail = temp;

}

void printLL(Node* &head){
    
    Node* temp = head;
    while(temp!=NULL){
        cout<< temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    //creatn a new node
    Node  * node1 = new Node(10);
    //making the node head(starting of linked List)
    Node* head = node1;
    //ending of Linked List
    Node* tail = node1;

    printLL(head);

    insertAtTail(tail, 12);

    printLL(head);

    insertAtTail(tail, 13);

    printLL(head);

    return 0;

}