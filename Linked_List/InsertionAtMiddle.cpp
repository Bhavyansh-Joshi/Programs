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
void insertAtMiddle(Node* &head, int data, int index){
    
    //new node for data
    Node * temp1 = head;
    Node * temp2 = new Node(data);

    int i=1;
    while(i<index-1){
        temp1=temp1->next;
        i++;
    }
    temp2->next = temp1->next;
    temp1->next = temp2;
    

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
    Node  * node1 = new Node(1);
    Node  * node2 = new Node(2);
    node1->next=node2;
    Node  * node3 = new Node(3);
    node2->next=node3;
    Node  * node4 = new Node(4);
    node3->next=node4;
    Node  * node5 = new Node(5);
    node4->next=node5;
    Node  * node6 = new Node(6);
    node5->next=node6;
    //making the node head(starting of linked List)
    Node* head = node1;
    //ending of Linked List
    Node* tail = node1;

    printLL(head);

    insertAtMiddle(head, 12, 3);

    printLL(head);

    insertAtMiddle(head, 13, 2);

    printLL(head);

    return 0;

}