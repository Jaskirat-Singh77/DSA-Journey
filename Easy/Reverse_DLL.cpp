/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        if(head == nullptr) return head;
        if(head ->next == nullptr) return head;
        
        Node* curr = head;
        Node*Tprev = nullptr;
        while(curr != nullptr)
        {
            Tprev = curr->prev;
            curr->prev = curr->next;
            curr->next = Tprev;
            curr=curr->prev;
        }
        return Tprev->prev;
    }
};