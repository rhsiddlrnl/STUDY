#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int rep = 0;
    cin >> rep;
    
    queue<int> q;
    
    while(rep--) {
        string temp;
        cin >> temp;
        
        if (temp == "push") {
            int num;
            cin >> num;
            q.push(num);
        }
        else if (temp == "pop") {
            if (q.empty()) {
                cout << "-1\n";
            } else {
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if (temp == "size") {
            cout << q.size() << "\n";
        }
        else if (temp == "empty") {
            cout << (q.empty() ? 1 : 0) << "\n";
        }
        else if (temp == "front") {
            if (q.empty()) {
                cout << "-1\n";
            } else {
                cout << q.front() << "\n";
            }
        }
        else if (temp == "back") {
            if (q.empty()) {
                cout << "-1\n";
            } else {
                cout << q.back() << "\n";
            }
        }
    }
    return 0;
}