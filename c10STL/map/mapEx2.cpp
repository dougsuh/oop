// Sep. 20, 2023 by chatGTP
// <int, int>
#include <iostream>
#include <map>

int main() {
    // std::map 선언: 문자열 키와 정수 값의 연관 관계를 저장
    std::map<int, int> studentScores;

    // 키-값 쌍 추가
    studentScores[10] = 87;
    studentScores[20] = 92;
    studentScores[33] = 78;
    studentScores[25] = 88;
    studentScores[17] = 95;

    // 키를 사용하여 값을 검색
    int ii = 17;
    if (studentScores.find(ii) != studentScores.end()) {
        std::cout << ii << "의 점수: " << studentScores[ii] << std::endl;
    }
    else {
        std::cout << ii << "의 점수를 찾을 수 없습니다." << std::endl;
    }
    // 항목을 제거 : "Bob"을 제거
    studentScores.erase(33);
    ii = 33;
    if (studentScores.find(ii) != studentScores.end()) {
        std::cout << ii << "의 점수: " << studentScores[ii] << std::endl;
    }
    else {
        std::cout << ii << "의 점수를 찾을 수 없습니다." << std::endl;
    }

    // 모든 키-값 쌍 순회
    std::cout << "모든 학생의 성적:" << std::endl;
    for (const auto& pair : studentScores) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
