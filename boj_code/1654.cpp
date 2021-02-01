#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
vector<int> lan;
int max(int a, int b){
    return a > b ? a : b;
}
int main(){
    int K, N;
    cin>>K>>N;
    for(int i = 0; i < K; i++){
        int x;
        cin>>x;
        lan.push_back(x);
    }
    
    long long start = 1, end = INT32_MAX, MAX = 0;
    while(start <= end){
        long long mid = (start+end)/2;
        int count = 0;
        for(int i = 0; i < lan.size(); i++){
            count += lan[i]/mid;
        }
        if(count >= N){
            MAX = max(MAX, mid);
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    cout<<MAX;
}