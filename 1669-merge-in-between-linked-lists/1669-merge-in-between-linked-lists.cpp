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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* prev=list1;

        while(--a)
        {
            temp1=temp1->next;
   
        }
        b=b+1;
        while(b--)
        {
            prev=prev->next;
        }

        temp1->next=list2;
        while(temp2->next!=NULL)
        {
            temp2=temp2->next;
        }
        temp2->next=prev;
          return list1;
    }
};