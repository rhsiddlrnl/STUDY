#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int rep;
    cin >> rep;
    queue<int> q;
    for(int i = 0; i < rep; i++){
        q.push(i+1);
    }
    while(q.size() > 1){
        q.pop();
        q.push(q.front());
        q.pop();      
    }
    cout << q.front();
}