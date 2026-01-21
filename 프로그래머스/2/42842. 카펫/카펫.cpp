#include <string>
#include <vector>
#include <cmath>

using namespace std;

int func(int a, int b){
    return (a + sqrt(a * a - 4 * b))/2;
}

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    //직사각형의 가로 세로 길이를 구하는 문제
    
    //내부 직사각형의 가로를 x, 세로를 y로 설정
    //내부 직사각형 가로 x와 세로 y를 구하고 2씩 더해서 결과 도출
    //최소 단위를 1이라고 가정시에
    //직사각형 외부의 구간 넓이를 제공
    //x*1 + x*1 + y*1 + y*1 + 4 = brown
    //식 변형 시 x + y = (brown - 4)/2 = m라고 선언
    //내부 직사각형의 넓이도 제공
    //x*y = yellow = n라고 선언
    //위에서 변환한 식 활용 시
    //y = m - x
    //x * (m - x) = b
    //mx - x^2 = n
    //x^2 -mx + n = 0
    //이차방정식 근의 공식 활용
    //ax^2 + bx + c = 0일 때 a != 0이라면
    //x = (-b +- sqrt(b^2 - 4ac))/2a
    //단 주어진 식에서 a = 1이므로 a는 무시
    //식 대입 시 x = (m +- sqrt(m*m - 4n))/2
    //고려할점
    //제한사항에 Leo가 기억을 잘못한것 같다는 뉘앙스의 출력이 존재하지 않음
    //문제에 주어진 값에 대해선 항상 값이 존재함.
    //즉 판별식을 통한 해의 존재 여부는 확인할 필요가 없다고 판단.
    //추가로 sqrt내부의 식이 제곱수가 나올 것.
    //그리고 항상 가로의 길이가 세로의 길이보다 길기 때문에 -부분은 고려할 필요도 없음.
    //그래서 최종적으로 활용할 식은 (m + sqrt(m*m - 4n))/2
    
    int m = (brown - 4)/2;
    int n = yellow;
    int x = func(m,n);
    int y = m - x;
    answer.push_back(x + 2);
    answer.push_back(y + 2);

    return answer;
}