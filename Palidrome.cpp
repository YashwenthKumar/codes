#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num = 1232;
    int i=0;
    int arr[20];
    while(num!=0){
        int digit = num%10;
        arr[i] = digit;
        num /= 10;
        i++;
    }
    bool result = true;
    int j=0;
        while(j<=i){
            if(arr[j]!=arr[i-1]){
                result = false;
            }
            else{
                break;
            }
            j++;
        }
        if(result){
            cout<<"Palindrome";
        }else{
            cout<<"Not Palindrome";
        }
    return 0;
}
