#include <bits/stdc++.h>
using namespace std;
void represent(int n, int m)
{
    int adjcentmatrix[n + 1][m + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjcentmatrix[u][v] = 1;
        adjcentmatrix[v][u] = 1;
    }

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            cout << adjcentmatrix[i][j] << " ";
        }
        cout << endl;
    }
}
void arrayRepresent(int n, int m)
{
    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
 arrayRepresent(5, 6);
    return 0;
}