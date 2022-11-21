/* Ques: Print Subsequence of an array using recursion.*/

#include<iostream>
#include<vector>
using namespace std;

void subseq(int arr[], int n, vector<int> a, int i){
    if(i>=n){
        for(auto it : a){
            cout<<it<<" ";
        }
        if(a.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }

    a.push_back(arr[i]);
    subseq(arr, n, a, i+1);

    a.pop_back();
    subseq(arr, n, a, i+1);

}

int main(){
    int n;
    cout<<"Enter number of element in an array:  ";
    cin>>n;

    int arr[n];
    cout<<"Enter element in the array:  ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    vector<int> a;

    subseq(arr, n, a, 0);

    return 0;
}