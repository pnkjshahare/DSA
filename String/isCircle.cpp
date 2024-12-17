#include <bits/stdc++.h>
using namespace std;
bool isCircle(vector<string> arr)
{
    vector<char> firstIndex;
    vector<char> lastIndex;
    for (int i = 0; i < arr.size(); i++)
    {
        string demo = arr[i];
        int n = demo.size();
        firstIndex.push_back(demo[0]);
        lastIndex.push_back(demo[n - 1]);
    }
    int index = 0;
    for (int i = 1; i < firstIndex.size(); i++)
    {
        if (firstIndex[i] != lastIndex[index])
        {
            return false;
        }
        index++;
    }
    return true;
}
int main()
{

    vector<string> arr = {"ab", "bc", "cd", "da"};
    cout<<isCircle(arr);
    return 0;
}