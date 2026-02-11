#include <string>
#include <iostream>
#include <stack>

using namespace std;

void solution(string s)
{
    stack<char> st;

    for(char in : s){
        if(in == '(' || in == '{' || in == '[') {
            st.push(in);
        }
        else if(in == ')') {
            if(!st.empty() && st.top() == '('){
                st.pop();
            } else {
                cout << "no\n";
                return;
            }
        }
        else if(in == '}') {
            if(!st.empty() && st.top() == '{'){
                st.pop();
            } else {
                cout << "no\n";
                return;
            }
        }
        else if(in == ']') {
            if(!st.empty() && st.top() == '['){
                st.pop();
            } else {
                cout << "no\n";
                return;
            }
        }
    }

    if(st.empty()) {
        cout << "yes\n";
    } else {
        cout << "no\n";
    }
}

int main(){
    string line;
    string end = ".";
    while(getline(cin, line)){        
        if(line == end) return 0;
        solution(line);
    }
}