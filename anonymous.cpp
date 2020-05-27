#include <iostream>
#include <cstring>
using namespace std;

int main(){
    union{
        long l;
        double d;
        char s[4];
    };

    l = 100000;
    cout << l << " ";
    d = 123.2342;
    cout << d << " ";
    strcpy(s, "hi");
    cout << s << endl;

    return 0;
}
