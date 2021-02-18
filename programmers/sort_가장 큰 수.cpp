#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b){
    string tmp1 = a+b;
    string tmp2 = b+a;
    int numa = stoi(tmp1);
    int numb = stoi(tmp2);
    return tmp1 < tmp2;

}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> s_num;
    vector<int> tmp;
    int zero = 0;
    for(int i = 0; i < numbers.size(); i++){
        s_num.push_back(to_string(numbers[i]));
    }
    sort(s_num.begin(), s_num.end(), compare);
    for(int i = s_num.size() - 1; i >= 0; i--){
        answer += s_num[i]; 
    }
    for(int i = answer.size() - 1; i >= 0; i--){
        if(answer.at(i) == '0'){
            zero++;
        }
        else{
            break;
        }
    }
    if(zero == answer.size()){
        answer = "0";
    }
    return answer;
}

int main(){
    vector<int> numbers = {3, 30, 34, 5, 9};
    solution(numbers);
}