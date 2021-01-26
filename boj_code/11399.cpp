#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N;
    cin>>N;
    int time[1000] = {0,};
    int greedy[1000] = {0,};
    int result = 0;
    for(int i = 0; i < N; i++){
        cin>>time[i];
    }
    sort(time, time+N);
    greedy[0] = time[0];
    for(int i = 1; i < N; i++){
        greedy[i] += (greedy[i-1] + time[i]);
    }
    for(int i = 0; i < N; i++){
        result += greedy[i];
    }
    cout<<result;
}