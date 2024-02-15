#include<iostream>
using namespace std;

class Base{
    public:
    virtual ~Base(){
        cout<<"Base1\n";
        f();
    }
    virtual void f(){
        cout<<"Base:f\n";
    }
};

class Derived: public Base{
    ~Derived(){
        cout<<"~Derived\n";
    }
    void f(){
        cout<<"Derived:f()\n";
    }
};

int main(){
    Base* bp[10];
    bp[0] = new Derived;

    delete bp[0];

    return 0;
}