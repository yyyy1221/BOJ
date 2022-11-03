#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    float total = 0;

    if(s.length() > 1){
         if(s.at(0) == 'A') total += 4;
        else if(s.at(0) == 'B') total += 3;
        else if(s.at(0) == 'C') total += 2;
        else if(s.at(0) == 'D') total += 1;

        if(s.at(1) == '+') total += 0.3;
        else if(s.at(1) == '-') total -= 0.3;
    }
    printf("%.1f", total);  
}