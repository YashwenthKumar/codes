#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    cout<<"Vector Elements: ";
    for(int num: numbers){
        cout<<num<<" ";
    }
    return 0;
}