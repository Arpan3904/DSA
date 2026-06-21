/* Node Structure
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int getKthFromLast(Node* head, int n) {
        Node* slow=head;
        Node* fast=head;
        for(int i=0;i<n;i++)
        {
            if(!fast) return -1;
            fast=fast->next;
        }
        while(fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        return slow->data;
    }
};