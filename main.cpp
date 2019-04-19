#include <iostream>
#include <utility>
using namespace std;
int* sortl(int a[], int n){
    for (int i = 0; i <= n; i++)
        for (int j = i; j <= n; j++)
            if (a[i]<a[j]) swap(a[i],a[j]);
    return a;
}

double* sortl(double a[], int n){
    for (int i = 0; i <= n; i++)
        for (int j = i; j <= n; j++)
            if (a[i]<a[j]) swap(a[i],a[j]);
    return a;
}

int main() {
int q[] = {12,5,57,21,17,39};
double k[]= {12.6, 57.21, 17.39,18.54,5.2};
int *t = q;
sortl(t,6);
for(int i = 0; i < 6; i++) cout << q[i] << ' ';
cout << endl;
double *o = k;
sortl(o,5);
for(int i = 0; i < 5; i++) cout << k[i] << ' ';
 return 0;
}