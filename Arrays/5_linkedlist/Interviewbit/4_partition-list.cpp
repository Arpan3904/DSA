/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    ListNode dummy1(-1);
    ListNode dummy2(-1);
    ListNode* LB=&dummy1;
    ListNode* GTB=&dummy2;
    while(A)
    {
        if(A->val<B)
        {
            LB->next=A;
            LB=LB->next;
        }
        else
        {
            GTB->next=A;
            GTB=GTB->next;
        }
        A=A->next;
    }
    GTB->next=NULL;
    LB->next=dummy2.next;
    return dummy1.next;
}
