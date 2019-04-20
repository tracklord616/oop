#include <iostream>
#include <fstream>
using namespace std;
int main() {
    string kek;
    ofstream fut("sos.txt");
    cout << "enter your line" << endl;
    cin >> kek;
    fut << kek;
    fut.close();
    return 0;
}