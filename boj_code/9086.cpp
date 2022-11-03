#include <iostream>
#include <string>
using namespace std;
int main(){
    int T;
    string s;
    cin>>T;
    for(int i = 0; i < T; i++){
        cin>>s;
        cout<<s.at(0)<<s.at(s.length()-1)<<endl;
    }
}