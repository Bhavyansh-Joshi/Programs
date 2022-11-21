/*
Pattern 12 :

Enter n: 5
A
B B
C C C
D D D D
E E E E E

*/
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<(char)('A'+(i-1))<<" ";
        }
        
        cout<<endl;
    }

    return 0;
    
}