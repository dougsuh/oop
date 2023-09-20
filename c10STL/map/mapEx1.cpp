// Sep. 20, 2023 by chatGTP
// <string, int>
// find(), erase(), for-loop
#include <iostream>
#include <map>

int main() {
    // std::map ����: ���ڿ� Ű�� ���� ���� ���� ���踦 ����
    std::map<std::string, int> studentScores;

    // Ű-�� �� �߰�
    studentScores["Bob"] = 87;
    studentScores["Charlie"] = 92;
    studentScores["David"] = 78;
    studentScores["Eve"] = 88;
    studentScores["Alice"] = 95;

    // Ű�� ����Ͽ� ���� �˻�
    std::string studentName = "Bob";
    if (studentScores.find(studentName) != studentScores.end()) {
        std::cout << studentName << "�� ����: " << studentScores[studentName] << std::endl;
    }
    else {
        std::cout << studentName << "�� ������ ã�� �� �����ϴ�." << std::endl;
    }
    // �׸��� ���� : "Bob"�� ����
    studentScores.erase("Bob");
    studentName = "Bob";
    if (studentScores.find(studentName) != studentScores.end()) {
        std::cout << studentName << "�� ����: " << studentScores[studentName] << std::endl;
    }
    else {
        std::cout << studentName << "�� ������ ã�� �� �����ϴ�." << std::endl;
    }

    // ��� Ű-�� �� ��ȸ
    std::cout << "��� �л��� ����:" << std::endl;
    for (const auto& pair : studentScores) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
