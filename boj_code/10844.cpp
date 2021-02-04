#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int dp[101][11] = {0, };
    for(int i = 0; i <= 9; i++){
        dp[1][i] = 1;
    }
    for(int i = 2; i <= N; i++){
        dp[i][0] = dp[i-1][1];
        dp[i][10] = 0;
        for(int j = 0; j <= 9; j++){
            dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1])%1000000000;
        }
    }

    int sum = 0;
    for(int i = 1; i <= 9; i++){
        sum = (sum + dp[N][i]) % 1000000000;
    }
    cout<<sum;
    return 0;
}
/*
2자리
1 - 0, 2
2 - 1, 3
3 - 2, 4
4 - 3, 5
5 - 4, 6
6 - 5, 7
7 - 6, 8
8 - 7, 9
9 - 8

3자리
10 - 1       12 - 1, 3
21 - 0, 2    23 - 2, 4
32 - 1, 3    34 - 3, 5
43 - 2, 4    45 - 4, 6
54 - 3, 5    56 - 5, 7
65 - 4, 6    67 - 6, 8
76 - 5, 6    78 - 7, 9
87 - 6, 7    89 - 8
98 - 7, 8    

*/
 
