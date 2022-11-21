#include <iostream>
#include <vector>
using namespace std;

void rearrange(int arr[], int n)
{
    int l=0;
    int r=n-1;
    while(l<=r){
        if(arr[l]>0 && arr[r]<0){
            swap(arr[l],arr[r]);
            l++;
            r--;
        }
        else if(arr[l]<0 && arr[r]<0){
            l++;
        }
        else if(arr[l]>0 && arr[r]>0){
            r--;
        }
        else{
            l++;
            r--;
        }
        
    }
    
    
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
 

int main()
{
    int arr[] = { -12, 11, -13, -5, 6, -7, 5, -3, -6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}