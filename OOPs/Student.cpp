#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    string name;
    int age;
    int nos;
    float *cgpa;
    // paramaterized constructor
    Student(int id, string name, int age, int nos, float cgpa)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        this->nos = nos;
        this->cgpa = new float(cgpa);
    }
    // copy constructor
    // Student(const Student &srcobj)
    // {
    //     this->id = srcobj.id;
    //     this->name = srcobj.name;
    //     this->age = srcobj.age;
    //     this->nos = srcobj.nos;
    // }
    void showStudent()
    {
        cout << id << " ";
        cout << name << " ";
        cout << age << " ";
        cout << nos << " ";
        cout << *cgpa << " ";
    }
};
int main()
{
    // Student pankaj(508, "pankaj", 21, 9);
    // pankaj.showStudent();
    // Student vaibhav = pankaj;
    // vaibhav.showStudent();

    Student *pankaj = new Student(508, "pankaj", 21, 9, 8.43);
    pankaj->showStudent();
    delete pankaj;
}