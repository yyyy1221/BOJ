#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool visited[100001];
vector<int> graph[100001];
int parent[100001];
void dfs(int start){
    visited[start] = true;
    for(int i = 0; i < graph[start].size(); i++){
        int y = graph[start][i];
        if(visited[y] == false){
            parent[y] = start;
            dfs(y);
        }
    }
}
int main(){
    int N;
    cin>>N;
    for(int i = 0; i < N - 1; i++){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    dfs(1);
    for(int i = 2; i <= N; i++){
        cout<<parent[i]<<"\n";
    }
    return 0;
}