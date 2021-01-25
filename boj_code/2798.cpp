#include <iostream>
#include <cstdlib>
#include <math.h> 

using namespace std;
int main(){
    int N, M;
    cin>>N>>M;
    int *arr_N = new int[N];
    int num = N*(N-1)*(N-2)/6; 
    int *arr = new int[num]; //경우의 수
    int result = 0;
    int abs_num = INFINITY;
    
    for(int i = 0; i < N; i++){
        cin>>arr_N[i];
    }
    int i = 0;
    for(int x = 0; x < N-2; x++){
        for(int y = x+1; y < N-1; y++){
            for(int z = y+1; z < N; z++, i++){
                arr[i] = arr_N[x] + arr_N[y] + arr_N[z];
            }
        }
    }
    for(int i = 0; i < num; i++){
        if(arr[i] < M && abs(M-arr[i]) <= abs_num){
            abs_num = abs(M-arr[i]);
            result = arr[i];
        }
    }
    cout<<result;
    return 0;
}