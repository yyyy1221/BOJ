#include <iostream>
#include <string.h>
using namespace std;

int max(int a, int b){
    return a > b ? a : b;
}

int main(){
    int n; //삼각형의 크기
    cin>>n; //삼각형 크기 입력
    int max_num = 0; //반복문에서 갱신되는 최대값을 저장.

    //정수 삼각형 2차원배열 동적할당
    int **arr = new int*[n];
    for(int i = 0; i < n; i++){
        arr[i] = new int[n];
        memset(arr[i], 0, sizeof(int)*n);
    }

    //정수 삼각형 입력
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 1; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0){ //삼각형의 좌측 끝인 경우
                arr[i][j] = arr[i-1][j] + arr[i][j];
            }
            else if(j == i){ //삼각형의 우측 끝인 경우
                arr[i][j] = arr[i-1][j-1] + arr[i][j];
            }
            else{
                arr[i][j] = max(arr[i-1][j-1] + arr[i][j], arr[i-1][j] + arr[i][j]);
            }
            max_num = max(max_num, arr[i][j]);
        }
    }
    cout<<max_num;
    return 0;
}