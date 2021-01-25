#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool desc(int a, int b){
    return a > b;
}
int main(){
    char arr[100000];
    char ch;
    for(int i = 0; i < 100000; i++){
        cin.get(ch);
        if(ch == '\n'){
            for(; i < 100000; i++){
                arr[i] = '\0';
            }
            break;
        }
        arr[i] = ch;
    }

    int result = 0;
    int count = 0; //0의 개수
    for(int i = 0; i < 100000; i++){
        if(arr[i] == '0'){
            count++;
        }
    }
    
    int sum = 0;
    for(int i = 0; i < 100000; i++){
        if(arr[i] != '\0'){
            sum += arr[i] - '0';
        }
            
    }
    if(sum%3 != 0)
        count = 0;
    
    sort(arr, arr+100000, desc);
    for(int i = 0; i < 100000; i++){
        if(count == 0){
            cout<<-1;
            break;
        }
        if(arr[i] == '\0')
            break;
        cout<<arr[i];
    }
}
