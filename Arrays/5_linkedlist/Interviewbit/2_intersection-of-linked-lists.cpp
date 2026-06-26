/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
   ListNode* TA=A;
   ListNode* TB=B;
   int cA=0,cB=0;
   while(TA)
   {
       cA++;
       TA=TA->next;
   }
   while(TB)
   {
       cB++;
       TB=TB->next;
   }
   int diff=abs(cB-cA);
   if(cA>cB)
   {
       while(diff--)
       {
           A=A->next;
       }
   }
   else
   {
       while(diff--)
       {
           B=B->next;
       }
   }
   while(A)
   {
       if(A==B)
       {
           return A;
       }
       A=A->next;
       B=B->next;
   }
   return NULL;
}
