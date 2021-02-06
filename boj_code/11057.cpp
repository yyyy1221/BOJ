#include <iostream>
using namespace std;
int main(){
    int N;
    long long dp[1001][11] = {0,};
    cin>>N;
    int sum = 0;
    for(int i = 0; i < 10; i++){
        dp[1][i] = 1;
    }
    for(int i = 2; i <= N; i++){
        for(int j = 0; j < 10; j++){
            for(int k = j; k < 10; k++){
                int x = dp[i - 1][k];
                dp[i][j] = (dp[i][j] + x)%10007;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        sum = (sum + dp[N][i])%10007 ;
    }
    cout<<sum;
    return 0;
}
/*
1일때 0~9 10개
2일때 첫째자리에 올수있는게 0~9 10개
둘째자리에 올수있는게 
9 - 9
8 - 8, 9
7 - 7, 8, 9
6 - 6, 7, 8, 9
5 - 5, 6, 7, 8, 9
4 - 4, 5, 6, 7, 8, 9
3 - 3, 4, 5, 6, 7, 8, 9
2 - 2, 3, 4, 5, 6, 7, 8, 9
1 - 1, 2, 3, 4, 5, 6, 7, 8, 9
0 - 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
n이 n - 1 개 있음.
끝자리 수가 n 일때 뒤에 올수있는 수는
10 - n 개
0부터 9까지
10 ~ 1개 들어있음.
뒷자리에 오는 수의 개수를 dp 배열에 저장함.
0123456789
1일 때, 1 1 1 1 1 1 1 1 1 1
2일 때, 1 2 3 4 5 6 7 8 9 10 //0이 1개, 9가 10개
*/