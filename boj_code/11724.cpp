#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool visited[1001];
vector<int> graph[1001];
void dfs(int x){
    visited[x] = true;
    for(int i = 0; i < graph[x].size(); i++){
        int y = graph[x][i];
        if(visited[y] != true){
            dfs(y);
        }
    }
}

int main(){
    int N, M, count=0;
    cin>>N>>M;
    for(int i = 0; i < M; i++){
        int x, y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for(int i = 1; i < N + 1; i++){
        sort(graph[i].begin(), graph[i].end());
    }
    for(int i = 1; i <= N; i++){
        if(visited[i] == false){
            count++;
            dfs(i);
        }
        dfs(i);
    }
    cout<<count;
}