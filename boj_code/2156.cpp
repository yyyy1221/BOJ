#include <iostream>
using namespace std;
int max(int a, int b){
    return a > b ? a : b;
}
int main(){
    int N; // 포도주 잔의 개수
    cin >> N; 

    int cup[10001] = {0, }; //포도주 값 저장 배열
    int dp[10001] = {0, }; //최대값 저장 배열

   
    for(int i = 1; i < N+1; i++){
        cin>>cup[i]; 
    }

    dp[1] = cup[1];
    dp[2] = cup[1] + cup[2];

    for(int i = 3; i < N + 1; i++){
        dp[i] = max(dp[i-2] + cup[i], dp[i-3] + cup[i-1] + cup[i]);
        dp[i] = max(dp[i-1], dp[i]);
    }

    cout << dp[N] << endl;
}