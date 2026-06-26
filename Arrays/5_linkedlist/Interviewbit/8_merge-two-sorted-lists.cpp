/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode dummy(-1);
    ListNode* sList=&dummy;
    while(A && B)
    {
        if(A->val<B->val)
        {
            sList->next=A;
            A=A->next;
        }
        else
        {
            sList->next=B;
            B=B->next;
        }
        sList=sList->next;
    }
    if(A)
    {
        sList->next=A;
    }
    if(B)
    {
        sList->next=B;
    }
    return dummy.next;
}
