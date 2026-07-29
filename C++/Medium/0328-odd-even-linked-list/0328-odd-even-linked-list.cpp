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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* oddHead=NULL;
        ListNode* evenHead=NULL;
        ListNode* oddTail=NULL;
        ListNode* evenTail=NULL;
        ListNode* temp=head;
        
        int idx=1;
        while(temp!=NULL){   
           if(idx%2!=0){
            if(oddHead==NULL){
                oddHead=oddTail=temp;
            }else{
                oddTail->next=temp;
                oddTail=oddTail->next;

            }
           }else{
            if(evenHead==NULL){
                evenHead=evenTail=temp;
            }else{
                evenTail->next=temp;
                evenTail=evenTail->next;
            }
           }
           idx++;
            temp=temp->next;
        }

        oddTail->next=evenHead;
        evenTail->next=NULL;
        return oddHead;
    }
};