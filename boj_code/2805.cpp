#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long N, M, result = 0;
    vector<int> tree;
    cin>>N>>M;
    for(int i = 0; i < N; i++){
        int x;
        cin>>x;
        tree.push_back(x);
    }
    long long start = 1, end = 2000000000;
    while(start <= end){
        long long mid = (start+end)/2;
        long long sum = 0;
        for(int i = 0; i < N; i++){
            if(tree[i] > mid){
                sum += tree[i] - mid;
            }
        }
        if(sum >= M){
            start = mid + 1;
            if(result < mid){
                result = mid;
            }
        }
        if(sum < M){
            end = mid - 1;
        }
    }
    cout<<result;
}
