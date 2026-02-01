#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int occur[2000001];

int main() {
    int size = 0;
    cin >> size;
    vector<int> nums(size, 0);
    for(int i = 0; i < size; i++){
        cin >> nums[i];
    }
    int x = 0;
    cin >> x;
    
    int answer = 0;

    for(int j = 0; j < size; j++) {
        int target = x - nums[j];
        if(target >= 0 && target <= 2000000 && occur[target]) {
            answer++;
        }
        
        if(nums[j] <= 2000000) {
            occur[nums[j]] = 1;
        }
    }
    cout << answer;
    return 0;
}