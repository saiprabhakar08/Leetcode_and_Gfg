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
    ListNode* removeElements(ListNode* head, int val) {
       while(head!=NULL and head->val==val) head=head->next;
       ListNode* res=head;
       ListNode* temp=head;
       while(res!=NULL)
       {
            if(res->val==val)
            {
                temp->next=temp->next->next;
                res=res->next;
            }
            else
            {
                temp=res;
                res=res->next;
            }
       }
       return head;

    }
};