#include <iostream>
#include <algorithm>
using namespace std;
struct student{
    string name;
    int kor;
    int eng;
    int math;
};
bool compare(student s1, student s2){
    if(s1.kor == s2. kor){
        if(s1.eng == s2. eng){
            if(s1.math == s2.math){
                return s1.name < s2.name;
            }
            return s1.math > s2.math;
        }
        return s1.eng < s2.eng;
    }

    else{
        return s1.kor > s2.kor;
    }  
}
int main(){
    int N; //
    cin>>N;
    student *array = new student[N];
    for(int i = 0; i < N; i++){
        cin>>array[i].name>>array[i].kor>>array[i].eng>>array[i].math;
    }
    stable_sort(array, array+N, compare);
    for(int i = 0; i < N; i++){
        cout<<array[i].name<<"\n";
    }
    return 0;
}