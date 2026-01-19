#include <string>
#include <vector>
#include <queue>

using namespace std;

struct Process {
    int index;
    int priority;
};

int solution(vector<int> priorities, int location) {
    queue<Process> q;
    vector<Process> v;
    for (int i = 0; i < priorities.size(); i++) {
        q.push({i, priorities[i]});
    }

    int answer = 1;

    while (!q.empty()) {
        int max_p = 0;
        int q_size = q.size();
        for (int i = 0; i < q_size; i++) {
            Process temp = q.front();
            if (temp.priority > max_p) max_p = temp.priority;
            q.pop();
            q.push(temp);
        }

        Process cur = q.front();
        q.pop();

        if (cur.priority < max_p) {
            q.push(cur);
        } 
        else {
            v.push_back(cur);
        }
    }
    
    for(int j = 0; j < v.size(); j++){
        if(v[j].index == location){
            answer += j;
        }
    }

    return answer;
}