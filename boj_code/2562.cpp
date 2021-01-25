#include <iostream>
using namespace std;
int main(){
    int arr[9] = {0, };
    int max, num;
    for(int i = 0; i < 9; i++){
        cin>>arr[i];
    }
    max = 0;
    for(int i = 0; i < 9; i++){
        if(arr[i] > max){
            max = arr[i];
            num = i + 1;
        }
    }
    cout<<max<<endl;
    cout<<num<<endl;
}