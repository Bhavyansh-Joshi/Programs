/* Ques: Print natural numbers from N to 1 using recursion */

#include <iostream>
using namespace std;

void num(int n){

    if(n<1){
        return;
    }

    cout<<n<<" ";
    num(n-1);
}

int main(){

    int n;
    cout<<"Enter the number of natural number to print from N to 1: ";
    cin>>n;

    num(n);

    return 0;
}