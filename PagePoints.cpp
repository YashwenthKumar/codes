#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of books: "<<endl; 
    cin>>n;
    int p_no,points = 0;
    for(int i=0;i<n;i++){
        cout<<"Enter number of pages of book "<<i+1<<" : ";
        cin>>p_no;
        if(p_no < 300){
            points += 5;
        }
        else if(p_no >= 300 && p_no <= 600){
            points += 10;
        }else if(p_no > 600){
            points += 15;
        }else{
            cout<<"Enter valid page number."<<endl;
        }
    }
    cout<<"Total points: "<<points<<endl;
    return 0;
}