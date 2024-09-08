#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, output_no=0;
    cin >> k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int no = arr[i];
        while (n > 0)
        {
            int digit = no % 10;
            no = n / 10;
            if (digit == k)
            {
                output_no = output_no * 10 + digit;
            }
        }
    }
    if(output_no==0){
        cout<<"-1" ;
    }
    else{
        cout<<output_no;
    }
    return 0;
}