/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // // code here
        // int count =1;
        // Node* curr = head;
        // while(curr->next != nullptr)
        // {
        //     count++;
        //     curr=curr->next;
        // }
        // if(k>count)
        // return -1;
        
        // int pos = count + 1 - k;
        // count = 1;
        // curr = head;
        // while(curr != nullptr)
        // {
        //     if(count == pos)
        //     {
        //         return curr->data;
        //     }
        //     else
        //     {
        //     count++;
        //     curr=curr->next;
        //     }
        // }
        
        Node* mainptr = head;
        Node* refptr = head;
        
        for(int i = 1;i<k ; i++)
        {
            refptr = refptr->next;
            if(refptr == nullptr)
            return -1;
        }
        
        while(refptr->next != nullptr)
        {
            mainptr = mainptr->next;
            refptr = refptr->next;
        }
        
        return mainptr->data;
    }
};
