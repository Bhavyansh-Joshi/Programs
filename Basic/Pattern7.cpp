/*
Pattern 7:

Enter n: 5
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9

*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
        cout<<i+j<<" ";
        }
        cout<<endl;
    }

    return 0;
    
}