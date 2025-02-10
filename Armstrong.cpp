#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num = 153;
    int temp = num;
    int original_num = num;
    int count = 0;
    while(num){
        num /= 10;
        count++;
    }
    num = original_num;
    int result = 0;
    while(num){
        int digit = num % 10;
        result = pow(digit,count);
        num /= 10;
    }
    if(result = original_num){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}

