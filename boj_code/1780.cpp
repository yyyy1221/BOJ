#include <iostream>
using namespace std;
int arr[2187][2187];
int count_paper[3]; //index 0 : -1, index 1 : 0, index 2 : 1

void solution(int x, int y, int n){
    if(n == 1){
        count_paper[arr[x][y] + 1]++;
        return;
    }
    for(int i = x; i < x+n; i++){
        for(int j = y; j < y+n; j++){
            //다르면 종이 쪼개기.
            if(arr[x][y] != arr[i][j]){
                int k = n/3;
                for(int a = 0; a < 3; a++){
                    for(int b = 0; b < 3; b++){
                        solution(x + a*k, y + b*k, k);
                    }
                }
                return;
            }
            
        }
    }
    //다르지 않으면 해당 종이갯수++
    count_paper[arr[x][y] + 1]++;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin>>N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin>>arr[i][j];
        }
    }
    solution(0, 0, N);
    for(int i = 0; i < 3; i++){
        cout<<count_paper[i]<<"\n";
    }
    return 0;
}

