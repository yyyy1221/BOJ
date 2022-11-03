#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) >= 'A' && s.at(i) <= 'Z'){ //대문자면
            s.at(i) += 'a' - 'A';
        }
        else{
            s.at(i) -= 'a' - 'A';
        }
    }
    cout<<s;
}
