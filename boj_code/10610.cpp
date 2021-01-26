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
    //입력된 각 숫자를 더한다.
    for(int i = 0; i < 100000; i++){
        if(arr[i] != '\0'){
            sum += arr[i] - '0';
        }
            
    }

    //3의 배수가 아니면 count를 0으로.
    if(sum%3 != 0)
        count = 0;

    //내림차순 정렬
    sort(arr, arr+100000, desc);

    for(int i = 0; i < 100000; i++){
        //3의 배수가 아니거나, 입력 숫자에 0이 없을 때.
        if(count == 0){
            cout<<-1;
            break;
        }
        if(arr[i] == '\0')
            break;
        cout<<arr[i];
    }
}
