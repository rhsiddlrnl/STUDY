#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    stack<char> c;
    

    for(auto in : s){
        if(in == '(') {
            c.push(in);
        }
        else if(in == ')') {
            if(c.empty()) return false;
            c.pop(); 
        }
    
    }
    bool answer = c.empty();

    return answer;
}