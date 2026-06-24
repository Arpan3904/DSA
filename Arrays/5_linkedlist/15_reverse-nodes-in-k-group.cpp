/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL) return NULL;
        ListNode *prev=NULL, *curr=head, *next=NULL;
        int c=k;
        while(curr && c>0)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            c--;
        }
        if(curr==NULL && c>0)
        {
            curr=prev;
            prev=NULL;
            next=NULL;
            while(curr)
            {
                next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
            }
        }
        if(c>0)
        {
            return prev;
        }
        else
        {
            head->next=reverseKGroup(curr,k);
        }
        return prev;
    }
};