#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> num_N;
vector<int> num_M;
vector<int> answer;

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

    for(int i = 0 ; i < M; i++){
        int x = num_M[i];
        int start = 0;
        int end = num_N.size() - 1;
        int flag = 0;
        while(start <= end){
            int mid = (start+end)/2;
            if(num_N[mid] == x){
                answer.push_back(1);
                flag = 1;
                break;
            }
            else if(num_N[mid] < x){
                start = mid + 1;
            }
            else if(num_N[mid] > x){
                end = mid - 1;
            }
        }
        if(flag == 0){
            answer.push_back(0);
        }
    }
    for(int i = 0; i < answer.size(); i++){
        cout<<answer[i]<<" ";
    }
}