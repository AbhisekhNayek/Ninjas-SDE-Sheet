/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node* reverse(Node* head){

    Node* nxt=NULL;
    Node* pre=NULL;

    while(head){

        nxt=head->next;
        head->next=pre;
        pre=head;
        head=nxt;
    }
    return pre;
}

Node *addOne(Node *head){

  head=reverse(head);
  Node* temp=head->next;
  int carry=0;
  head->data=head->data+1;

  if(head->data<10) temp=NULL;

  else {
      head->data=head->data%10;
      carry=1;
  }
  Node* pre=NULL;
  while(temp){   
        int add=temp->data+carry;
        if(add>=10){
            add=add%10;
            carry=1;
        }   
        else{   
            carry=0;
        } 
        temp->data=add; 
        pre=temp;
        temp=temp->next;
  }

  if(carry==1){

  Node* node=new Node(1);
  pre->next=node;

}
  return reverse(head);
}
