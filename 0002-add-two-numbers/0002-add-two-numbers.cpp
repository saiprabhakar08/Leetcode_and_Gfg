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
        int rem=0;
        ListNode* temp=new ListNode(-1);
        ListNode* res=temp;
        while(l1!=NULL && l2!=NULL)
        {
            int add=l1->val+l2->val+rem;
            if(add>9)
            {
                ListNode* dum=new ListNode(add-10);
                temp->next=dum;
                temp=temp->next;
                rem=1;
            }
            else
            {
                ListNode* dum=new ListNode(add);
                temp->next=dum;
                temp=temp->next;
                rem=0;
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL)
        {
            if(l1->val+rem>9)
            {
                ListNode* dum=new ListNode((l1->val+rem)-10);
                temp->next=dum;
                temp=temp->next;
                rem=1;
            }
            else
            {
                ListNode* dum=new ListNode(l1->val+rem);
                temp->next=dum;
                temp=temp->next;
                rem=0;
            }
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            if(l2->val+rem>9)
            {
                ListNode* dum=new ListNode((l2->val+rem)-10);
                temp->next=dum;
                temp=temp->next;
                rem=1;
            }
            else
            {
                ListNode* dum=new ListNode(l2->val+rem);
                temp->next=dum;
                temp=temp->next;
                rem=0;
            }
            l2=l2->next;
        }
        if(rem)
        {
            ListNode* dum=new ListNode(1);
            temp->next=dum;
            temp=temp->next;
        }
        return res->next;
        
    }
};