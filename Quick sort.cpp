// You are using GCC
#include <iostream>
using namespace std;
    int partition(int arr[],int low,int high){
        int pivot = arr[low];
        int start = low;
        int end = high;
        int temp;
        while(start<end){
            while(arr[start]<= pivot){
                start++;
            }
            while(arr[end]> pivot){
                end--;
            }
            if(start<end){
                temp = arr[start];
                arr[start] = arr[end];
                arr[end] = temp;
            }
        }
        temp = arr[low];
        arr[low] = arr[end];
        arr[end] = temp;
        return end;
    }
    void quicksort(int arr[],int low,int high){
        if(low<high){
            int j = partition(arr,low,high);
            quicksort(arr,low,j-1);
            quicksort(arr,j+1,high);
        }
    }

int main() {
  int n;
  cout<<"Enter size of array: ";
  cin>>n;
  int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    cout<<"Sorted Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}