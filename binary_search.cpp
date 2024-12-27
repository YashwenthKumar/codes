// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
struct date{
    int d,m,y;
};
int cmp(struct date a,struct date b){
    if(a.y<b.y)return 1;
    else if(a.y>b.y)return 0;
    else if(a.m>b.m)return 0;
    else return a.d<b.d;
}
int main() {
    int n;
    cout<<"Enter number of dates: ";cin>>n;
    struct date arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter date: ";
        cin>>arr[i].d>>arr[i].m>>arr[i].y;
    }
    sort(arr,arr+n,cmp);
    for(int i=0;i<n;i++){
        cout<<arr[i].d<<"-"<<arr[i].m<<"-"<<arr[i].y<<"\n";
    }
    
    /*int bs(int arr[],int n,int key){
        int l=0;h = n-1;
        while(l<=h){
            int mid = (l+h)/2;
            if(a[mid] == k)return 1;
            else if(a[mid]>k)h= mid-1;
            else l= mid+1;
        }
    */
        return 0;
    }
