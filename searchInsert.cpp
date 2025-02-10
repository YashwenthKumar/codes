#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> arr,int key){
    for(int i=0;i < arr.size();i++){
        if(arr[i]>=key){
            return i;
        }
    }
    return arr.size();
}
int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key; cin>>key;
    cout<<search(arr,key);
}