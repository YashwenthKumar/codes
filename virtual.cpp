#include <iostream>
using namespace std;

class Rectangle{
    public:
    int l,b;
    Rectangle(int l=0,int b=0):l(l),b(b){}
    void displayArea(){
        cout<<"Area of Rectangle is: "<< 2*(l+b)<<endl;
    }
};
class Box:public Rectangle
{
    public:
    int h;
    Box(int l=0,int b=0,int h=0):Rectangle(l,b),h(h){}
    void displayVolume(){
        cout<<"Voulme: "<< (l*b*h)<<endl;
    }
};
int main(){
    Box b(1,2,3);
    Rectangle* r_ptr = &b;
    r_ptr->displayArea();
    Box* b_ptr = static_cast<Box *>(r_ptr);
    b_ptr -> displayVolume();
    return 0;
}





