#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string, int> m;
    for(auto name : participant){
        m[name]++;
    }
    
    for(auto name : completion){
        m[name]--;
    }
    
    for(auto name : m){
        if(name.second > 0){
            return name.first;
        }
    }
    return "";
}