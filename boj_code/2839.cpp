#include <iostream>
using namespace std;
int main(){
    int N; //설탕 무게
    int result; //봉지 갯수
    int remainder; //남은 무게

    cin>>N; //설탕 입력

    result = N / 5; 

    while (result >= 0){ 
        remainder = N - result * 5; //설탕 전체에서 5kg봉지에 담고 남은 무게
        if(remainder % 3 == 0){ //남은 무게에서 3으로 나눠지면 
            result = result + remainder / 3; //3kg 봉지에 넣은만큼 결과에 더해준다.
            break;
        }
        result--; //남은 무게에서 3으로 안나눠지면 담아뒀던 5kg 봉지 하나를 뺀다.
    }
    cout<<result;

}