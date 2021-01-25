#include <iostream>
#include <algorithm>
using namespace std;
int arr[101][101] = {0,};
int getSum(int startx, int starty, int endx, int endy){
    int sum = 0;
    for(int i = starty; i <= endy; i++){
        for(int j = startx; j <= endx; j++){
            sum += arr[i][j];
        }
    }
    return sum;
}
int main(){
    long long Max = 0;
    int N, M;
    cin>>N>>M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%1d", &arr[i][j]);
        }
    }
    //1번 가로 세개
    for(int i = 0; i < N - 2; i++){
        for(int j = i + 1; j < N - 1; j++){
            long long s1 = getSum(0, 0, i, M - 1);
            long long s2 = getSum(i + 1, 0, j, M - 1);
            long long s3 = getSum(j + 1, 0, N - 1, M - 1);
            Max = max(Max, s1*s2*s3);
        }
    }
    //2번 세로 세개
    for(int i = 0; i < M - 2; i++){
        for(int j = i + 1; j < M - 1; j++){
            long long s1 = getSum(0, 0, N - 1, i);
            long long s2 = getSum(0, i + 1, N - 1, j);
            long long s3 = getSum(0, j + 1, N - 1, M - 1);
            Max = max(Max, s1*s2*s3);
        }
    }
    //3번 위에 세로 둘 아래 가로 하나
    for(int i = N - 1; i > 0; i--){
        for(int j = 0; j < M - 1; j++){
            long long s1 = getSum(i, 0, N - 1, M - 1);
            long long s2 = getSum(0, 0, i - 1, j);
            long long s3 = getSum(0, j + 1, i - 1, M - 1);
            Max = max(Max, s1*s2*s3);
        }
    }
    //4번 위에 가로 하나 아래 세로 둘
    for(int i = 0; i < N - 1; i++){
        for(int j = 0; j < M - 1; j++){
            long long s1 = getSum(0, 0, i, M - 1);
            long long s2 = getSum(i+1, 0, N - 1, j);
            long long s3 = getSum(i+1, j+1, N-1, M-1);
            Max = max(Max, s1*s2*s3);
        }
    }
    //5번 왼쪽 세로 하나 오른쪽 가로 둘
    for(int i = 0; i < M - 1; i++){
        for(int j = 0; j < N - 1; j++){
            long long s1 = getSum(0, 0, N - 1, i);
            long long s2 = getSum(0, i+1, j, M-1);
            long long s3 = getSum(j+1, i+1, N-1, M-1);
            Max = max(Max, s1*s2*s3);
        }
    }
    //6번 왼쪽 가로 둘 오른쪽 세로 하나
    for(int i = M-1; i < 0; i--){
        for(int j = 0; j < N-1; j++) {
            long long s1 = getSum(0, i, N-1, M-1);
            long long s2 = getSum(0, 0, j, i-1);
            long long s3 = getSum(j+1, 0, N-1, i-1);
            Max = max(Max, s1*s2*s3);
        }   
    }
    cout<<Max<<endl;
    
}