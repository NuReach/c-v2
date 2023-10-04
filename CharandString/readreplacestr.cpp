#include <iostream>
using namespace std;
int main()
{
    string str = "Hello world damm god";
    string inputFind = "world";
    string replace = "what";

    size_t pos = str.find(inputFind);

    while (pos != string::npos)
    {
        str.replace(pos, inputFind.length(), replace);
        pos = str.find(inputFind, pos + replace.length());
    }
    cout << str;
    return 0;
}