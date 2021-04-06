#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
		int testcase;
		cin >> testcase;
		vector<int> score;
		string ox;
		int total_score = 0;
		int now_score = 0;
		for(int i = 0; i < testcase; i++){
				cin>>ox;
				for(int j = 0; j < ox.size(); j++){
					if(ox.at(j) == 'O'){
							now_score++;
							total_score += now_score;
					}
					else if(ox.at(j) == 'X'){
							now_score = 0;
					}
				}
				score.push_back(total_score);
				total_score = 0;
				now_score = 0;
		}
		for(int i = 0; i < testcase; i++){
				cout<<score[i]<<"\n";
		}

		return 0;
}



