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
    ListNode* reverseList(ListNode* head) {
        vector<int> ans;
        ListNode* t=head;
        int count=0;
        while(t!=NULL)
        {
            count++;
            t=t->next;
        }
        ListNode* temp=head;
        for(int i=0;i<count;i++)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        } 
        ListNode* curr=head;
        for(int i=count-1;i>=0;i--)
        {
           curr->val=ans[i];
           curr=curr->next;
        }

        return head;
    }
};