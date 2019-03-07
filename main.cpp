#include <iostream>
#include <cmath>
using namespace std;

int main()
{
double a,b,z,t;
    cout << "vvedite a, b" << endl;
    cin >> a >> b;
    if (a<b) z = sqrt(abs(a*a-b*b));
        else z = 1 - cos(a)*sin(b);
    if (z < b) t = pow((z+a*a*b), 1.0/3.0);
    if (z == b) t = 1 - log10(z) + cos(a*a*b);
    if ((z>b) && (a !=0) && (z !=0)) t = 1/cos(z*a);
    cout << "t = " << t << " z = " << z << endl;
    return 0;
}
