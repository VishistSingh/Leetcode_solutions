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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL)
        {
        delete head;
         return NULL;
        }
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        int y=count-n;
       ListNode* t=head;
       ListNode* prev=NULL;
       if(y==0)
       {
         temp=head;
         head=head->next;
         delete temp;
         return head;
       }
        while(y--)
        {
            prev=t;
            t=t->next;
        }
        // if(t->next==NULL)
        // {
        //     delete t;
        //     prev->next=NULL;
        // }
        prev->next=t->next;
        delete t;
       
       return head;
        
    }
};