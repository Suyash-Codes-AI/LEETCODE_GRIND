/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };


 TC = O(n)
 Hum ek hi baar linked list traverse kar rahe hain.

Har node ko max ek hi baar visit karenge.

Isliye


SC = O(1)
Hum sirf ek pointer (curr) use kar rahe hain.

Koi extra data structure (set, map, array) use nahi kiya
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr || head->next == nullptr) 
            return head;   // if list is empty or has only 1 element

        ListNode* curr = head;

        while (curr != nullptr && curr->next != nullptr) {
            if (curr->val == curr->next->val) {
                // duplicate found → skip the next node
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;   // free memory
            } else {
                curr = curr->next; // move forward only if no duplicate
            }
        }

        return head;
    }
};
