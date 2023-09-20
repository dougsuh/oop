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

    // "Bob"�� ã�� �ݺ��ڸ� ����
    std::map<std::string, int>::iterator it = studentScores.find("Bob");

    // "Bob"�� ����
    if (it != studentScores.end()) {
        studentScores.erase(it);
    }

    // "Bob"�� �� �̻� ����
    if (studentScores.find("Bob") == studentScores.end()) {
        std::cout << "Bob�� �� �̻� �������� �ʽ��ϴ�." << std::endl;
    }
    addSuh(studentScores,100);  // ignored
    addSuh(studentScores,50);
    // ��� Ű-�� �� ��ȸ
    std::cout << "��� �л��� ����:" << std::endl;
    for (const auto& pair : studentScores) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    return 0;
}
void addSuh(std::map<std::string, int>& ss,int v) {
    ss["Doug"] = v;
}