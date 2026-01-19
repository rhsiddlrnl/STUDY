#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    queue<int> finish;
    for(int i = 0; i < progresses.size(); i++){
        finish.push((100 - progresses[i] + speeds[i] - 1)/speeds[i]);
    }
    
    vector<int> answer;
    
    while(!finish.empty()){
        int temp = finish.front();
        int ans = 1;
        finish.pop();
        while(!finish.empty() && finish.front() <= temp){
            ans++;
            finish.pop();
        }
        answer.push_back(ans);
    }
    return answer;
}