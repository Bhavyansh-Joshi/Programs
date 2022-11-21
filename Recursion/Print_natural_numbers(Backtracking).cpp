/* Ques: Print the natural numbers from 1 to N using backtracking */

#include <iostream>
using namespace std;

void num(int n){

    if(n<1){
        return;
    }
    num(n-1);
    cout<<n<<" ";
}
int main(){

    int n;
    cout<<"Enter the range of Natural number from 1 to: ";
    cin>>n;

    num(n);

    return 0;
}