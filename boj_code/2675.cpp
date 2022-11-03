#include <iostream>
#include <string>
using namespace std;
int main(){
    int T, R;
    cin>>T;
    string S;
    for(int i = 0; i < T; i++){
        cin>>R>>S;
        for(int i = 0; i < S.length(); i++){
            for(int j = 0; j < R; j++){
                cout<<S[i];
            }
        }
        cout<<endl;
    }
}