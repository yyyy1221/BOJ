#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int A, B, AA= 0, BB = 0;
    cin>>A>>B;
    AA += (A%10)*100;
    AA += (A - (A/100)*100)/10 * 10;
    AA += A/100;

    BB += (B%10)*100;
    BB += (B - (B/100)*100)/10 * 10;
    BB += B/100;

    cout<<max(AA, BB);
    return 0;
}