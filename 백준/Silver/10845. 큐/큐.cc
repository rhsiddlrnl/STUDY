#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int rep = 0;
    int error = -1;
    cin >> rep;
    queue<int> q;
    while(rep--){
        string temp;
        cin >> temp;
        switch(temp[0]){
            case 'p':
                if(temp[1] == 'u'){
                    int num;
                    cin >> num;
                    q.push(num);
                }else{
                    if(q.empty()){
                        cout << error << "\n";
                    }else{
                        cout << q.front() << "\n";
                        q.pop();
                    }
                }                
                break;
            case 's':
                cout << q.size() << "\n";
                break;
            case 'e':
                cout << (q.empty() ? 1 : 0) << "\n";
                break;
            case 'f':
                if(q.empty()){
                    cout << error << "\n";
                }else{
                    cout << q.front() << "\n";
                }
                break;
            case 'b':
                if (q.empty()) {
                    cout << "-1\n";
                } else {
                    cout << q.back() << "\n";
                }
                break;
            default:
                break;
        }
    }
}