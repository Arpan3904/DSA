/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* reverseList(ListNode* head)
{
    ListNode* prev=NULL;
    ListNode* curr=head;
    ListNode* next=NULL;
    while(curr)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
int Solution::lPalin(ListNode* head) {
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode* firstHalf=head;
    ListNode* secondHalf=reverseList(slow);
    while(secondHalf)
    {
        if(firstHalf->val!=secondHalf->val)
        {
            return false;
        }
        firstHalf =firstHalf->next;
        secondHalf =secondHalf->next;
    }
    return true;
}
