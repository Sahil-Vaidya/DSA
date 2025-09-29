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
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL)    return;

        //find middle
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        //rev second part
        ListNode* newhead=slow->next;
        slow->next=NULL;
        //reverse
        ListNode* curr=newhead;
        ListNode* prev=NULL;
        while(curr){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }

        //insert new node into 1st node
        ListNode* t1=head;
        ListNode* t2=prev;
        while(t2){
            ListNode* m1=t1->next;
            ListNode* m2=t2->next;

            t1->next=t2;
            t2->next=m1;
            t1=m1;
            t2=m2;
        }
    }
};