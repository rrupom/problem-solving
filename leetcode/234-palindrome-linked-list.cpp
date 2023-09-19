/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> numbers;

        while (head) {
            numbers.push_back(head->val);
            if (head -> next != nullptr) {
                head = head->next;
            } else break;
        }

        bool flag = true;
        int size = numbers.size() - 1;
        for (int i = 0; i <= size / 2; i++) {
            if (numbers[i] != numbers[size - i]) {
                flag = false;
                break;
            }
        }

        return flag;
    }
};