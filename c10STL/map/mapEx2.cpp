// Sep. 20, 2023 by chatGTP
// <int, int>
#include <iostream>
#include <map>

int main() {
    // std::map ����: ���ڿ� Ű�� ���� ���� ���� ���踦 ����
    std::map<int, int> studentScores;

    // Ű-�� �� �߰�
    studentScores[10] = 87;
    studentScores[20] = 92;
    studentScores[33] = 78;
    studentScores[25] = 88;
    studentScores[17] = 95;

    // Ű�� ����Ͽ� ���� �˻�
    int ii = 17;
    if (studentScores.find(ii) != studentScores.end()) {
        std::cout << ii << "�� ����: " << studentScores[ii] << std::endl;
    }
    else {
        std::cout << ii << "�� ������ ã�� �� �����ϴ�." << std::endl;
    }
    // �׸��� ���� : "Bob"�� ����
    studentScores.erase(33);
    ii = 33;
    if (studentScores.find(ii) != studentScores.end()) {
        std::cout << ii << "�� ����: " << studentScores[ii] << std::endl;
    }
    else {
        std::cout << ii << "�� ������ ã�� �� �����ϴ�." << std::endl;
    }

    // ��� Ű-�� �� ��ȸ
    std::cout << "��� �л��� ����:" << std::endl;
    for (const auto& pair : studentScores) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
