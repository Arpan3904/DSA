/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    if(A == NULL || A->next == NULL)
        return A;
        
    int len=1;
    ListNode* tail = A;

    while(tail->next)
    {
        tail = tail->next;
        len++;
    }

    B = B % len;
    if(B==0) return A;
    
    ListNode* temp = A;

    for(int i = 1; i < len - B; i++)
    {
        temp = temp->next;
    }
    ListNode* newHead = temp->next;
    temp->next = NULL;
    tail->next = A;

    return newHead;
}
