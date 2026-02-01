#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int roomnum = 0;
    cin >> roomnum;
    string num = to_string(roomnum);
    vector<int> count(10, 0);
    for(auto in : num){
        count[in - '0']++;
    }

    int nine = count[9];
    int six = count[6];
    int sum = nine + six;
    count[6] = sum/2 + sum%2;
    count[9] = 0;

    sort(count.begin(), count.end(), greater<int>());
    cout << count[0];
    
    return 0;
}