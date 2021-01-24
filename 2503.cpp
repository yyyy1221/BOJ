#include <iostream>
using namespace std;
struct num{
    int question; //민혁이가 불러주는 숫자
    int strike; 
    int ball;
    int first; //백의 자리
    int second; //십의 자리
    int third; //일의 자리
};

int main(){
    int N; 
    int answer = 0;
    cin>>N;
    struct num *array = new num[N];
    int question, strike, ball;
    for(int i = 0; i < N; i++){
        cin>>question;
        cin>>strike;
        cin>>ball;
        array[i].question = question;
        array[i].strike = strike;
        array[i].ball = ball;
        array[i].first = question/100;
        array[i].second = (question%100 - question%10)/10;
        array[i].third = question%10;
    }

    int first, second, third;
    int strike_count = 0;
    int ball_count = 0;
    int N_count = 0;

    for(int i = 123; i <= 987; i++){
        strike_count = 0;
        ball_count = 0;
        N_count = 0;
        first = i/100;
        second = (i%100 - i%10)/10;
        third = i%10;
        if(first != second && second != third && first != third && second != 0 && third != 0){
           for(int i = 0; i < N; i++){
               strike_count = 0;
               ball_count = 0;
               if(first == array[i].first){
                   strike_count++;
               }
               if(second == array[i].second){
                   strike_count++;
               }
               if(third == array[i].third){
                   strike_count++;
               }
               if(first == array[i].second || first == array[i].third){
                   ball_count++;
               }
               if(second == array[i].first || second == array[i].third){
                   ball_count++;
               }
               if(third == array[i].first || third == array[i].second){
                   ball_count++;
               }
               if(strike_count == array[i].strike && ball_count == array[i].ball){
                   N_count++;
               }
           }
           if(N_count == N){
               answer++;
           }
        }

    } //111~1000 for문 끝
    cout<<answer<<endl;;
    } //main