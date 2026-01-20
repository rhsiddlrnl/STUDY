#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

bool isPrime(int x){
    if(x < 2) return false;
    for(int i = 2; i < x-1; i++){
        if(x%i == 0) return false;
    }
    return true;
}

int solution(string numbers) {
    int answer = 0;
    set<int> ans;
    
    sort(numbers.begin(), numbers.end()); 
    
    do {
        for (int r = 1; r <= numbers.size(); r++) {
            string temp = numbers.substr(0, r);
            ans.insert(stoi(temp));
        }
    } while(next_permutation(numbers.begin(), numbers.end())); 

    for(auto in : ans){
        if(isPrime(in)) answer++;
    }
    
    return answer;
}