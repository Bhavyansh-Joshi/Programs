/*
Pattern 8:

Enter n: 5
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1

*/

#include<iostream>
using namespace std;

int main(){

    int n,k;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        k=i;
        for(int j=0; j<i; j++){
        cout<<k<<" ";
        /*
        Approach 2 : cout<<i-j<<" ";
        */
        k--;
        }
        cout<<endl;
    }

    return 0;
    
}