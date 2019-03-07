#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void set_array(int** array, int count)
{
    srand(time(0));
    for (int i=0; i<count; i++)
        for (int j=0; j<count; j++) array[i][j] = 10 + rand() % 40;
}
void get_array(int** array, int count)
{
    for (int i=0; i< count; i++) {
        for (int j = 0; j < count; j++) cout << array[i][j] << ' ';
        cout << "\n";
    }
}
int main() {
    int size;
    cout << "ukazhite razmer" << endl;
    cin >> size;
    int  **couple = new int*[size];
    for (int i = 0; i < size; i++) couple[i] = new int[size];
    set_array(couple, size);
    get_array(couple,size);
    return 0;
}
