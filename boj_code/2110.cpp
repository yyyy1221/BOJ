#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int N, C; // N:집의 개수, C:공유기의 개수
    int count = 0, result = 0;
    vector<int> house;
    cin>>N>>C;
    for(int i = 0; i < N; i++){
        int x;
        cin>>x;
        house.push_back(x);
    }
    sort(house.begin(), house.end());

    int start = 1, end = house[N - 1] - house[0];
    while(start <= end){
        int mid = (start+end)/2;
        int prev = house[0];
        count = 1;
        for(int i = 0; i < N; i++){
            if(house[i] - prev >= mid){
                count++;
                prev = house[i];
            }
        }
        if(count < C){
            end = mid - 1;
        }
        else if(count >= C){
            start = mid + 1;
            result = mid;
        }
    }
    cout<<result;
}