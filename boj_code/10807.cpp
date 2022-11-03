#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N, tmp;
    int arr[101] = {};
    int neg_arr[101] = {};

    cin>>N;
    for(int i = 0; i < N; i++){
        cin>>tmp;
        if(tmp >= 0){
            arr[tmp]++;
        }
        else if(tmp < 0){
            neg_arr[abs(tmp)]++;
        }
    }
    cin>>tmp;
    if(tmp >= 0){
        cout<<arr[tmp];
    }
    else cout<<neg_arr[abs(tmp)];
}