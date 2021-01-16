#include <iostream>
using namespace std;
int main(){
    int num[10] = {0,};
    int arr[42] = {0,};
    int count = 0;
    
    for(int i = 0; i < 10; i++){
        cin>>num[i];
    }

    int j = 0;
    for(int i = 0; i < 10; i++){
        arr[num[i]%42]++;
    }

    for(int i = 0; i < 42; i++){
        if(arr[i] > 0)
            count++;
    }
    cout<<count;
}