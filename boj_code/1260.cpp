#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool visited[1001];
bool visited2[1001];
vector<int> graph[1001];
void dfs(int x){
    visited[x] = true;
    cout<<x<<" ";
    for(int i = 0; i < graph[x].size(); i++){
        int y = graph[x][i];
        if(visited[y] != true){
            dfs(y);
        }
    }
}
void bfs(int start){
    queue<int> q;
    q.push(start);
    visited2[start] = true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        cout<<x<<" ";
        for(int i = 0; i < graph[x].size(); i++){
            int y = graph[x][i];
            if(visited2[y] == false){
                q.push(y);
                visited2[y] = true;
            }
        }
    }
}

int main(){
    int N, M, V; //N : 정점, M : 간선, V: 시작
    cin>>N>>M>>V;
    for(int i = 0; i < M; i++){
        int x = 0, y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for(int i = 1; i < N; i++){
        sort(graph[i].begin(), graph[i].end());
    }
    dfs(V);
    cout<<"\n";
    bfs(V);
}