

// C++ program to illustrate
// concept of Virtual Functions
 
#include <iostream>
using namespace std;
 
class base {
public:
    virtual void print() { cout << "print base class\n"; }
 
    void show() { cout << "show base class\n"; }
};
 
class derived : public base {
public:
    void print() { cout << "print derived class\n"; }
 
    void show() { cout << "show derived class\n"; }
};

class derived2 : public derived{
public:

    void print(){cout << "print from derived2 class\n";}
    void show(){cout << "show derived2 class\n";}
};
 
int main()
{
    base* bptr;
    derived d;
    bptr = &d;
 
    // Virtual function, binded at runtime
    bptr->print();
 
    // Non-virtual function, binded at compile time
    bptr->show();
    
    
    /* OUTPUT
    print derived class
    show base class
    */
    
    // d.show();

    derived2 d2;
    bptr = &d2;

    bptr->print(); // it prints from derived2(runtime)

    bptr->show(); // it prints from base class(binded at compile time)


    /* OUTPUT
    print from derived2 class
    show base class
    */

    return 0;
}