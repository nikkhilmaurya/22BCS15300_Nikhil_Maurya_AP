class Solution {
  public:
    // Function to display the elements of a linked list in same line
    void printList(Node *head) {
        // your code goes here
        while(head!=nullptr){
            cout<<head->data<<" ";
            head=head->next;
        }
    }
};
