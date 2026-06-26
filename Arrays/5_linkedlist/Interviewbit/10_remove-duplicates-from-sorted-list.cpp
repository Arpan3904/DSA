/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* TA=A;
    while(TA && TA->next)
    {
        if(TA->val==TA->next->val)
        {
            TA->next=TA->next->next;
        }
        else
        {
            TA=TA->next;
        }
    }
    return A;
}
