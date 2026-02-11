#include <string>
#include <iostream>
#include <stack>

using namespace std;

int answer = 0;
void solution(string s)
{
    stack<char> st;

    for(char in : s){
        if (!st.empty() && st.top() == in) {
            st.pop();
        } else {
            st.push(in);
        }
    }

    if(st.empty()) {
        answer++;
    }
}

int main(){
    int rep = 0;
    cin >> rep;
    while(rep--){
        string s;
        cin >> s;
        solution(s);
    }
    cout << answer;
}