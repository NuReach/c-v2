#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x = 10;
    int y = 20;
    int *ptrX = &x;
    int *ptrY = &y;
    int *ptrZ = NULL;
    cout << "BEFORE SWAPPING : -x :" << *ptrX << " y :" << *ptrY << endl;
    ptrZ = ptrX;
    ptrX = ptrY;
    ptrY = ptrZ;
    cout << "AFTER SWAPPING : -x :" << *ptrX << " y :" << *ptrY << endl;
    return 0;
}