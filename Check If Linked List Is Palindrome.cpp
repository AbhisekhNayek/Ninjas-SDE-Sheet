#include<stack>

bool isPalindrome(Node *head)
{
    Node *temp=head;
    std::stack<Node*>st;
    if(head==nullptr || head->next==nullptr)return true;
    while(temp){
        st.push(temp);
        temp=temp->next;

    }
    temp=head;
    while(temp){
        Node *top=st.top();

        if(top->data!=temp->data){
            return false;
        }
        temp=temp->next;
            st.pop();
    }
    return true;
}
