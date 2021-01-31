#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int arr[1001][1001];
//상하좌우
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
int M, N;
queue<pair<int, int>> q;
int max(int a, int b){
    return a > b ? a : b;
}
void bfs(){
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= 0 && ny >= 0 && nx < M && ny < N && arr[ny][nx] == 0){
                arr[ny][nx] = arr[y][x] + 1;
                q.push({nx, ny});
            }
        }
    }
}
int main(){
    cin>>M>>N;
    int MAX = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin>>arr[i][j];
            if(arr[i][j] == 1){
                q.push({j, i});
            }
        }
    }
    bfs();

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(arr[i][j] == 0){
                cout<<"-1\n";
                return 0;
            }
            else if(arr[i][j] > MAX){
                MAX = arr[i][j];
            }
        }
    }
    cout<<MAX-1;
    return 0;
}