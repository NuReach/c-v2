#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    // example 1
    //  char source[] = "Hello, world";
    //  char destination[20];
    //  strcpy(destination, source);
    //  cout << source << endl;
    //  cout << destination << endl;

    // example 2
    // char x[] = "Happy Birthday to You";
    // char y[25];
    // char z[15];
    // strcpy_s(y, x);
    // cout << "The string array of x is : " << x
    //      << " \nThe string array of y is : " << y << '\n';
    // strncpy_s(z, x, 14);
    // z[14] = '\2';
    // cout << "The string is array z is : " << z << endl;

    // example 3
    // char str1[20] = "Hello ,";
    // char str2[] = "world!";
    // strcat(str1, str2);
    // cout << str1 << endl;

    // example 4
    // char s1[20] = "Happy ";
    // char s2[] = "New Year ";
    // char s3[40] = "";

    // cout << "s1 = " << s1 << "\ns2 = " << s2;
    // strcat(s1, s2); // concatenate s2 to s1
    // cout << "\n\nAfter strcat(s1, s2):\ns1 = " << s1 << "\ns2 = " << s2;
    // strncat(s3, s1, 6);
    // cout << "\n\nAfter strncat(s3, s1, 6):\ns1 = " << s1 << "\ns3 = " << s3;
    // strcat(s3, s1); // concatenate s1 to s3
    // cout << "\n\nAfter strcat(s3, s1):\ns1 = " << s1 << "\ns3 = " << s3 << endl;

    // example 5
    // char str1[] = "hello";
    // char str2[] = "world";
    // int result = strcmp(str1, str2);
    // if (result < 0)
    // {
    //     cout << "str1 is less than str2";
    // }
    // else if (result = 0)
    // {
    //     cout << "str1 is equal than str2";
    // }
    // else
    // {
    //     cout << "str1 is biger than str2";
    // }

    // example 6
    // char str[] = "Hello, world!";
    // int length = strlen(str);
    // cout << length;

    // example 7
    // char sentence[] = "This is a sentence with 7 tokens";
    // char *tokenPtr;
    // cout << "The string to be tokenized is:\n"
    //      << sentence << "\n\nThe tokens are:\n\n";
    // tokenPtr = strtok(sentence, " ");
    // while (tokenPtr != NULL)
    // {
    //     cout << tokenPtr << '\n';
    //     tokenPtr = strtok(NULL, " "); // get next token
    // }
    // cout << "\nAfter strtok, sentence = " << sentence << endl;

    // example 8
    // string name = "John";
    // if (name.starts_with('j'))
    // {
    //     cout << "true";
    // }
    // else if (name.ends_with('hn'))
    // {
    //     cout << "true";
    // }
    // else if (name.empty())
    // {
    //     cout << "empty";
    // }
    // cout << name.front();
    // cout << name.back();

    // example9
    return 0;
}
