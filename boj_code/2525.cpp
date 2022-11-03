#include <iostream>
using namespace std;

int main(){
    int A, B, C, AA, BB;
    cin>>A>>B; //현재 시각(시, 분)
    cin>>C; //필요한 시간(분)

    AA = A + C/60;
    BB = B + C%60;

    if(BB >= 60){
        BB -= 60;
        AA += 1;
    }

    if(AA >= 24){
        cout<<AA - 24<<" "<<BB;
    }
    else{
        cout<<AA<<" "<<BB;
    }

}