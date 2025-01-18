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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return head;
        if (head->next==NULL){
            return head;
        }
        ListNode* temp=head;
        ListNode* ans=temp;
        head=head->next;
        while(head!=NULL){
            if(temp->val!=head->val){
                temp->next=head;
                head=head->next;
                temp=temp->next;
                continue;
            }
            else{
                head=head->next;
            }

        }
        temp->next=head;
        return ans;
    }
};