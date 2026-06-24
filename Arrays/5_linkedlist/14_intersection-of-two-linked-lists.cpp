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
        int cA=0,cB=0;
        ListNode* TrA=headA;
        ListNode* TrB=headB;
        while(headA)
        {
            cA++;
            headA = headA->next;
        }
        while(headB)
        {
            cB++;
            headB = headB->next;
        }
        headA=TrA;
        headB=TrB;
        int diff = abs(cB-cA);
        bool mxNode=(cA>cB)?true:false;
        if(mxNode==true)
        {
            while(diff--)
            {
                headA=headA->next;
            }    
        }
        else
        {
            while(diff--)
            {
                headB=headB->next;
            }  
        }
        while(headA)
        {
            if(headA==headB)
            {
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};