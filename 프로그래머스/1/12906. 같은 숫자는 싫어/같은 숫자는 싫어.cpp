#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    for(auto in : arr){
        if(answer.empty() || answer.back()!=in) answer.push_back(in);
    }

    return answer;
}