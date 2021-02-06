#include <iostream>
using namespace std;
int main(){
    string word;
    cin>>word;
    int alphabet[26] = {0, };
    for(int i = 0; i < word.size(); i++){
        if(word.at(i) >= 'A' && word.at(i) <= 'Z'){
            alphabet[word.at(i) - 'A']++;
        }
        else if(word.at(i) >= 'a' && word.at(i) <= 'z'){
            alphabet[word.at(i) - 'a']++;
        }
    }
    int max = 0; char result;
    for (int i = 0; i < 26; i++){
        if(alphabet[i] >= max){
            max = alphabet[i];
            result = i + 'A';
        }
        
    }

    int count = 0;
    for(int i = 0; i < 26; i++){
        if(max == alphabet[i]){
            count++;
        }
    }

    if(count > 1){
        cout<<"?";
    }
    else{
        cout<<result;
    }

    return 0;
}

