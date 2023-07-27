#include <iostream>
#include <string>
using namespace std;
int main()
{
    int numbers[] = {1, 3, 5, 7};
    int *ptr = &numbers[3];
    while (ptr >= numbers)
    {
        cout << *ptr << endl;
        ptr--;
    }

    return 0;
}