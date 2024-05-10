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

Node *addTwoNumbers(Node *num1, Node *num2)
{

   Node *de=num1;
   int num1S=0;

    while(de!=NULL){

        num1S++;
        de=de->next;

    }

    
    Node* de1=num2;
    int num2S=0;

    while(de1!=NULL){

        num2S++;

        de1=de1->next;

    }

 
    Node* nnum1=num1;
    Node* nnum2=num2;

    Node* bigger;

    

    if(num1S>num2S) bigger=num1;

    else bigger=num2;

    Node* final1=bigger;

 

    int carry=0;

    while(final1!=NULL){

        int sum=0;

        if(nnum1!=NULL && nnum2!=NULL) sum=nnum1->data+nnum2->data+carry;

        else if (nnum1!=NULL && nnum2==NULL) sum=nnum1->data+carry;

        else if (nnum1==NULL && nnum2!=NULL) sum=nnum2->data+carry;

        carry=0;

        if(sum>=10){

            int val=sum-10;

            if(final1->next==NULL){

                Node* temp=new Node(1);
                final1->data=val;
                final1->next=temp;

               break;
            }

            else{
                final1->data=val;
                carry=1;
            }
        }

        else{
            final1->data=sum;
        }

        final1=final1->next;

        if(nnum1!=NULL) nnum1=nnum1->next;
        if (nnum2!=NULL) nnum2=nnum2->next;
    }
    return bigger;
}
