#include <iostream>
#include <string>
using namespace std;

int main(){
    string S;
    cin>>S;
    int alphabet[26] = {};
    for(int i = 0; i < 26; i++){
        alphabet[i] = -1;
    }

    for(int i = 0; i < S.length(); i++){
        if(alphabet[S.at(i) - 'a'] == -1){
            alphabet[S.at(i) - 'a'] = i;
        }
    }

    for(int i = 0; i < 26; i++){
        cout<<alphabet[i]<<" ";
    }
}
