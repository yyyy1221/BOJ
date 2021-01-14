#include <iostream>
using namespace std;
int max(int a, int b){
    return a > b ? a : b;
}
int main(){
    int N;
    cin>>N;
    int T[17] = {0,}; // 상담 소요 기간
    int P[17] = {0,}; //받을 수 있는 금액
    int result = 0;

    for(int i = 1; i < N+1; i++){
        cin >> T[i] >> P[i] ;
    }
    
    for(int i = N; i > 0; i--){
        if(i + T[i] > N + 1){
            P[i] = P[i+1];
        }
        else{
            P[i] = max(P[i+1], P[i] + P[i+T[i]]);
        }
        result = max(result, P[i]);
    }
    cout<<result;
}