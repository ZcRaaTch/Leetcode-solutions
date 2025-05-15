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
        ListNode* temp = head;
        int ct=0;
        while(temp){
            ct++;
            temp=temp->next;
        }
        n=ct-n-1;
        if(n==-1) return head->next;
        
        temp=head;
        while(n>0){
            temp=temp->next;
            n--;
        }
        temp->next=temp->next->next;
        return head;
    }
};