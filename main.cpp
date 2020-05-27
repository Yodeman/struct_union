#include <iostream>

using namespace std;

struct Test{
    int get_i() { return i; }
    void put_i(int j=0) { i = j; }
private:
    int i;
};

int main()
{
    Test s;

    s.put_i(10);
    cout << s.get_i();

    return 0;
}
