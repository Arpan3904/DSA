/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    ListNode dummy(0);
    ListNode* tail = &dummy;

    int carry = 0;
    while(A || B || carry)
    {
        int sum=carry;
        if(A)
        {
            sum+=A->val;
            A=A->next;
        }
        if(B)
        {
            sum+=B->val;
            B=B->next;
        }
        tail->next = new ListNode(sum%10);
        tail=tail->next;
        carry=sum/10;
    }
    return dummy.next;
}
