#include <iostream>
using namespace std;
int main(){
    int A, B, C, D;
    cin>>A>>B>>C;
    cin>>D;
    //1시간에 3600초
    B += D/60;
    C += D%60;
    while(1){
        if(C >= 60){
            B++;
            C-=60;
        }
        if(B >= 60){
            A++;
            B -= 60;
        }
        if(B <= 59 && C <= 59){
            break;
        }
    }
    while(1){
        if(A <= 23) break;
        A -= 24;
    }
    cout<<A<<" "<<B<<" "<<C;
}