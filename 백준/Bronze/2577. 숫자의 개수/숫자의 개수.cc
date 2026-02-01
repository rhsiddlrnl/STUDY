#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int a = 0, b = 0, c = 0;
    long long sum = 0;
    cin >> a >> b >> c;
    sum = a*b*c;
    string num = to_string(sum);
    vector<int> count(10, 0);
    for(auto in : num){
        count[in - '0']++;
    }

    for(int i = 0; i<10; i++){
        cout << count[i] << "\n";
    }
    
    return 0;
}