// Sep. 20, 2023 by chatGTP
// <int, int>
#include <iostream>
#include <map>

int main() {
    //  std::map : stores (student number, score) as (key, value)
    std::map<int, int> studentScores;

    // input of (student name, score) pairs
    studentScores[10] = 87;
    studentScores[20] = 92;
    studentScores[33] = 78;
    studentScores[25] = 88;
    studentScores[17] = 95;

    // find a value by using a key
    int ii = 17;
    if (studentScores.find(ii) != studentScores.end()) {
        std::cout << ii << " score : " << studentScores[ii] << std::endl;
    }
    else {
        std::cout << ii << " can not be found."  << std::endl;
    }
    //  remove a pair : Student number 33 is to be removed
    studentScores.erase(33);
    ii = 33;
    if (studentScores.find(ii) != studentScores.end()) {
        std::cout << ii << " score : " << studentScores[ii] << std::endl;
    }
    else {
        std::cout << ii << " can not be found."  << std::endl;
    }

    //  visit all pairs
    std::cout << " scores of all students:"  << std::endl;
    for (const auto& pair : studentScores) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 123;
}
