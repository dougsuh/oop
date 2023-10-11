// chatGPT       Oct. 11, 2023
#include <iostream>
// 노드 구조체 정의
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};
// 연결 리스트 클래스 정의
class LinkedList {
private:
    Node* head;   // 유일한 member data
public:
    LinkedList() : head(nullptr) {}  // 가장 앞에 있는 node
    // 새로운 노드를 연결 리스트의 끝에 추가
    void append(int val) {
        Node* newNode = new Node(val);
        if (!head) {  // if empty list
            head = newNode;
            return;
        }
        Node* current = head;
        while (current->next) {  // nullptr 나올 때 까지 내려가
            current = current->next;
        }
        current->next = newNode;  // val 값을 가진 node를 붙인다. 
    }
    // 연결 리스트 출력
    void display() {
        Node* current = head;
        while (current) { // nullptr 나올 때 까지 내려가
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }
    // 연결 리스트에서 특정 값 삭제
    void remove(int val) {
        if (!head) {  // if empty list, do nothing
            return;
        }
        if (head->data == val) { // 첫 번째가 val이면 지우고 head를 다음 것으로
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* current = head;
        while (current->next) { //  nullptr 나올 때 까지 내려가
            if (current->next->data == val) {  // 그 값이면 해당 node 제거
                Node* temp = current->next;
                current->next = current->next->next; // 다음 것으로 연결
                delete temp;  // 해당 노드 제거
                return;
            }
            current = current->next;
        }
    }
    // 연결 리스트 메모리 해제
    ~LinkedList() {
        while (head) { // 내려가면서 node 제거
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;

    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);

    std::cout << "연결 리스트: ";
    list.display();

    list.remove(3);
    std::cout << "3 삭제 후 연결 리스트: ";
    list.display();

    return 0;
}
