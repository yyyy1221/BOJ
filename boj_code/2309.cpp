#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v;
    vector<int> result;
    vector<int> tmp;
    int a, sum = 0;
    for(int i = 0; i < 9; i++){
        cin>>a;
        v.push_back(a);
    }
    tmp.push_back(0);
    tmp.push_back(0);
    for(int i = 0; i < 7; i++){
        tmp.push_back(1);
    }

    do{
        for(int i = 0; i < 9; i++){
            if(tmp[i] == 1) sum += v[i];
        }
        if(sum == 100){
            for(int i = 0; i < 9; i++){
                if(tmp[i] == 1) result.push_back(v[i]);
                
            }
            sort(result.begin(), result.end());
            for(int i = 0; i < 7; i++){
                cout<<result[i]<<endl;
            }
            return 0;
        }
        sum = 0;
    }while(next_permutation(tmp.begin(), tmp.end()));
}