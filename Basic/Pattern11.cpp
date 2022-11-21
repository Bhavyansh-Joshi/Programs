/*
Pattern 11 :

n: 5
A B C D E 
B C D E F
C D E F G
D E F G H
E F G H I

*/
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<(char)('A'+(i+j))<<" ";
        }
        
        cout<<endl;
    }

    return 0;
    
}