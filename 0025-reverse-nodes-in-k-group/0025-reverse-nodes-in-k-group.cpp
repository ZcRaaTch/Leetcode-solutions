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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        for(int i=0;i<k;i++){
            if(temp==NULL) return head;
            temp=temp->next;
        }
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nextptr=NULL;
        int ct=0;
        while(curr!=NULL && ct<k){
            nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
            ct++;
        }
        if(nextptr!=NULL){
        head->next=reverseKGroup(nextptr,k);
        }
        return prev;
    }
};