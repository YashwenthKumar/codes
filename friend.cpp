//friend function in c++:
//
// #include <iostream>
// using namespace std;
// class yash;
// class ankith{
//     private:
//     int money = 200;
//     friend void rohith(ankith,yash);
// };
// class yash{
//     private:
//     int money = 500;
//     friend void rohith(ankith,yash);
// };
// void rohith(ankith r1,yash r2){
//     cout<<"Sum: "<<r1.money+r2.money<<endl;
// }
// int main() {
//     yash obj1;
//     ankith obj2;
//     rohith(obj2,obj1);
//     return 0;
// }
//
// C++ Program to demonstrate the
// functioning of a friend class
#include <iostream>
using namespace std;

class GFG {
private:
    int private_variable;

protected:
    int protected_variable;

public:
    GFG()
    {
        private_variable = 10;
        protected_variable = 99;
    }

    // friend class declaration
    friend class F;
};

// Here, class F is declared as a
// friend inside class GFG. Therefore,
// F is a friend of class GFG. Class F
// can access the private members of
// class GFG.
class F {
public:
    void display(GFG& t)
    {
        cout << "The value of Private Variable = "
             << t.private_variable << endl;
        cout << "The value of Protected Variable = "
             << t.protected_variable;
    }
};

// Driver code
int main()
{
    GFG g;
    F fri;
    fri.display(g);
    return 0;
}
