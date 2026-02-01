#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num = 0;
    cin >> num;
    for(int i = 0; i < num; i++){
        string temp1 = "", temp2 = "";
        cin >> temp1 >> temp2;
        sort(temp1.begin(), temp1.end());
        sort(temp2.begin(), temp2.end());
        if(temp1 == temp2){ cout << "Possible\n";}
        else cout << "Impossible\n";
    }
}