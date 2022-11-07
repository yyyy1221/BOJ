#include <iostream>
using namespace std;
int main(){
    int N, K;
    int result = 1;
    cin>>N>>K;
    for(int i = 1; i <= K; i++){
        result *= N;
        result /= i;
        N--;
    }

    cout<<result;

}