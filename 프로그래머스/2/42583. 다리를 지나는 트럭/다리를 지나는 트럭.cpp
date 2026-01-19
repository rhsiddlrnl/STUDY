#include <string>
#include <vector>
#include <queue>

using namespace std;

struct Truck {
    int weight;
    int entry_time;
};

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int current_time = 0;
    int sum = 0;
    int truck_idx = 0;
    queue<Truck> bridge;

    while (truck_idx < truck_weights.size() || !bridge.empty()) {
        current_time++;

        if (!bridge.empty()) {
            if (current_time - bridge.front().entry_time == bridge_length) {
                sum -= bridge.front().weight;
                bridge.pop();
            }
        }

        if (truck_idx < truck_weights.size()) {
            if (sum + truck_weights[truck_idx] <= weight) {
                bridge.push({truck_weights[truck_idx], current_time});
                sum += truck_weights[truck_idx];
                truck_idx++;
            }
        }
    }

    return current_time;
}