#include <iostream>
using namespace std;
int main(){
    int student[31] = {};

    int tmp;
    for(int i = 0; i < 28; i++){
        cin>>tmp;
        student[tmp]++;
    }
    for(int i = 1; i < 31; i++){
        if(student[i] == 0){
            cout<<i<<endl;
        }
    }
}