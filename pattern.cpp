//Pattern that prints n-i at end
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int i,j;
    int num = n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"0";
        }
        cout<<n-i+1;
        cout<<endl;
    }
    return 0;
}