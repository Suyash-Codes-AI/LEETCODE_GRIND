/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */ 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return NULL;
        ListNode* pA = headA;
        ListNode* pB = headB;
        while (pA != pB){
            pA = (pA == NULL) ? headB : pA->next;
            pB = (pB==NULL) ? headA : pB->next;
        }
        return pA;

         

        
    }
};


//TC = O(n+m), because humne 2 list ko traverse kia hai isliye dono ki TC add ho gyi 
//SC = O(1)

//BRUTE FORCE APPROACH 
/** for(ListNode*a = headA; a !=NULL; a = a->next){
    for(ListNode* b = headB b != NULL; b = b->next){
        if(a == b) return a;

    }
}
return NULL /**

//TC = O(n*m)
multiply iss liye kiya kyuki kyuki yaha par nested loops hai 
