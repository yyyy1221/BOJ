#include <iostream>
using namespace std;
int main(){
    int T; //테스트 케이스 개수
    cin>>T; //테스트 케이스 개수 입력
    int* testcase = new int[T]; //테스트 케이스 개수만큼 배열 할당
    int arr[12] = {0, }; //방법의 수를 저장해 놓을 배열

    for(int i = 0; i < T; i++){ //테스트 케이스 각각 입력
        cin>>testcase[i];
    }

    arr[0] = 1; //계산의 편의를 위해 arr[0] = 1로 설정.
    for(int i = 1; i < 11; i++){
        if(i - 1 >= 0){
            arr[i] += arr[i - 1];
        }
        if(i - 2 >= 0){
            arr[i] += arr[i - 2];
        }
        if(i - 3 >= 0){
            arr[i] += arr[i - 3];
        }
    }

    for(int i = 0; i < T; i++){
        cout<<arr[testcase[i]]<<endl; //arr 배열에 저장해놓은 결과 출력
    }

    return 0;
}