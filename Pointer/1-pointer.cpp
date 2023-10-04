#include <iostream>
#include <string>
using namespace std;
int main()
{
    int y = 5;
    int *yPtr;
    yPtr = &y;
    cout << "y addr: " << &y << endl;
    cout << "y val: " << y << endl;
    cout << "yPtr addr: " << &yPtr << endl;
    cout << "yPtr val: " << yPtr << endl;
    cout << "deref yPtr: " << *yPtr;
    return 0;
}