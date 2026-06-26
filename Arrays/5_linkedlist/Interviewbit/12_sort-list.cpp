/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* mergeSort(ListNode* firstHalf, ListNode* secondHalf)
{
    ListNode dummy(0);
    ListNode* temp=&dummy;
    while(firstHalf && secondHalf)
    {
        if(firstHalf->val<secondHalf->val)
        {
            temp->next=firstHalf;
            firstHalf = firstHalf->next;
        }
        else
        {
            temp->next=secondHalf;
            secondHalf = secondHalf->next;
        }
        temp=temp->next;
    }
    if(firstHalf)
    {
        temp->next=firstHalf;
    }
    if(secondHalf)
    {
        temp->next=secondHalf;
    }
    return dummy.next;
}
ListNode* findMid(ListNode* head)
{
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast->next && fast->next->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
ListNode* Solution::sortList(ListNode* head) {
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    ListNode* mid = findMid(head);
    ListNode* newHead=mid->next;
    mid->next=NULL;
    ListNode* firstHalf = sortList(head);
    ListNode* secondHalf = sortList(newHead);
    return mergeSort(firstHalf,secondHalf);
}
