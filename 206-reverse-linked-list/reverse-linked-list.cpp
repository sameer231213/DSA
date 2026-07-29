class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* prevNode = head;
        ListNode* currNode = head->next;

        while (currNode != nullptr) {
            ListNode* nextNode = currNode->next;
            currNode->next = prevNode;

            prevNode = currNode;
            currNode = nextNode;
        }

        head->next = nullptr;
        head = prevNode;

        return head;
    }
};