/* Ques: Print Name n times using recursion.*/

#include<iostream>
using namespace std;

void name(int count, int n){
    if(count == n){
        return;
    }
    cout<<"Name"<<" ";
    name(count+1, n);
}

int main(){
    int n, count = 0;
    cout<<"Enter no of time you want to print the name: ";
    cin>>n;
    name(count, n);

    return 0;
}