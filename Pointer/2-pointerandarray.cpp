#include <iostream>
#include <string>
using namespace std;
int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    cout << "addr of array" << numbers << endl;
    int *ptr = numbers;
    cout << "addr of ptr:" << ptr << endl;
    cout << "value of array:" << *numbers << endl;
    cout << "value of ptr:" << *ptr << endl;
    cout << "value of ptr:" << ptr[4] << endl;
    cout << "value of arr:" << numbers[4] << endl;
    return 0;
}