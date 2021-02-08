#include <iostream>
using namespace std;
bool star[6561][6561];
void solution(int x, int y, int n){
    if(n == 3){
        for(int i = x; i < x + n; i++){
            for(int j = y; j < y + n; j++){
                if(i%3 != 1 || j%3 != 1){
                    star[i][j] = true;
                }
            }
        }
    }
    else{
        int k = n/3;
        for(int a = 0; a < 3; a++){
            for(int b = 0; b < 3; b++){
                if(a != 1 || b != 1){
                    solution(x+a*k, y+b*k, k);
                }
            }
        }
    }
}
int main(){
    int N;
    cin>>N;
    solution(0, 0, N);
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(star[i][j]){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}