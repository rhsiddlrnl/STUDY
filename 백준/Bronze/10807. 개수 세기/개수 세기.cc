#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int size = 0;
    cin >> size;
    vector<int> nums(size, 0);
    for(int i = 0; i < size; i++){
        cin >> nums[i];
    }
    int find = 0;
    cin >> find;
    int answer = 0;
    for(auto in : nums){
        if(in == find) answer++;
    }
    cout << answer;
    return 0;
}