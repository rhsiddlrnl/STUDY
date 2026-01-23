#include <string>
#include <vector>

using namespace std;
//일단은 시간별 player 수가 벡터로 주어지고
//몇 명 이상일때 증설해야하는지 알려주고
//증설한 서버가 몇 시간 유지되는지 알려줌
//그러면 증설한 서버가 종료되는 시점에 플레이어수가 많으면 다시 증설해야하는가?
//그러면 현재 서버 수를 기억해야함 ㅇㅈ?
//그리고 증설된 서버는 k시간마다 꺼짐
int solution(vector<int> players, int m, int k) {
    int answer = 0;
    int currentServer = 0;
    
    vector<int> time(players.size(), 0); //서버 증설 시간 확인용?
    for(int i = 0; i < players.size(); i++){
        
        if (i >= k) {
            currentServer -= time[i - k];
        }
        
        int needed = players[i] / m;
        if (needed > currentServer) {
            int add = needed - currentServer;
            answer += add;
            currentServer += add;
            time[i] = add;
        }        
    }
    
    return answer;
}