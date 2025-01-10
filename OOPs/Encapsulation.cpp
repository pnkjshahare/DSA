#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
    int id;
    string name;
    int age;
    int nos;
    float cgpa;
    void showStudent()
    {
        cout << id << " ";
        cout << name << " ";
        cout << age << " ";
        cout << nos << " ";
        cout << cgpa << " ";
    }
    // paramaterized constructor
public:
    Student(int id, string name, int age, int nos, float cgpa)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        this->nos = nos;
        this->cgpa = cgpa;
    }

public:
    void getter()
    {
        cout << this->name << endl;
        cout << this->cgpa << endl;
    }
    void setter(string name)
    {
        this->name = name;
    }
};
int main()
{
    Student pankaj(508, "pankaj", 21, 9, 8.43);
    pankaj.getter();
    pankaj.setter("pranay");
    pankaj.getter();
}

// Note
/*

1. constructor and desctror always public
2. getter and setter must be public to set and get the data from private attribute or varibale
 */