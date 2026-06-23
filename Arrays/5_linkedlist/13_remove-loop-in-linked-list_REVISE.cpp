/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        Node* slow=head;
        Node* fast=head;
        Node* prevPoint= NULL;
        Node* ptr= head;
        while(fast && fast->next)
        {
            prevPoint=slow;
            slow=slow->next;
            fast=fast->next->next;
            if(fast == slow)
            {
                ptr = head;
            
                while(ptr != slow)
                {
                    ptr = ptr->next;
                    slow = slow->next;
                }
            
                while(slow->next != ptr)
                {
                    slow = slow->next;
                }
            
                slow->next = NULL;
                return;
            }
        }
    }
};