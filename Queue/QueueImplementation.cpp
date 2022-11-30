//Code Studio "Implement a Queue" problem Solution


#include <bits/stdc++.h> 
class Queue {
public:
    int *arr;
    int qfront;
    int rear;
    int size;
    Queue() {
        // Implement the Constructor
        size = 1000001;
        qfront = -1;
        rear = -1;
        arr = new int[size];
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(rear==qfront){
            return true;
        }
        else{
            return false;
        }
        
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear == size){
            cout<<"Queue is Full"<<endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(rear==qfront){
            return -1;
        }
        else{
            int a = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront==rear){
                qfront = 0;
                rear = 0;
            }
            return a;
        }
    }

    int front() {
        // Implement the front() function
        if(qfront == rear){
            return -1;
        }
        return arr[qfront];
    }
};