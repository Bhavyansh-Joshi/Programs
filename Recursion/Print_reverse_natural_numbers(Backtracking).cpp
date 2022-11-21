/* Ques: Print the natural numbers from N to 1 using backtracking */

#include <iostream>
using namespace std;

void num(int n, int count){
    if(count>n){
        return;
    }

    num(n, count+1);
    cout<<count<<" ";
}

int main(){
    int n, count = 1;
    cout<<"Enter the number of natural number to print from N to 1: ";
    cin>>n;

    num(n,count);

    return 0;
}