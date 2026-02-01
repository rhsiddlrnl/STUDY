#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    string temp1 = "", temp2 = "";
    cin >> temp1 >> temp2;
    vector<int> alphabet1(26,0);
    vector<int> alphabet2(26,0);
    int length = temp1.size();

    for(int i = 0; i < temp1.size(); i++){
        alphabet1[temp1[i] - 'a']++;
    }

    for(int i = 0; i < temp2.size(); i++){
        alphabet2[temp2[i] - 'a']++;
    }

    int answer = 0;
    for(int i = 0; i < 26; i++){
        if(alphabet1[i] != alphabet2[i]){
            int a = alphabet1[i] - alphabet2[i];
            answer += a > 0 ? a : a*(-1);
        }
    }
    cout << answer;
}