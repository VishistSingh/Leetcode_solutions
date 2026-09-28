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
 ListNode* reve(ListNode* head)
 {
    ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* fut=NULL;

        while(curr)
        {
            fut=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fut;
        }
        curr=prev;
        return curr;
 }
    ListNode* doubleIt(ListNode* head) {
        ListNode* curr=head;
       curr=reve(head);
        int carry=0;
        ListNode* ans=new ListNode(0);
        ListNode* tail=ans;
        while(curr)
        {
            int sum=curr->val * 2+ carry;
            tail->next=new ListNode(sum%10);
            carry=sum/10;
            tail=tail->next;
            curr=curr->next;
         }

                    while(carry!=0)
                    {
                        tail->next=new ListNode(carry%10);
                        carry=carry/10;
                        tail=tail->next;
                    }
                   return reve(ans->next);
    }
};