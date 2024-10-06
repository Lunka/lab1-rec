#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* swapPairs(ListNode* head) {
    if (!head || !head->next) {
        return head;
    }

    ListNode* first = head;
    ListNode* second = head->next;

    first->next = swapPairs(second->next);
    second->next = first;

    return second;
}

// Функція для тестування
void printList(ListNode* head) {
    while (head) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    head = swapPairs(head);
    printList(head); // Виведе: 2 1 4 3

    return 0;
}
