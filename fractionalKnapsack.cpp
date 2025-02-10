#include <bits/stdc++.h>
using namespace std;
struct item{
    int w,p;
};
bool cmp(item a,item b){
    double r1 = (double)a.p/a.w;
    double r2 = (double)b.p/b.w;
    return r1>r2;
}
double fk(int w,vector<item>items,int n){
    double max = 0;
    sort(items.begin(),items.end(),cmp);
    for(int i=0;i<n;i++){
        if(w>= items[i].w){
            max += items[i].p;
            w -= items[i].w;
        }else{
            max += items[i].p * ((double)w/items[i].w);
            break;
        }
    }
    return max;
}
int main(){
    int n,w;
    cout<<"Enter number elements in knapsack:";
    cin>>n;
    cout<<"Enter knapsack weight:";
    cin>>w;
    vector<item>items(n);
    for(int i=0;i<n;i++){
        cin>>items[i].w>>items[i].p;
    }
    cout<<fk(w,items,n);
    return 0;
}



