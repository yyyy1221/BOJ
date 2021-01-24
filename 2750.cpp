#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N; //수의 개수
    cin >> N;
    int *arr = new int[N];
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }
    sort(arr, arr+N);
    for(int i = 0; i < N; i++){
        cout<<arr[i]<<endl;
    }
}