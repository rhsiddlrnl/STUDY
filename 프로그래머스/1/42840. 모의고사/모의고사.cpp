#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string cut(string str, int length){
    while(true){
        if(str.size() > length){
            return str.substr(0, length);
        }else{
            str += str;
        }
    }    
}

int check(vector<int> answer, vector<int> myans){
    int correct = 0;
    for(int i = 0; i < answer.size(); i++){
        if(answer[i] == myans[i]) correct++;
    }
    return correct;
}

vector<int> finish(int a, int b, int c){
    vector<int> result;
    int max_val = max({a, b, c});
    if (a == max_val) result.push_back(1);
    if (b == max_val) result.push_back(2);
    if (c == max_val) result.push_back(3);
    return result;
}

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int length = answers.size();
    string first = "12345";
    string second = "21232425";
    string third = "3311224455";
    first = cut(first, length);
    second = cut(second, length);
    third = cut(third, length);
    int firstc, secondc, thirdc;
    
    vector<int> firstans, secondans, thirdans;
    for(int i = 0; i < length; i++){
        firstans.push_back(first[i] - '0');
        secondans.push_back(second[i] - '0');
        thirdans.push_back(third[i] - '0');        
    }
    
    firstc = check(answers, firstans);
    secondc = check(answers, secondans);
    thirdc = check(answers, thirdans);
    
    answer = finish(firstc, secondc, thirdc);
    
    
    return answer;
}