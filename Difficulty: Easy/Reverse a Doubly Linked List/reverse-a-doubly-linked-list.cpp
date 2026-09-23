/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {

        Node* curr = head;

        while(curr != NULL) {

            Node* temp = curr->prev;

            curr->prev = curr->next;
            curr->next = temp;

            // This is the new head
            if(curr->prev == NULL) {
                head = curr;
            }

            curr = curr->prev;
        }

        return head;
    }
};