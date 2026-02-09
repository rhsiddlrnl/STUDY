#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>

using namespace std;

int main() {    
    int n;
    while (cin >> n && n != 0) {
        vector<long long> h(n);
        for (int i = 0; i < n; i++){
            cin >> h[i];
        }

        stack<long long> s;
        long long max_area = 0;

        for (int i = 0; i < n; i++) {
            while (!s.empty() && h[s.top()] > h[i]) {
                long long height = h[s.top()];
                s.pop();
                long long width = i;
                if (!s.empty()) {
                    width = i - s.top() - 1;
                }
                max_area = max(max_area, height * width);
            }
            s.push(i);
        }

        while (!s.empty()) {
            long long height = h[s.top()];
            s.pop();
            long long width = n;
            if (!s.empty()) {
                width = n - s.top() - 1;
            }
            max_area = max(max_area, height * width);
        }

        cout << max_area << "\n";
    }
}