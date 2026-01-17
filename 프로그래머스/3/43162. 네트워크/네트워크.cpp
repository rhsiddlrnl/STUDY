#include <string>
#include <vector>

using namespace std;
void dfs(int current, int n, vector<vector<int>>& computers) {
    computers[current][current] = 0; 

    for (int i = 0; i < n; i++) {
        if (computers[current][i] == 1 && computers[i][i] == 1) {
            dfs(i, n, computers);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for (int i = 0; i < n; i++) {
        if (computers[i][i] == 1) {
            dfs(i, n, computers);
            answer++;
        }
    }
    return answer;
}