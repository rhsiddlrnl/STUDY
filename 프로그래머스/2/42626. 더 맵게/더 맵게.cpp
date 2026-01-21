#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> spice(scoville.begin(), scoville.end());
    
    while (spice.top() < K) {
        if (spice.size() < 2) {
            return -1;
        }
        
        int first = spice.top();
        spice.pop();
        
        int second = spice.top();
        spice.pop();
        
        spice.push(first + (second * 2));
        
        answer++;
    }
    
    return answer;
}