/*Defination of ListNode
class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int value) : val(value), next(nullptr) {}

    ~ListNode() {
        delete next;
    }
};
*/


class Solution {
public:
    bool searchKey(ListNode*head, int key) {
        // Your code goes here
        bool searchKey(ListNode*head,int key){
            ListNode*current=head;
            while(current !=nullptr){
                if(current-> == key){
                    return T;
                }
                current = current->next;
            }
            return F;
        }
    }
};
