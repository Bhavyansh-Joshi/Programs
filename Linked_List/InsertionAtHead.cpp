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
void insertAtHead(Node* &head, int data){
    
    //new node for data
    Node * temp = new Node(data);

    //point to head node
    temp->next = head;
    
    //change the head node to the new node
    head = temp;

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

    Node  * node1 = new Node(10);

    Node* head = node1;

    printLL(head);

    insertAtHead(head, 12);

    printLL(head);

    insertAtHead(head, 13);

    printLL(head);

    return 0;

}