#include <string>
#include <vector>

using namespace std;

int solution(int n, int w, int num) {
    if(w == 1){
        return n - num + 1;
    }
    int answer = 0;
    int lair = (num - 1) / w;
    int index;
    if (lair % 2 == 0) {
        index = (num - 1) % w;
    } else {
        index = (w - 1) - (num - 1) % w;
    }

    int maxlair = (n - 1) / w;
    answer = maxlair - lair;
    int lack = (n - 1) % w;
    int filled = w - lack - 1;

    if (maxlair % 2 == 0) {
        if (index <= lack) answer++;
    } else {
        if (index >= filled) answer++;
    }

    return answer;
}