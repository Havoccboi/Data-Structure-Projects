#include <bits/stdc++.h>

using namespace std;
#define N int(1e5)
#define pb push_back
bool visited[N];

vector<vector<int> > ptr(N+1);
void bfs(int src);
void dfs(int src, bool *visited)
{
    visited[src]=1;
    cout << src<< " ";
    for(auto a:ptr[src])
    {
        if(!visited[a])
            dfs(a,visited);
    }

}


int main()
{
    int n, m,x,y;
    cin >> n >> m;
    for(int i=1;i<n;i++)
    {
        cin >> x >> y;
        ptr[x].pb(y);
        ptr[y].pb(x);//bidirectional
    }


    cout << "enter root";

    cin >> x;
    queue<int> q;
    int level[N]={0};

    q.push(x);
    while(!q.empty())
    {

        int s=q.front();
        cout << s<<endl;
        q.pop();
        visited[s]=1;
        for(auto a:ptr[s])
        {
            if(!visited[a])
            {
                q.push(a);
                level[a]=level[s]+1;
            }
        }

    }


}
