#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

bool calTime(int sch, int arr){
    int arrT = 0, arrM = 0, schT = 0, schM = 0;
    arrT = arr/100;
    arrM = arr%100;
    schT = sch/100;
    schM = sch%100;
    
    return ((arrT*60 + arrM - schT*60 - schM) <= 10);
}

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;
    unordered_map<int, int> map;
    for(int i = 0; i < schedules.size(); i++){
        map[i] = 0;
    }
    
    for(int m =0; m < timelogs.size(); m++){
        if(startday == 7){
            timelogs[m][0] = 2359;
            timelogs[m][6] = 2359;
        }else{
            int sat = (12 - startday) % 6;
            timelogs[m][sat] = 2359;
            timelogs[m][sat+1] = 2359;
        }
        
        for(int n = 0; n < 7; n++){
            if(calTime(schedules[m], timelogs[m][n])) map[m]++;
        }
    }
    
    for(auto in : map){
        if(in.second == 5) {
            cout << in.first << endl;
            answer++;
        }
    }
    
    return answer;
}