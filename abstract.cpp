#include<iostream>
using namespace std;

class shape{
private:
    static int index;
    int l;
public:
    shape(int l1=0):l(l1){index ++;}
    virtual int area() = 0;
    int& get_l(){ return l; };
    int get_index() const {return index;};
    virtual ~shape(){cout<<"shape destructor"<<"\n";}
};

int shape::index;

class square: public shape{

public:
    square():shape(){}
    square(int l1) : shape(l1){}
    int area(){
        return get_l() * get_l();
    }
    ~square(){cout<<"patrat `Destructor"<<"\n";}
};

int main(){

    shape* sqr = new square[100];
    cout<< sqr->get_index()<<"\n"<<sqr->area();

    delete[] sqr;

    return 0;
}