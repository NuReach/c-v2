#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> names = {
        "Johny Walker",
        "Alan Thomson",
        "Michael Jackson",
        "Oliver Brown",
        "David Johnson"};
    vector<string> filtedName;
    string filter;
    cout << "Enter your search for name : ";
    cin >> filter;
    cout << "Matching name : " << endl;
    for (int i = 0; i < names.size(); i++)
    {
        if (names[i].find(filter) != string::npos)
        {
            filtedName.push_back(names[i]);
        }
    }
    for (string name : filtedName)
    {
        cout << name << endl;
    }
    return 0;
}