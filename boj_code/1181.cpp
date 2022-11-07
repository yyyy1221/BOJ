#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
bool cmp(string a, string b){
    if(a.length() == b.length()){
        return a < b;
    }
    return a.length() < b.length();
}

int main(){
    int N;
    vector<string> v;
    string s;
    cin>>N;
    for(int i = 0; i < N; i++){
        cin>>s;
        v.push_back(s);
    }  

    sort(v.begin(), v.end(), cmp);
    v.erase(unique(v.begin(), v.end()), v.end());
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<endl;
    }
}