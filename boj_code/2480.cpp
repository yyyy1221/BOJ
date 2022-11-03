#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;

    if(a == b && b == c && a == c){
        cout<<a*1000 + 10000;
    }
    else if((a == b && a != c)){
        cout<<a*100 + 1000;
    }
    else if((b == c && b != a)){
        cout<<b*100 + 1000;
    }
    else if((c == a && c != b)){
        cout<<c*100 + 1000;
    }
    else{
        cout<<max(max(a, b), c)*100;
    }
    return 0;
}