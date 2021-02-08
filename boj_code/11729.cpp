#include <iostream>
#include <cmath>
using namespace std;
void hanoi(int first, int second, int third, int n){
    if(n == 1){
        cout<<first<<" "<<third<<"\n";
    }
    else{
        //N-1 개를 1번에서 2번으로 옮기고 n번째 돌을 3번으로 옮김.
        hanoi(first, third, second, n-1);
        cout<<first<<" "<<third<<"\n";
        //다시 N-1개를 2에서 3으로 옮김.
        hanoi(second, first, third, n-1);
    }
}
int main(){
    ios::sync_with_stdio(false);
    cout.tie(0);
    int N;
    cin>>N;
    int move = pow(2, N) - 1;
    cout<<move<<"\n";
    hanoi(1, 2, 3, N);
    return 0;
}