/*
Pattern 12 :

Enter n: 5
A 
B C
C D E
D E F G
E F G H I

*/
#include<iostream>
using namespace std;

int main(){

    int n,k=0;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<(char)('A'+(i+j-1))<<" ";
            k++;
        }
        
        cout<<endl;
    }

    return 0;
    
}