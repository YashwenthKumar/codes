#include <iostream>
using namespace std; 
//function to merge the sorted arrays
void merge(int arr[],int left,int mid,int right){
    int i,j,k;
    int n1 = mid-left+1;
    int n2 = right-mid;
    int leftarr[n1],rightarr[n2];
    for(int i=0;i<n1;i++)
        leftarr[i] = arr[left+i];
    for(int j=0;j<n2;j++)
        rightarr[j] = arr[mid+1+j];
    i=0;j=0;k = left;
    while(i<n1 && j<n2){
        if(leftarr[i]<= rightarr[j]){
            arr[k] = leftarr[i];
            i++;
        }else{
            arr[k] = rightarr[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = leftarr[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = rightarr[j];
        j++;
        k++;
    }
    
}
//function to perform merge sort
void mergesort(int arr[],int left,int right){
    if(left<right){
        int mid = left + (right-left)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}
int main(){
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter element "<<i+1<<":"<<endl;
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    cout<<"Sorted Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}