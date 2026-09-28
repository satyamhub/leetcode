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
        ListNode* dummy=new ListNode(-101);
        ListNode* mover=dummy;
        ListNode* temp1=list1;
        ListNode* temp2=list2;

        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val <= temp2->val){
                mover->next=temp1;
                mover=mover->next;
                temp1=temp1->next;
            }else{
                mover->next=temp2;
                mover=mover->next;
                temp2=temp2->next;
            }
        }

        while(temp1!=NULL){
            mover->next=temp1;
            temp1=temp1->next;
            mover=mover->next;
        }

        while(temp2!=NULL){
            mover->next=temp2;
            temp2=temp2->next;
            mover=mover->next;
        }

        return dummy->next;
    }
};