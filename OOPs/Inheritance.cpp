#include <bits/stdc++.h>
using namespace std;
class parent
{
public:
    string parent_name = "gaurishankar";
    string parent_address = "Dabha";
    int parent_age = 54;
};

class child : public parent
{
public:
    string child_name = "pankaj";
    string child_address = "Nanded";
    int child_age = 23;
    void getter()
    {
        cout << parent_name;
    }
};
int main()
{
    child A;
    cout << A.child_name << endl;
    A.getter();
}

/*

Notes :

1. if access modifer in parent class then it cannot inherite these varibale method in any mode of inheritance
2. if parent class ->access modifier public but inheritance mode->private
     a. all attribute are ->privte
     b. and access by setter getter function()

3. if parent class access modifer  -> public but inheritance mode ->protected
     a.all attribute are protected
     b. access by getter and setter

4. if parent class access ->modifer ->public but inheritance mode ->public
     a. public attribute are public and protected are protected
*/