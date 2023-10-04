#include <iostream>
using namespace std;

void getNumOfWords(string str)
{
  int count = 0;
  char space = ' ';
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == space)
    {
      count++;
    }
  }
  std::cout << "Number of words " << count + 1 << std::endl;
}

int main()
{
  string str;
  cout << "Enter a sentence : ";
  getline(cin, str);
  getNumOfWords(str);
  return 0;
}
#include <iostream>
using namespace std;

void getNumOfWords(string str)
{
  int count = 0;
  char space = ' ';
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == space)
    {
      count++;
    }
  }
  std::cout << "Number of words " << count + 1 << std::endl;
}

int main()
{
  string str;
  cout << "Enter a sentence : ";
  getline(cin, str);
  getNumOfWords(str);
  return 0;
}
