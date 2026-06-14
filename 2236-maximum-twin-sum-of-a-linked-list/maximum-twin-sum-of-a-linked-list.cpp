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
    ListNode* rerse(ListNode* head) {
        if(head == NULL || head->next == NULL){
        return head;
        }

    ListNode* prev=NULL;
    ListNode* curr=head;
    ListNode* forward=NULL;

    while(curr!=NULL){
        forward = curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
    }

    int pairSum(ListNode* head) {
        //step 1 find mid element
        ListNode* slow=head,*fast=head;
        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        //reverse mid to last element and get revserse node head
        ListNode* rev=rerse(slow);
        ListNode* temp1=head,*temp2=rev;

        int ans=0;
        while(temp2!=NULL){
            ans=max(temp1->val+temp2->val,ans);
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return ans;
       

    }
};