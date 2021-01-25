#include <iostream>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;

    string quiz;
    int score[1000] = {0,};
    
    int plus = 1;
    for(int i = 0; i < testcase; i++){
        cin>>quiz;
        for(int j = 0; j < quiz.size(); j++){
            if(quiz.at(j) == 'O'){
                score[i] += plus;
                plus++;
            }
            else{
                plus = 1;
            }
        }
    }
    for(int i = 0; i < testcase; i++){
        cout<<score[i]<<endl;
    }

}