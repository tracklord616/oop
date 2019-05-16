#include <iostream>
#include <string>
using namespace std;
class animal{
protected:
    int height;
    int mass;
public:
    virtual void sound() =0;
    animal(int height, int mass){
        this->height = height;
        this->mass = mass;
    }
};
class cat:public animal{
public:
    void sound(){
        cout << "meow " << "height is " << height << ", " << "mass is " << mass << endl;
    }
    cat(int height, int mass): animal(height, mass){}
};
class dog:public animal{
public:
    void sound(){
        cout << "gav " << "height is " << height << ", "   << "mass is " << mass << endl;
    }
    dog(int height, int mass): animal(height, mass){}
};
class parrot:public animal{
protected:
    string n;
public:
    void sound(){
        cout << n << " " << "height is " << height << ", "   << "mass is " << mass << endl;
    }
    parrot(int height, int mass, string n): animal(height, mass){
        this->n = n;
    }
};

int main() {
    dog a = dog(12,5);
    cat b = cat(6,5);
    string p = "lalka";
    parrot c = parrot(3,4,p);
    a.sound();
    b.sound();
    c.sound();
    return 0;
}