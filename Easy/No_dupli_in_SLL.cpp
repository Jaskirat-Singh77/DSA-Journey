/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
        if(head->next == nullptr) return head;
        
        Node* curr = head->next;
        Node* pos = head;
        
        while(curr != nullptr)
        {
            if(curr->data != pos->data)
            {
                pos = curr;
                curr=curr->next;
            }
            else
            {
                
                curr=curr->next;
                pos->next = curr;
            }
        }
        return head;
        
    }
};