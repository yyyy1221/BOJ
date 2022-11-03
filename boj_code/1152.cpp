#include <iostream>
#include <string>
using namespace std;
int main(){
		string input;
		getline(cin, input);
		int count = 0;
		for(int i = 0; i < input.size(); i++){
				if(i != 0 && i != input.size() && input[i] == ' ') count++;
		}
		count++;
		cout<<count<<"\n";
		return 0;
}
