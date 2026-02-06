#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int rep = 0;
    cin >> rep;
    stack<int> s;
    vector<char> v;
    int one = 1;
    for(int i = 0; i<rep; i++){
        int num = 0;
        cin >> num;
        while (one <= num) {
            s.push(one++);
            v.push_back('+');
        }
        if (!s.empty() && s.top() == num) {
            s.pop();
            v.push_back('-');
        }else {
            cout << "NO";
            return 0;
        }
    }
    for(auto in : v){
        cout << in << "\n";
    }
    return 0;
}