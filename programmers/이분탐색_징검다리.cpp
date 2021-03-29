#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int MAX(int a, int b){
		return a > b ? a : b;
}
using namespace std;
int solution(int distance, vector<int> rocks, int n){
		int answer = 0;
		rocks.push_back(distance);
		sort(rocks.begin(), rocks.end());
		int start = 0, end = distance;
		while(start < end){
			int mid = (start + end)/2;
			int count = 0;
			int now = 0;
			for(int i = 0; i < rocks.size() - 1; i++){
				if(rocks[i+1] - now >= mid){
						count++;
						now = rocks[i];
				}
			}
			if(count == rocks.size()-1 - n){
					answer = MAX(answer, mid);
			}
			else if(count < rocks.size()-1 -n){
					end = mid - 1;
			}
			else if(count > rocks.size()-1 -n){
					start = mid + 1;
					//answer=MAX(answer,mid);
			}
		}
		return answer;
}

int main(){
		int distance = 25;
		vector<int> rocks;
		rocks.push_back(2);
		rocks.push_back(14);
		rocks.push_back(11);
		rocks.push_back(21);
		rocks.push_back(17);
		int n = 2;
		int answer = solution(distance, rocks, n);
		cout<<answer<<endl;
		return 0;
}
