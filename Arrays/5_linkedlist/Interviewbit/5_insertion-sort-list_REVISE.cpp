/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::insertionSortList(ListNode* head) {
    ListNode dummy(0);
    while(head)
    {
        ListNode* curr=head;
        head=head->next;
        ListNode* prev = &dummy;
        while(prev->next && prev->next->val < curr->val)
        {
            prev=prev->next;
        }
        curr->next=prev->next;
        prev->next=curr;
    }
    return dummy.next;
}
