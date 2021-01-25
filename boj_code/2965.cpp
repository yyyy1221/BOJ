#include <iostream>
using namespace std;
int main(){
    int A, B, C;
    cin>>A>>B>>C;
    int result = 0;

    if(B - A >= C - B){
        C = B - 1;
        result = C - A;
    }
    if(C - B >= B - A){
        A = B + 1;
        result = C - A;
    }
    cout<<result;
}


