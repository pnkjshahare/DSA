#include <bits/stdc++.h>
using namespace std;
int pascalTriangleType1(int row, int col)
{
    int n = row;
    int r = col;
    int result = 1;
    for (int i = 0; i < col; i++)
    {
        result = result * (n - i);
        result = result / (i + 1);
    }
    return result;
}
void pascalTriangleType2(int row){
    int ans=1;
    cout<<ans<<" ";
    for(int i=1;i<row;i++){
        ans=ans*(row-i);
        ans=ans/i;
        cout<<ans<<" ";
    }
}
int main()
{
    pascalTriangleType2(3);
    return 0;
}