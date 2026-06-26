/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode* A, int B) {
    ListNode* TA=A;
    int cA=0;
    while(TA)
    {
        cA++;
        TA=TA->next;
    }
    int pos=(cA/2)+1-B;
    if(pos<=0)
    {
        return -1;
    }
    pos--;
    while(pos--)
    {
        A=A->next;
    }
    return A->val;
}
