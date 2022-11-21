#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &arr){

    for(int i=0; i<arr.size()-1; i++){
        int minIndex = i;
        for(int j=i+1; j<arr.size(); j++){
            if(arr[j]<arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }

}

int main(){

    int n;
    cout<<"Enter the number of element: ";
    cin>>n;

    vector<int> arr;
    int a;
    cout<<"Enter the element: ";
    for(int i=0; i<n; i++){
        cin>>a;
        arr.push_back(a);
    }

    cout<<"The unsorted array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    selectionSort(arr);

    cout<<"The sorted array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }    

    return 0;
}