#include <iostream>
using namespace std;

class abstraksilas {
private: string x, y;

public:
    //methode untuk mengisi nilai
    //private member
    void setXY(string a, string b) {
        x = a;
        y = b;
    }
    //menampilkan nilai
    void display() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main() {
    abstraksilas ak;
    ak.setXY("yogyakarta", "kampus");
    ak.display();

    return 0;
};