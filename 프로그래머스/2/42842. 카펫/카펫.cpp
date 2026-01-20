#include <string>
#include <vector>
#include <cmath>

using namespace std;

int func(int a, int b){
    return (a + sqrt(a * a - 4 * b))/2;
}

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int a = (brown - 4)/2;
    int b = yellow;
    int x = func(a,b);
    int y = a - x;
    answer.push_back(x + 2);
    answer.push_back(y + 2);

//     tempX + tempY = a;
//     tempX * tempY = b;
    
//     tempX + 2, tempY + 2
    
    
    
    
    return answer;
}