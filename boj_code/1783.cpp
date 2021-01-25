#include <iostream>
using namespace std;
int main(){
    int N, M; //N : 세로, M : 가로
    int x, y; //나이트의 위치.
    int count = 0; //움직인 횟수
    cin>>N>>M;
    if(N == 1){
        cout<<"1";
        return 0;
    }
    else if(N == 2){
        count = (M - 1) / 2;
        //이동 횟수가 4번보다 많으면 이동방법을 모두 한번씩 사용해야함.
        //그런데 세로가 2일때는 2,3번만 사용 가능하기때문에 최대 4번만 가능.
        count = count > 3 ? 3 : count; 
    }
    else if(M < 7){ //가로가 7보다 작으면 4가지 방법을 모두 사용할 수 없음.
        count = M - 1;
        count = count > 3 ? 3 : count;
    }
    else{
        count = 4 + M - 7;
    }
        cout<<count+1;
    return 0;
    
}