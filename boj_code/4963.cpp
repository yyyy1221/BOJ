#include <iostream>
#include <vector>
using namespace std;
vector<int> answer;
int graph[51][51];
bool visited[51][51];

//북, 북동, 동, 남동, 남, 남서, 서, 북서
int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int w, h, count;
void clearinfo(){
    for(int i = 0; i < 51; i++){
        for(int j = 0; j < 51; j++){
            visited[i][j] = false;
        }
    }
    count = 0;
}
void dfs(int y, int x){
    if(visited[y][x] == true){
        return;
    }
    visited[y][x] = true;
    for(int k = 0; k < 8; k++){
        int nx = x + dx[k];
        int ny = y + dy[k];
        if(nx >= 0 && nx < w && ny >= 0 && ny < h && !visited[ny][nx] && graph[ny][nx] == 1){
            dfs(ny, nx);
        }
    }
}
int main(){
    while(1){
        clearinfo();
        cin>>w>>h;
        if(w == 0 || h == 0){
            break;
        }
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                cin>>graph[i][j];
            }
        }
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                if(visited[i][j] == false && graph[i][j] == 1){
                    dfs(i, j);
                    count++;
                }
            }
        }
        answer.push_back(count);
    }
    for(int i = 0; i < answer.size(); i++){
        cout<<answer[i]<<"\n";
    }
    return 0;
}