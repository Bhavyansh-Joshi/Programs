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

void insertAtMiddle(Node* &head, Node* &tail, int data, int index){
    Node* inode = new Node(data);
    if(index == 1){
        head->prev = inode;
        inode->next = head;
        head = inode;
        return;
    }  
    Node* temp = head;

    int i=1;
    while(i<index-1){
        temp = temp->next;
        i++;
    }

    if(temp -> next == NULL) {
        insertAtTail(tail,data);
        return ;
    }

    
    
    inode ->next = temp->next;
    temp->next->prev = inode;
    temp->next = inode;
    inode ->prev = temp;
    
    
    
}

int main(){

    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    n1->next = n2;
    n2->prev = n1;
    Node* n3 = new Node(3);
    n2->next = n3;
    n3->prev = n2;
    Node* n4 = new Node(4);
    n3->next = n4;
    n4->prev = n3;
    Node* n5 = new Node(5);
    n4->next = n5;
    n5->prev = n4;
    Node* head = n1;
    Node* tail = n5;

    print(head);
    
    insertAtMiddle(head,tail,10,6);
    print(head);
   
 


}