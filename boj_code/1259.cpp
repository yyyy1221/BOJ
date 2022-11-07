#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    int N = 0;
    int flag = 0;
    while(1){
        string s;
        cin>>s;
        if(s[0] == '0') break;
        N = s.length();
        for(int i = 0; i < N/2; i++){
            if(s[i] != s[N-1-i]) flag = 1;
        }
        
        if(flag == 1) cout<<"no"<<endl;
        else cout<<"yes"<<endl;

        flag = 0;
    }
}