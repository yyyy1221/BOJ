#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    while(1){
        cin>>a>>b>>c;
        if(a == 0 && b == 0 && c == 0){
            break;
        }
        if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b){
            cout<<"right"<<endl;
        }
        else cout<<"wrong"<<endl;
    }    
    

}