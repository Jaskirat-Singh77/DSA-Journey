/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {
        // code here
       
        int count=0;
        Node* temp = new Node(x);
        Node* pos;
        if(head == NULL)
        return temp;
        
        Node* curr = head;
        while(curr != NULL)
        {
            if(count == p)
            {
                pos = curr;
            }
            count++;
            curr=curr->next;
        }
        
        if(pos->next == NULL)
        {
            pos->next = temp;
            temp->prev = pos;
        }
        else
        {
            temp->prev = pos;
            temp->next = pos->next;
            pos->next->prev = temp;
            pos->next = temp;
        }
        return head;
    }
};