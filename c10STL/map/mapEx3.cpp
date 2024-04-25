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

    // Find "Bob" and get its iterator
    std::map<std::string, int>::iterator it = studentScores.find("Bob");

    // Remove "Bob"
    if (it != studentScores.end()) {
        studentScores.erase(it);
    }

    // "Bob" does not exist. 
    if (studentScores.find("Bob") == studentScores.end()) {
        std::cout << "Bob does not exist." << std::endl;
    }
    addSuh(studentScores,"Suh", 100);  
    addSuh(studentScores,"Doug", 50);
    // visit all pairs
    std::cout << " scores of all students:" << std::endl;
    for (const auto& pair : studentScores) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    return 0;
}
void addSuh(std::map<std::string, int>& ss,string sss,int v) {
    ss[sss] = v;
}
