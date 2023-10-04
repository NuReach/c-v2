#include <iostream>
using namespace std;

// class GradeBook
// {
// public:
//     void displayMsg()
//     {
//         cout << "Welcome to the grade book" << endl;
//     }
//     void exitMsg();
// };

// void GradeBook::exitMsg()
// {
//     cout << "existing the grade book";
// }

// int main()
// {
//     GradeBook gradeBook;
//     gradeBook.displayMsg();
//     gradeBook.exitMsg();

//     return 0;
// }

// example2

// class Demo
// {
// public:
//     int x;
//     int y;
//     void inputData();
//     void showData();
// }

// void
// Demo::inputData()
// {
//     cout << "enter value of x & y: ";
//     cin >> x >> y;
// }

// void Demo::showData()
// {
//     cout << "x: " << x << endl;
//     cout << "y: " << y;
// }

// int main()
// {
//     Demo demo;
//     demo.inputData();
//     demo.showData();
//     return 0;
// }

// exercise

class ReverseNumber
{
public:
    int num;
    void inputNum(int n)
    {
        num = n;
    };

    int getNum()
    {
        return num;
    };

    int reverseNum()
    {
        int save = num;
        int rev;
        int result = 0;
        while (save != 0)
        {
            rev = save % 10;
            result = result * 10 + rev;
            save = save / 10;
        }
        return result;
    };
};

int main()
{
    int n;
    ReverseNumber reverse;
    cout << "enter a number: ";
    cin >> n;
    reverse.inputNum(n);
    cout << reverse.getNum() << "is" << reverse.reverseNum() << endl;
    return 0;
}