#include <string>
#include <vector>

using namespace std;

int answer = 0;
void dfs(vector<int> numbers, int target, int index, int current_sum , int total_sum){
    if(abs(target - current_sum) > total_sum) return;
    
    if(index == numbers.size()){
        if(current_sum == target){
            answer++;
        }
        return;
    }
    
    int rest_sum = total_sum - numbers[index];

    dfs(numbers, target, index + 1, current_sum + numbers[index], rest_sum);
    dfs(numbers, target, index + 1, current_sum - numbers[index], rest_sum);
}

int solution(vector<int> numbers, int target) {
    int sum = 0;
    for(auto num : numbers){
        sum += num;
    }
    dfs(numbers, target, 0, 0, sum);
    return answer;
}