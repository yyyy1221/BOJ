#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<pair<int, int>> arr(N);
    for(int i = 0; i < N; i++){
        cin>>arr[i].second>>arr[i].first;
    }

    sort(arr.begin(), arr.end()); //끝나는 시간 기준으로 정렬.

    int time = 0, count = 0;
    for(int i = 0; i < N; i++){
        if(time <= arr[i].second){
            time = arr[i].first;
            count++;
        }
    }
    
    cout<<count;
}
