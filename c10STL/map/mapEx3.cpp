// Sep. 20, 2023 by chatGTP
// <string, int>
// erase by using an iterator
// function with a map parameter
#include <iostream>
#include <map>

void addSuh(std::map<std::string, int>&,int);
int main() {
    std::map<std::string, int> studentScores;

    studentScores["Alice"] = 95;
    studentScores["Bob"] = 87;
    studentScores["Charlie"] = 92;

    // "Bob"을 찾고 반복자를 얻음
    std::map<std::string, int>::iterator it = studentScores.find("Bob");

    // "Bob"을 제거
    if (it != studentScores.end()) {
        studentScores.erase(it);
    }

    // "Bob"이 더 이상 없음
    if (studentScores.find("Bob") == studentScores.end()) {
        std::cout << "Bob은 더 이상 존재하지 않습니다." << std::endl;
    }
    addSuh(studentScores,100);  // ignored
    addSuh(studentScores,50);
    // 모든 키-값 쌍 순회
    std::cout << "모든 학생의 성적:" << std::endl;
    for (const auto& pair : studentScores) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    return 0;
}
void addSuh(std::map<std::string, int>& ss,int v) {
    ss["Doug"] = v;
}