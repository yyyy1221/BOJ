#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N, M;
    cin>>N>>M;
    vector<int> result;
    for(int i = 0; i < N+M; i++){
        int x;
        cin>>x;
        result.push_back(x);
    }
    sort(result.begin(), result.end());
    for(int i = 0; i < result.size(); i++){
        cout<<result[i]<<" ";
    }

    return 0;
}