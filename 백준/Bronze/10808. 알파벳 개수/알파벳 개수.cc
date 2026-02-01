#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string word = "";
    vector<int> alphabet(26, 0);
    cin >> word;
    for(auto in : word){
        alphabet[in - 'a']++;
    }

    for(int i = 0; i<26; i++){
        cout << alphabet[i] << " ";
    }
    
    return 0;
}