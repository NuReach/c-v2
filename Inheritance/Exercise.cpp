#include <iostream>

using namespace std;

class Person
{
private:
    string name;

public:
    Person(string pName) : name(pName){};
    void display()
    {
        std::cout << name << std::endl;
    }
};

class Employee : public Person
{
private:
    int employeeId;

public:
    Employee(string pName, int pEmployeedId) : Person(pName), employeeId(pEmployeedId){};
    void display()
    {
        Person::display();
        std::cout << employeeId << std::endl;
    }
};

class Manager : public Employee
{
private:
    string department;

public:
    Manager(string pName, int pEmployeedId, string pDepartment) : Employee(pName, pEmployeedId), department(pDepartment){};
    void display()
    {
        Employee::display();
        std::cout << department << std::endl;
    }
};

int main()
{
    Manager manager1("John", 123, "IT");
    manager1.display();
    return 0;
}
