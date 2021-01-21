#include <iostream>
using namespace std;
int main(){
    int N; //막대기의 개수
    cin>>N;
    int *arr = new int[N];
    int count = 0;
    int right;

    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }

    right = arr[N-1];
    for(int i = N - 2; i >= 0; i--){
        if(arr[i] > right){
            count++;
            right = arr[i];
        }
    }
    cout<<count + 1;
}