#include <iostream>
using namespace std;
int main(){
    int T; //테스트 케이스의 개수
    cin >> T;
    int *arr = new int[T];
    for(int i = 0; i < T; i++){
        cin >> arr[i];
    }

    int dp[41] = {0, 1, 1, };
    for(int i = 3; i < 41; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    for(int i = 0; i < T; i++){
        if(arr[i] == 0){
            cout << "1 0" << endl;
        }
        else
        cout << dp[arr[i] - 1] << " " <<dp[arr[i]] <<endl;
    }
}