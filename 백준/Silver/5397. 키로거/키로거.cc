#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>

using namespace std;
int main() {
    int num = 0;
    cin >> num;
    for(int j = 0; j < num; j++){
        string str;
        cin >> str;

        list<char> L;
        auto cursor = L.begin(); 

        for(char input : str) {
            switch(input) {
                case '<':
                    if(cursor != L.begin()) cursor--;
                    break;
                case '>':
                    if(cursor != L.end()) cursor++;
                    break;
                case '-':
                    if(cursor != L.begin()) {
                        cursor--;
                        cursor = L.erase(cursor);
                    }          
                    break;
                default:
                    L.insert(cursor, input); 
                    break;
            }
        }

        for(char c : L) {
            cout << c;
        }
        cout << "\n";
    }
    
    return 0;
}