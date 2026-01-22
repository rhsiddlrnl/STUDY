#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//일단 바꾸고
//바꾼 숫자를 또 string화 해버려
//string이 없어질때까지 반복문돌면서
//앞에서부터 0 기준으로 자르고 앞에꺼는 배열에 저장하고
//뒤에꺼는 기존 string에 덮어 씌우고
//계속자르다가 뒤에 0 없으면 그거 전체 배열에 저장하고
//배열 다 int로 바꾼 다음에(애초에 넣을때 int로 바꿔서 넣어버려)
//배열 돌면서 isPrime 확인하고 answer++;
string change(int input, int adjust){
    //10진수인 input을 adjust진수인 수로 바꿔야함
    if(input == 0) return to_string(input);
    if(adjust == 10) return to_string(input);
    string temp = "";
    while(input >= adjust){
        temp += to_string(input % adjust);
        
        input /= adjust;
    }
    temp += to_string(input);
    reverse(temp.begin(), temp.end());
    return temp;
}

bool isPrime(long long num){
    if(num < 2) return false;
    
    for(long long i = 2; i*i <= num; i++){
        if(num % i == 0) return false;
    }
    return true;
}

int solution(int n, int k) {
    int answer = 0;    
    string newN = "";
    vector<long long> v;
    newN = change(n, k);
    while (newN.size() != 0) {
    size_t pos = newN.find('0');
    string temp;

    if (pos != -1) {
        temp = newN.substr(0, pos);
        newN = newN.substr(pos + 1);
    } else {
        temp = newN;
        newN = "";
    }

    if (!temp.empty()) {
        v.push_back(stoll(temp));
    }
}
    
    for(auto in : v){
        if(isPrime(in)){
            answer++;
        }
    }
    return answer;
}