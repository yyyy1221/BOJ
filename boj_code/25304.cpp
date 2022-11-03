#include <iostream>
using namespace std;
int main(){
    int X, N, a, b;
    int sum = 0;
    cin>>X; //영수증에 적힌 총 금액
    cin>>N; //구매한 물건 종류의 수
    
    for(int i = 0; i < N; i++){
        cin>>a>>b;
        sum += a * b;
        a = 0; b = 0;
    }

    if(sum == X){
        cout<<"Yes";
    }
    else cout<<"No";

}