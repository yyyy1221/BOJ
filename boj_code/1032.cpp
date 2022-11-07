#include <iostream>
#include <string>
using namespace std;
int main(){
    int N; //파일 이름의 개수
    string file[50];
    char result[50];
    cin>>N;
    for(int i = 0; i < N; i++){
        cin>>file[i];
    }

    for(int i = 0; i < file[0].length(); i++){
        result[i] = file[0].at(i);
    }

    for(int i = 0; i < file[0].length(); i++){
        for(int j = 0; j < N-1; j++){
           if(file[j].at(i) != file[j+1].at(i)){
            result[i] = '?';
           }
        }
    }
    for(int i = 0; i < file[0].length(); i++){
        cout<<result[i];
    }
}
