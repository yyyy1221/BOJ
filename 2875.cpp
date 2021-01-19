#include <iostream>
using namespace std;
int main(){
    int N; //여학생
    int M; //남학생
    int K; //인턴쉽에 참가해야하는 인원
    
    cin>>N>>M>>K;

    int team = 0; //팀 개수

    while(N >= 2 && M >= 1 && N+M >= K + 3){
        N -= 2;
        M -= 1;
        team++;
    }
    cout<<team;
}