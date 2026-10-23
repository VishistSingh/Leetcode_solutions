/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head1=l1;
        ListNode* head2=l2;

        ListNode* temp1=head1;
        ListNode* temp2=head2;

        ListNode* ans=new ListNode(0);
        ListNode* tail=ans;
        int carry=0;

        while(temp1!=NULL && temp2!=NULL)
        {
            int sum=temp1->val + temp2->val + carry;

            tail->next=new ListNode(sum%10);
            carry=sum/10;
            tail=tail->next;

            temp1=temp1->next;
            temp2=temp2->next;
        }

        while(temp1)
        {
            int sum=temp1->val+carry;

            tail->next=new ListNode(sum%10);
            carry=sum/10;
            tail=tail->next;
            temp1=temp1->next;
        }

        while(temp2)
        {
            int sum=temp2->val+carry;

            tail->next=new ListNode(sum%10);
            carry=sum/10;
            tail=tail->next;
            temp2=temp2->next;
        }

        while(carry)
        {
            tail->next=new ListNode(carry%10);
            tail=tail->next;
            carry/=10;
        }

        return ans->next;
    }
};