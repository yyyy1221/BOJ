#include <iostream>
using namespace std;
int main(){
    int T, H, W, N;
    int result = 0;
    cin>>T;
    for(int i = 0; i < T; i++){
        result = 0;
        cin>>H>>W>>N;
        if(N%H == 0){
            result += (N/H) + H*100;
        }
        else{
            result += (N/H)+1 + (N%H)*100;
        }
        cout<<result<<endl;
    }
}