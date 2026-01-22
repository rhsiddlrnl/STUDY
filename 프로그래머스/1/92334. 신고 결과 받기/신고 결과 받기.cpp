#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

typedef pair<string, string> Report;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    map<Report, int> m;
    map<string, int> mail_count;
    map<string, int> report_count;
    
    for(auto in : report){
        stringstream ss(in);
        string reporter, reported;
        ss >> reporter >> reported;
        m[{reporter, reported}] = 1;
    }
    
    for(auto const& check : m){
        report_count[check.first.second]++;
    }
    
    for(auto const& check : m){
        string reporter = check.first.first;
        string reported = check.first.second;
        
        if(report_count[reported] >= k){
            mail_count[reporter]++;
        }
    }
    
    vector<int> answer;
    for(auto name : id_list){
        answer.push_back(mail_count[name]);
    }
    
    return answer;
}