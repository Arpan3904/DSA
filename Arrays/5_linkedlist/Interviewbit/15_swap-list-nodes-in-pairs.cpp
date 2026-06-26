/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
   ListNode dummy(0);
   dummy.next = A;
   ListNode* prev = &dummy;
   while(prev->next && prev->next->next)
   {
       ListNode* first= prev->next;
       ListNode* second=first->next;
       
       first->next=second->next;
       second->next=first;
       prev->next=second;
       prev=first;
   }
   return dummy.next;
}
