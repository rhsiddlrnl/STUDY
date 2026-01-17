#include <vector>
#include <map>
#include <queue>

using namespace std;

typedef pair<int, int> Point;

int solution(vector<vector<int>> rectangle, int characterX, int characterY, int itemX, int itemY) {
    map<Point, int> counts;

    for (const auto& rect : rectangle) {
        int x1 = rect[0] * 2, y1 = rect[1] * 2, x2 = rect[2] * 2, y2 = rect[3] * 2;

        for (int x = x1; x <= x2; x++) {
            for (int y = y1; y <= y2; y++) {
                if (x == x1 || x == x2 || y == y1 || y == y2) {

                    counts[{x, y}] += 1;
                } else {

                    counts[{x, y}] += 10; 
                }
            }
        }
    }

    queue<pair<Point, int>> q;
    q.push({{characterX * 2, characterY * 2}, 0});
    
    map<Point, bool> visited;
    visited[{characterX * 2, characterY * 2}] = true;

    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    while (!q.empty()) {
        int cx = q.front().first.first;
        int cy = q.front().first.second;
        int dist = q.front().second;
        q.pop();

        if (cx == itemX * 2 && cy == itemY * 2) {
            return dist / 2; 
        }

        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            Point next = {nx, ny};

            if (counts.count(next) && counts[next] <= 2 && !visited[next]) {
                visited[next] = true;
                q.push({next, dist + 1});
            }
        }
    }

    return 0;
}