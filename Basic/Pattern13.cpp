/*
Pattern 12 :

Enter n: 5
A 
B C
D E F
G H I J
K L M N O

*/
#include<iostream>
using namespace std;

int main(){

    int n,k=0;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<(char)('A'+k)<<" ";
            k++;
        }
        
        cout<<endl;
    }

    return 0;
    
}