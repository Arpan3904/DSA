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
    ListNode* prev = NULL;
    ListNode* curr = head;

    while(curr)
    {
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    return prev;
}

ListNode* Solution::solve(ListNode* A)
{
    if(A == NULL || A->next == NULL)
        return A;

    // Separate odd and even lists
    ListNode* odd = A;
    ListNode* even = A->next;
    ListNode* evenHead = even;

    while(even && even->next)
    {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }

    odd->next = NULL;

    evenHead = reverseList(evenHead);

    ListNode* oddCurr = A;
    ListNode* evenCurr = evenHead;

    while(evenCurr)
    {
        ListNode* oddNext = oddCurr->next;
        ListNode* evenNext = evenCurr->next;

        oddCurr->next = evenCurr;
        evenCurr->next = oddNext;

        oddCurr = oddNext;
        evenCurr = evenNext;
    }

    return A;
}