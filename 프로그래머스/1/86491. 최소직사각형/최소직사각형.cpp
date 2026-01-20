#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int xMax = 0;
    int yMax = 0;
    
    for(int i = 0; i < sizes.size(); i++){
        int tempX;
        int tempY;
        tempX = max(sizes[i][0], sizes[i][1]);
        tempY = min(sizes[i][0], sizes[i][1]);
        
        if(xMax < tempX) xMax = tempX;
        if(yMax < tempY) yMax = tempY;
    }
    
    return xMax*yMax;
}