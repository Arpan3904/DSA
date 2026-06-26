/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    int cZero=0;
    ListNode* TA=A;
    while(TA)
    {
        if(TA->val==0) cZero++;
        TA=TA->next;
    }
    TA=A;
    while(TA)
    {
        if(cZero>0)
        {
            TA->val=0;
            cZero--;
        }
        else
        {
            TA->val=1;
        }
        TA=TA->next;
    }
    return A;
}
