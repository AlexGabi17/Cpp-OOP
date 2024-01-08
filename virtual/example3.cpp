#include<iostream>
using namespace std;

class Pet{
    public:
    virtual string speak() const{return "pet";}
};

class Dog: public Pet{
    public:
    string speak() const{
        return "Bark";
    }
};

int main(){
    Dog ralph;

    Pet* p1 = &ralph;
    Pet& p2 = ralph;

    cout<< p1->speak()<<endl;
    cout<< p2.speak();

    return 0;
}