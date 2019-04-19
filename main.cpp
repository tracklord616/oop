#include <iostream>
using namespace std;
class property {
protected:
   int worth;
public:
    property(int worth){
        this->worth = worth;
    }
    virtual double nalog() = 0;
};
class car: public property{
public:
    double nalog(){
        return worth/200;
    }
    car(int worth): property(worth){
    nalog();
    }
};
class appartment: public property{
public:
    double nalog(){
        return worth/1000;
    }
    appartment(int worth):property(worth){
    nalog();
    }
};
class countryHouse: public property{
public:
    double nalog(){
        return worth/500;
    }
    countryHouse(int worth):property(worth){
        nalog();
    }
};
int main() {
property *a[7];
double sum;
appartment q = appartment(125000),w = appartment(123456), e = appartment(987654);
car r = car(111111), t = car(222222);
countryHouse y = countryHouse(333333), u = countryHouse(444444);

a[0] = &q;
a[1] = &w;
a[2] = &e;
a[3] = &r;
a[4] = &t;
a[5] = &y;
a[6] = &u;

for (int i=0; i<=6; i++){
    sum += a[i]->nalog();
}
cout << sum;

    return 0;
}