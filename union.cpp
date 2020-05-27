#include <iostream>
using namespace std;

union u_type{
    short int i;
    char ch[2];

    u_type(short int a) { i = a; };
    u_type(char x, char y) { ch[0] = x; ch[1] = y; }

    void showchars(){
        cout << ch[0] << " ";
        cout << ch[1] << "\n";
    }

};

int main(){
    u_type u1(1000);
    u_type u2('X', 'Y');

    cout << "u1 as integer: ";
    cout << u1.i << "\n";
    cout << "u1 as chars: ";
    u1.showchars();

    cout << "u2 as integer: ";
    cout << u2.i << "\n";
    cout << "u2 as chars: ";
    u2.showchars();

    return 0;
}
