#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int max(int a, int b){
    return a > b ? a : b;
}
int main(){
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int sum = 0, tmp = 0;
    do{
        tmp = 0;
        for(int i = 0; i < N - 1; i++){
            tmp += abs(arr[i] - arr[i + 1]);
        }
        sum = max(sum, tmp);
    } while(next_permutation(arr.begin(), arr.end()));
    cout<<sum;
}