#include <iostream>
using namespace std;

class parent{
    public:
    int a;

    virtual void method(){
        cout << "test";
    }
};

class child: public parent{
    public:

    void method(){
        cout <<  "auiwghduhawd";
    }

};


int main (){
    child a;

    a.method();
}





