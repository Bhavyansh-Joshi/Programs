#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>& arr, int n){
    //Approach 1
   /* for(int i=n-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }*/
    //Approach 2 (optimized)
    for(int i=1; i<n; i++){
        bool swp = false;
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swp = true;
            }
        }
        if(swp==false){
            break;
        }
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

    bubbleSort(arr,n);

    cout<<"The sorted array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }    

    return 0;
}