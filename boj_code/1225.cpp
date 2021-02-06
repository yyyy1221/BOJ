#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> A;
    vector<int> B;
    string num, num2;
    cin>>num>>num2;
    for (int i = 0; i < num.size(); i++){
        A.push_back(num.at(i) - '0');
    }
    for(int i = 0; i < num2.size(); i++){
        B.push_back(num2.at(i) - '0');
    }
    
    long long result = 0;
    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j < B.size(); j++){
            result += (A[i] * B[j]);
        }
    }
    cout<<result;
    return 0;
}