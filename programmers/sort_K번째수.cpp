#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(int i = 0; i < commands.size(); i++){
        vector<int> num;
        num.clear();
        for(int j = commands[i][0] - 1; j < commands[i][1]; j++){
                num.push_back(array[j]);
            }
        sort(num.begin(), num.end());
        answer.push_back(num[commands[i][2] - 1]);
    }
    return answer;
}

int main(){
    vector<int> array = {1, 5, 2, 6, 3, 7, 4};
    vector<vector<int>> commands = {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}};
    solution(array, commands);
}