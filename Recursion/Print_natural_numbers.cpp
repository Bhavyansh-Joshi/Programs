/* Ques: Print the natural numbers from 1 to n using recursion*/

#include<iostream>
using namespace std;

void num(int count, int n){
    if(count > n){
        return;
    }
    cout<<count<<" ";
    num(count+1,n);
}

int main(){
    int n, count = 1;
    cout<<"Enter the range of Natural number from 1 to: ";
    cin>>n;
    num(count, n);

    return 0;
}