#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int compare(pair<int, string> a, pair<int, string> b){
    if(a.first < b.first)
        return true;
    else
        return false;
    
}
int main(){
    int N;
    cin>>N;
    vector<pair<int, string>> arr(N);
    for(int i = 0; i < N; i++){
        cin>>arr[i].first>>arr[i].second;
    }
    stable_sort(arr.begin(), arr.end(), compare);

    for(int i = 0; i < N; i++){
        cout<<arr[i].first<<" "<<arr[i].second<<"\n"; //endl 쓰면 시간초과.
    }

    return 0;
}