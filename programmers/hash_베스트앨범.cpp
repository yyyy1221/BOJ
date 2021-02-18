#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

bool cmp(pair<string, int>& a, pair<string, int>& b){
    if(a.second == b. second){
        return a.second > b.second;
    }
    return a.second > b.second;
}

bool cmparr(pair<int, int>& a, pair<int, int> & b){
    if(a.first == b.first){
        return a.first > b.first;
    }
    return a.first > b.first;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    vector<string> ranking;
    map<string, int> m;
    int i = 0;
    for(auto genre : genres){
        m[genre] += plays[i];
        i++;
    }

    //vec벡터에 맵 넣어서 정렬.
    vector<pair<string, int>> vec(m.begin(), m.end());

    //재생 횟수 많은 기준으로 정렬.
    sort(vec.begin(), vec.end(), cmp);

    //장르순위대로. <플레이횟수, 인덱스(고유번호)>
    vector<pair<int, int>> arr[100];

    for(int i = 0; i < vec.size(); i++){
        for(int j = 0; j < genres.size(); j++){
            if(vec[i].first == genres[j]){
                arr[i].push_back(make_pair(plays[j], j));
            }
        }
    }
    for(int i = 0; i < vec.size(); i++){
        sort(arr[i].begin(), arr[i].end(), cmparr);
    }

    for(int i = 0; i < vec.size(); i++){
        if(arr[i].size() > 1){
            answer.push_back(arr[i][0].second);
            answer.push_back(arr[i][1].second);
        }
        else{
            answer.push_back(arr[i][0].second);
        }
    }

    return answer;
}

int main(){
    vector<string> genres = {"classic", "pop", "classic", "classic", "pop"};
    vector<int> plays = {500, 600, 150, 800, 2500};

    vector<int> answer = solution(genres, plays);
    for(int i = 0; i < answer.size(); i++){
        cout<<answer[i];
    }

}