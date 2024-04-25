// Sep. 20, 2023 by chatGTP
// <string, int>
// find(), erase(), for-loop
#include <iostream>
#include <map>

int main() {
    // std::map : stores (student names, store) as (key, value)
    std::map<std::string, int> studentScores;

    // input of (student name, score) pairs
    studentScores["Bob"] = 87;
    studentScores["Charlie"] = 92;
    studentScores["David"] = 78;
    studentScores["Eve"] = 88;
    studentScores["Alice"] = 95;

    // find a value by using a key
    std::string studentName = "Bob";
    if (studentScores.find(studentName) != studentScores.end()) {
        std::cout << studentName << " score : " << studentScores[studentName] << std::endl;
    }
    else {
        std::cout << studentName << " can not be found.." << std::endl;
    }
    // remove a pair : "Bob" is to be removed
    studentScores.erase("Bob");
    studentName = "Bob";
    if (studentScores.find(studentName) != studentScores.end()) {
        std::cout << studentName << " score: " << studentScores[studentName] << std::endl;
    }
    else {
        std::cout << studentName << " can not be found." << std::endl;
    }

    // visit all pairs
    std::cout << " scores of all students:" << std::endl;
    for (const auto& pair : studentScores) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
