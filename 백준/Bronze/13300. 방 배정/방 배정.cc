#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num = 0, max = 0;
    cin >> num >> max;

    vector<int> student(12, 0);
    for(int i = 0; i < num; i++){
        int tempG = 0;
        int tempY = 0;
        cin >> tempG >> tempY;
        student[(tempY - 1)*2 + tempG]++;
    }
    int answer = 0;
    for(auto in : student){
        if(in > 0){
            do{
                in -= max;
                answer++;
            }while(in > 0);
        }        
    }
    cout << answer;
}

// 0 1 2 3 4 5 6 7 8 9 10 11
// 1 1 2 2 3 3 4 4 5 5  6  6
// 0 0 1 1 2 2 3 3 4 4  5  5