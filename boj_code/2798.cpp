#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int N, M;
    vector<int> v;
    vector<int> check;
    int tmp;
    int sum = 0;
    int result = 0;
    cin>>N>>M;
    for(int i = 0; i < N; i++){
        cin>>tmp;
        v.push_back(tmp);
    }
    for(int i = 0; i < N - 3; i++){
        check.push_back(0);
    }
    for(int i = 0; i < 3; i++){
        check.push_back(1);
    }
    do{
        for(int i = 0; i < N; i++){
            // cout<<check[i]<<" ";
            if(check[i] == 1) sum +=v[i];
        }
        // cout<<endl;
        if(sum <= M) result = max(result, sum);
        sum = 0;
    }while(next_permutation(check.begin(), check.end()));

    cout<<result;
}