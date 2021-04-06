#include <iostream>
#include <vector>
using namespace std;
int main(){
	int C; //testcase 개수
	float N; //student
	float avg = 0; 
	vector<float> answer;
	cin>>C;
	for(int i = 0; i < C; i++){
			cin>>N;
			vector<int> score;
			score.clear();
			int num = 0;
			avg = 0;
			for(int j = 0; j < N; j++){
				cin>>num;
				score.push_back(num);
				avg += num;
			}
			avg /= N;
			float cnt = 0;
			for(int k = 0; k < N; k++){
					if(score[k] > avg) cnt++;
			}
			answer.push_back((cnt/N)*100);
	}
	for(int i = 0; i < answer.size(); i++){
			printf("%.3f%%\n", answer[i]);
	}
	return 0;
}
