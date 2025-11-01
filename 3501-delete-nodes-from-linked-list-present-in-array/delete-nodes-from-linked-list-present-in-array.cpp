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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> present;
        for (int num : nums) {
            present.insert(num);
        }

        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            if(present.count(curr->val)){
                if(prev==NULL){//deletion at head
                    head=head->next;
                    curr->next=NULL;
                    curr=head;
                }else{
                    prev->next=curr->next;
                    curr->next=NULL;
                    curr=prev->next;
                }
            }else{
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }
};