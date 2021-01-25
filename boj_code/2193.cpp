#include <iostream>
using namespace std;
int main(){
    int N; //N 자리
    cin>>N; 

    long dp[91] = {0,};
    dp[0] = 0; dp[1] = 1;
    for(int i = 2; i < N+1; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout<<dp[N];
}