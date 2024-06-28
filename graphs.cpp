#include <bits/stdc++.h>
using namespace std;
vector<int> ve(10,0);
void fun(vector<vector<int>>& v,int n,int m) {
    v[n].push_back(m);
    v[m].push_back(n);
    ve[n]=1;
    ve[m]=1;
}


void out(vector<vector<int>>& v,vector<int>& vis,int val) {
    if (vis[val]==1 ) return;
    cout<<val<< " ";
    vis[val]=1;
    for (int i=0; i<v[val].size();i++) {
        if (vis[v[val][i]]==0) {
            out(v,vis,v[val][i]);
        }
    }
}

void dfs(vector<vector<int>>& v,int vertices) {
    vector<int> vis(vertices+1,0);
    for (int i=0; i<vertices;i++) {
        if (vis[i]==0 &&  ve[i]==1) {
            out(v,vis,i);
        }
    }
}

int main() {
    int vertices;
    cin>>vertices;
    int edges;
    cin>>edges;
    vector<vector<int>> v(vertices+1);
    for (int i=0; i<edges;i++) {
        int n,m;
        cin>>n>>m;
        fun(v,n,m);
    }
    dfs(v,vertices);
}