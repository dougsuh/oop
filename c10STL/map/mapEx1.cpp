// Sep. 20, 2023 by chatGTP
// <string, int>
// find(), erase(), for-loop
#include <iostream>
#include <map>

int main() {
    // std::map 선언: 문자열 키와 정수 값의 연관 관계를 저장
    std::map<std::string, int> studentScores;

    // 키-값 쌍 추가
    studentScores["Bob"] = 87;
    studentScores["Charlie"] = 92;
    studentScores["David"] = 78;
    studentScores["Eve"] = 88;
    studentScores["Alice"] = 95;

    // 키를 사용하여 값을 검색
    std::string studentName = "Bob";
    if (studentScores.find(studentName) != studentScores.end()) {
        std::cout << studentName << "의 점수: " << studentScores[studentName] << std::endl;
    }
    else {
        std::cout << studentName << "의 점수를 찾을 수 없습니다." << std::endl;
    }
    // 항목을 제거 : "Bob"을 제거
    studentScores.erase("Bob");
    studentName = "Bob";
    if (studentScores.find(studentName) != studentScores.end()) {
        std::cout << studentName << "의 점수: " << studentScores[studentName] << std::endl;
    }
    else {
        std::cout << studentName << "의 점수를 찾을 수 없습니다." << std::endl;
    }

    // 모든 키-값 쌍 순회
    std::cout << "모든 학생의 성적:" << std::endl;
    for (const auto& pair : studentScores) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
