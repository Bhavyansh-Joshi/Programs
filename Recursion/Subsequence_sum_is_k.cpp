/* Ques: Print all the Subsequence of an array whose sum is equall to k using recursion.*/

#include<iostream>
#include<vector>
using namespace std;

void subsum(int arr[], int n, vector<int> a, int i, int k, int s){
    
    if(i>=n){
        for(auto it : a){
            s+=it;
        }
        if(s==k){
            for(auto it : a){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }

    a.push_back(arr[i]);
    subsum(arr, n, a, i+1, k, s);

    a.pop_back();
    subsum(arr, n, a, i+1, k, s);

}

int main(){

    int n, k;
    cout<<"Enter number of element in an array:  ";
    cin>>n;

    int arr[n];
    cout<<"Enter element in the array:  ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the sum to check:  ";
    cin>>k;

    vector<int> a;

    subsum(arr, n, a, 0, k, 0);

    return 0;

}