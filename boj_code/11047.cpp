#include <iostream>
using namespace std;
int main(){
    int N, K; //N : 동전종류, K : 금액.
    cin>>N>>K;
    int *money = new int[N];

    for(int i = 0; i < N; i++){
        cin>>money[i];
    }

    int count = 0;
    int Q;
    for(int i = N - 1; i >= 0; i--){
        if(K >= money[i]){
            Q = K/money[i];
            count += Q;
            K -= money[i]*Q;
        }
        if(K == 0)
            break;
    }
    cout<<count;
}