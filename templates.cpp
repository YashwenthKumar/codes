#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}
double add( double a, double b) {
    return a + b;
}
template <typename T> T madd(T x, T y) {
    return (x>y)? x:y;
};
template <typename T> class Array{
    private:
     T* ptr;
     int size;
     public:
     Array(T arr[],int s);
     void print();
};
template <typename T> Array<T>:: print(){
    for(int i=0;i<size;i++){
        cout<<""
    }
}
int main(){
    cout << add(5, 7) << endl;
    cout<<add(2.5,6.9)<<endl;
    cout<<madd<char>('a','b');
    return 0;
}