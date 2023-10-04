#include <iostream>
using namespace std;

bool isValid(string id)
{
    if (id.length() != 8)
    {
        return false;
    }
    for (int i = 0; i < 3; i++)
    {
        if (!isalpha(id[i]))
        {
            return false;
        }
    }
    for (int i = 3; i < id.length(); i++)
    {
        if (!isdigit(id[i]))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string id = "SEM12345";
    cout << isValid(id);
}
