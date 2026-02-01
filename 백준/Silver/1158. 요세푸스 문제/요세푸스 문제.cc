#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>

using namespace std;
int main() {
    int human, k;
    cin >> human >> k;
    
    list<int> L;
    for(int i = 1; i <= human; i++){
        L.push_back(i);
    }
    
    vector<int> ans;
    auto it = L.begin();
    
    while(!L.empty()) {
        for(int i = 0; i < k - 1; i++) {
            it++;
            if(it == L.end()) it = L.begin();
        }
        
        ans.push_back(*it);
        it = L.erase(it);
        if(it == L.end()) it = L.begin();
    }

    cout << "<";
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i];
        if(i != ans.size() - 1) cout << ", ";
    }
    cout << ">";
}