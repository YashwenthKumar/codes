// You are using GCC
#include <iostream>
using namespace std;
int fibonacci(int n){
    if(n<=0){
        return 0;
    }
    int first = 0;
    int second = 1;
    int current;
    for(int i=1;i<=n;i++){
        current = first+second;
        first = second;
        second = current;
        cout<<current<<" ";
    }
    return current;
}
int main() {
    int n;
    cin>>n;
    int fib = fibonacci(n);
    cout<<fib;
    return 0;
}