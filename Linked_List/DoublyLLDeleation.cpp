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

void deleation(Node* &head, Node* &tail, int index){
   
    //deleation from start node
    if(index == 1){
        Node* temp = head;
        head = head -> next;
        temp->next = NULL;
        delete temp;
    }
    else{
        //new node for data
        Node* prev = NULL;
        Node* curr = head;
        int i=1;

        while(i<index){
            prev = curr;
            curr = curr -> next;
            i++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
        if(prev->next == NULL){
            tail = prev;
        }
    }
    
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