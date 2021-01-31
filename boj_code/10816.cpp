#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
vector<int> num_N;
vector<int> num_M;
vector<int> answer;
int countbyRange(vector<int>& v, int leftValue, int rightValue){
    vector<int>::iterator rightIndex = upper_bound(v.begin(), v.end(), rightValue);
    vector<int>::iterator leftIndex = lower_bound(v.begin(), v.end(), leftValue);
    return rightIndex - leftIndex;
}

int main(){
    int N, M;
    cin>>N;
    for(int i = 0; i < N; i++){
        int x;
        cin>>x;
        num_N.push_back(x);
    }
    sort(num_N.begin(), num_N.end());
    cin>>M;
    for(int i = 0; i < M; i++){
        int y;
        cin>>y;
        num_M.push_back(y);
    }
    for(int i = 0; i < M; i++){
        cout<<countbyRange(num_N, num_M[i], num_M[i])<<" ";
    }
    return 0;
}