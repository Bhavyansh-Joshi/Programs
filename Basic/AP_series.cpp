/*Ques: Write a programe to print the sum and the nth term of 
the AP series of (3*n+7) using functions.*/

#include <iostream>
using namespace std;

int nthTerm(int n){
    int term=0;
    term=(3*n)+7; 
    return term;
}

int seriesSum(int n){
    int sum=0;
    for(int i=0; i<n; i++){
       sum+=(3*i)+7; 
    }
    return sum;
}

int main(){

    int n;
    cout<<"Enter the no of element in the series: ";
    cin>>n;

    int sum = seriesSum(n);
    int term = nthTerm(n);
    cout<<"The Sum is: "<<sum<<endl;
    cout<<"The nth term is: "<<term;

    return 0;
}