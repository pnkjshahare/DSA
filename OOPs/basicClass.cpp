#include <bits/stdc++.h>
using namespace std;
// class
class Chai
{
public:
    string teaName;
    int serving;
    vector<string> ingridents;
    void ingridientShow()
    {
        cout << "TeaName :" << teaName << endl;
        cout << "Serving :" << serving << endl;
        cout << "Ingredients :";
        for (auto ingrident : ingridents)
        {
            cout << ingrident << " ";
        }
    }
};
int main()
{
    Chai chaiOne;
    chaiOne.teaName = "lemon tea";
    chaiOne.serving = 12;
    chaiOne.ingridents = {"water", "lemon"};
    chaiOne.ingridientShow();
    return 0;
}