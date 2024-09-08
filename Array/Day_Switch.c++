#include <bits/stdc++.h>
using namespace std;
int main()
{
    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "monday" << endl;
      break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "thursday" << endl;
         break;
    case 5:
        cout << "friday" << endl;
         break;
    case 6:
        cout << "saturday" << endl;
         break;
    case 7:
        cout << "sunday" << endl;
         break;
    default:
        cout << "Enter the correct day no" << endl;
    }
    return 0;
}