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

    //destructor
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free"<<endl;
    }

};

//do not make a copy of LL thats why reference
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
    Node* tail = node6;

    cout<<tail->data<<endl;

    printLL(head);

    deleation(head,tail, 6);
    cout<<tail->data<<endl;
    printLL(head);

    deleation(head,tail, 2);
    cout<<tail->data<<endl;
    printLL(head);

    return 0;

}