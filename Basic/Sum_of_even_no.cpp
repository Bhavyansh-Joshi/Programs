#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the max range: ";
    cin>>n;

    int i=2, sum=0;
    while(i<=n){
        if(i%2==0){
            sum+=i;
        }
        i=i+1;
    }

    cout<<"The Sum is: "<<sum<<endl;

    return 0;
}