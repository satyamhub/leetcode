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
    ListNode* partition(ListNode* head, int x) {
        ListNode* low=new ListNode(-1);
        ListNode* high=new ListNode(-1);
        ListNode* temp=head;
        ListNode* highHead=high;
        ListNode* lowHead=low;
        while(temp!=NULL){
            if(temp->val<x){
                low->next=temp;
                low=low->next;
            }else{
                high->next=temp;
                high=high->next;
            }
            temp=temp->next;
        }
        low->next=highHead->next;
        high->next=NULL;
        return lowHead->next;
    }
};