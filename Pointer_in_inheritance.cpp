#include<iostream>
#include<conio.h>
using namespace std;
class base{
    public:
    int b;
    void show(){
        cout<<"\nValue of base class variable ="<<b;
    }
};
class Derived:public base{
    public:
    int d;
    void show(){
        cout<<"\nValue of derived class variable = "<<d;
    }
};
int main(){
    base ob;
    base *bptr;
    bptr = &ob;
    bptr->b=10;
    bptr->show(); //Base class
    Derived od;
    Derived *dptr;
    dptr=&od;
    dptr->d=20;
    dptr->show();   //Derived class
    bptr=&od;
    bptr->b=50;
    bptr->show();   //Base class
    ((Derived*)bptr)->show();  //Derived class
    return 0;
}
