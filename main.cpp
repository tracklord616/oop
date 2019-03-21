#include <iostream>
#include <ctime>
using namespace std;
void sorty(int a[],int n)
{
    for (int i=0; i<n;i++)
        for (int j=i; j<n;j++) if (a[i]<a[j]) swap(a[i],a[j]);
}
void sorty(double a[],int n)
{
    for (int i=0; i<n;i++)
        for (int j=i; j<n;j++) if (a[i]<a[j]) swap(a[i],a[j]);
}
int main() {
int n;
cin >> n;
int a[n];
double b[n];
srand(time( 0 ) );
for (int i=0; i < n; i++) a[i] = rand() % 101;
for (int i=0; i < n; i++) b[i] = (rand() % 101) * 1.57;
for (int i=0; i < n; i++) cout << a[i] << ' ';
cout << endl;
for (int i=0; i < n; i++) cout << b[i] << ' ';
cout << endl;
cout << endl;
    sorty(a,n);
    sorty(b,n);
for (int i=0; i < n; i++) cout << a[i] << ' ';
cout << endl;
for (int i=0; i < n; i++) cout << b[i] << ' ';
return 0;
}