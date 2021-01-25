#include <iostream>
using namespace std;
int max(int a, int b){
    return a > b ? a : b;
}
int main(){
    int N; // 계단 개수 
    cin >> N; //계단 입력

    int stair[501] = {0, }; //계단 점수 입력할 배열
    int dp[501] = {0, }; //최대값 저장 배열

    //계단 점수 입력
    for(int i = 1; i < N+1; i++){
        cin>>stair[i]; 
    }

    dp[1] = stair[1];
    dp[2] = stair[1] + stair[2];
    dp[3] = max(stair[1] + stair[3], stair[2] + stair[3]);

    for(int i = 4; i < N+1; i++){
        dp[i] = max(dp[i - 2] + stair[i], dp[i - 3] + stair[i -1] + stair[i]);
    }
    
    cout << dp[N] << endl;
}