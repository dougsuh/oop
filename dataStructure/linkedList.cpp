// chatGPT       Oct. 11, 2023
#include <iostream>
// ��� ����ü ����
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};
// ���� ����Ʈ Ŭ���� ����
class LinkedList {
private:
    Node* head;   // ������ member data
public:
    LinkedList() : head(nullptr) {}  // ���� �տ� �ִ� node
    // ���ο� ��带 ���� ����Ʈ�� ���� �߰�
    void append(int val) {
        Node* newNode = new Node(val);
        if (!head) {  // if empty list
            head = newNode;
            return;
        }
        Node* current = head;
        while (current->next) {  // nullptr ���� �� ���� ������
            current = current->next;
        }
        current->next = newNode;  // val ���� ���� node�� ���δ�. 
    }
    // ���� ����Ʈ ���
    void display() {
        Node* current = head;
        while (current) { // nullptr ���� �� ���� ������
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }
    // ���� ����Ʈ���� Ư�� �� ����
    void remove(int val) {
        if (!head) {  // if empty list, do nothing
            return;
        }
        if (head->data == val) { // ù ��°�� val�̸� ����� head�� ���� ������
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* current = head;
        while (current->next) { //  nullptr ���� �� ���� ������
            if (current->next->data == val) {  // �� ���̸� �ش� node ����
                Node* temp = current->next;
                current->next = current->next->next; // ���� ������ ����
                delete temp;  // �ش� ��� ����
                return;
            }
            current = current->next;
        }
    }
    // ���� ����Ʈ �޸� ����
    ~LinkedList() {
        while (head) { // �������鼭 node ����
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

    std::cout << "���� ����Ʈ: ";
    list.display();

    list.remove(3);
    std::cout << "3 ���� �� ���� ����Ʈ: ";
    list.display();

    return 0;
}
