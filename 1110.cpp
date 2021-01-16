#include <iostream>
using namespace std;
int main(){
    int N; //입력 숫자.
    int num; //계산 저장할 숫자.
    int count = 0;
    cin>>N;
    num = N;
    while(1){
        num = (num%10)*10 + (num/10 + num%10)%10;
        count++;

        if(num == N){
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}