#include <iostream>
#include <vector>
using namespace std;
class book {
public:
    book(){
        name = "";
        pages = 0;
    };
   void set_name(string word){
        name = word;
    }

    string get_name(){
        return name;
    }

    void set_pages(int count){
        pages = count;
    }
    int get_pages(){
       return pages;
   }
private:
    string name;
    int pages;
};
int main() {
string b_name, search_name;
int num,b_pages, num_del;
book b_new;
vector<book> list1;
while (num !=-1) {
        cout << "dobavit knigu(1), udalit knigu(2), naiti po avtoru(3)" << endl;
        cin >> num;
        if (num == 1) {
            cout << "vvedite imya i kol-vo str " << endl;
            cin >> b_name >> b_pages;
            b_new.set_pages(b_pages);
            b_new.set_name(b_name);
            list1.insert(list1.end(), b_new);
        }
        if (num == 2) {
            cin >> num_del;
            list1.erase(list1.begin() + num);
        }
        if (num == 3) {
            cin >> search_name;
            for (int i = 0; i < list1.size(); i++) {
                if (list1[i].get_name() == search_name)
                    cout << "kniga " << list1[i].get_name() << " kol str " << list1[i].get_pages() << endl;
            }
        }
    }
    return 0;
}
