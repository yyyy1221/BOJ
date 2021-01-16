#include <iostream>
using namespace std;
int main(){
    int N; //시험 본 과목의 개수
    cin >> N;
    double *arr = new double[N];
    double max = 0;
    for(int i = 0; i < N; i++){
        cin>>arr[i];
        if(arr[i] > max){
            max = arr[i];
        }
    }
    double avg = 0;
    for(int i = 0; i < N; i++){
        arr[i] = arr[i]/max*100;
        avg += arr[i];
    }
    cout<<avg/N<<endl;
    return 0;
}