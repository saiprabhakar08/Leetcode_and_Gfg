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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = NULL;
        ListNode* ans = NULL;
        while((list1) && (list2))
        {
            if(list1 -> val < list2 -> val)
            {
                if(head == NULL)
                {
                    head = new ListNode(list1 -> val);
                    ans = head;
                }
                else
                {
                    ListNode* temp = new ListNode(list1 -> val);
                    head -> next = temp;
                    head = head -> next;
                }
                list1 = list1 -> next;
            }
            else
            {
                if(head == NULL)
                {
                    head = new ListNode(list2 -> val);
                    ans = head;
                }
                else
                {
                    ListNode* temp = new ListNode(list2 -> val);
                    head -> next = temp;
                    head = head -> next;
                }
                list2 = list2 -> next;
            }
        }
        if(head == NULL)
        {
            if(list1) return list1;
            else return list2;
        }
        while(list1) 
        {
            head -> next = list1;
            head = head -> next;
            list1 = list1 -> next;
        }
        while(list2) 
        {
            head -> next = list2;
            head = head -> next;
            list2 = list2 -> next;
        }
        return ans;
        
    }
};