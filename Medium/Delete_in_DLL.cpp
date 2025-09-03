/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    Node* delPos(Node* head, int x) {
        if (x == 1)
        {
        head->next->prev = nullptr;
        return head->next;
        }
        
        Node* Tprev = NULL;
        Node* curr = head;
        
        for(int i = 1 ;i<x;i++)
        {
            Tprev=curr;
            curr=curr->next;
        }
        
        Tprev->next = curr->next;
        if(curr->next)
        curr->next->prev = Tprev;
        
        delete(curr);
        return head;
        
    }
};