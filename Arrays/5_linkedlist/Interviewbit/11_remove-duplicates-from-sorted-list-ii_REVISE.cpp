/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
   ListNode dummy(0);
   dummy.next = A;

   ListNode* prev = &dummy;
   ListNode* curr = A;
   while(curr)
   {
       int count=1;
       while(curr->next && curr->val==curr->next->val)
       {
           count++;
           curr=curr->next;
       }
       if(count>1)
       {
           prev->next=curr->next;
       }
       else
       {
           prev=prev->next;
       }
       curr=curr->next;
   }
   return dummy.next;
}
