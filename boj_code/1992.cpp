#include <iostream>
using namespace std;
int arr[64][64];
bool same(int x, int y, int n){
    for(int i = x; i < x + n; i++){
        for(int j = y; j < y + n; j++){
            if(arr[x][y] != arr[i][j]){
                return false;
            }
        }
    }
    return true;
}
void solution(int x, int y, int n){
    if(!same(x, y, n)){
        cout<<"("; //같지 않으면 분할 되니까 괄호 열기.
        int k = n/2;
        for(int a = 0; a < 2; a++){
            for(int b = 0 ; b < 2; b++){
                solution(x+a*k, y+b*k, k);
            }
        }
        cout<<")"; //한구역 끝나면 괄호 닫기.
        return;
    }
    //다르지 않으면 출력.
    cout<<arr[x][y];
}
int main(){
    int N;
    cin>>N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%1d", &arr[i][j]);
        }
    }
    solution(0, 0, N);
    return 0;
}