#include <iostream>
using namespace std;

int main(){
    int King, Queen, Rook, Bishop, Knight, Pawn;
    cin >> King >> Queen >> Rook >> Bishop >> Knight >> Pawn;
    cout << 1 - King <<" "<< 1 - Queen<<" "<< 2 - Rook<<" "<< 2 - Bishop<<" "<< 2 - Knight<<" "<<8 - Pawn;
    return 0;
}