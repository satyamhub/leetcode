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
    ListNode* findkthNode(ListNode *temp, int k){
        k--;
        while(temp!=NULL && k>0){
            k--;
            temp=temp->next;
        }
        return temp;
    }

    ListNode* reverseLinkedList(ListNode* temp){
        ListNode* prev = nullptr;
        ListNode* curr = temp;

    while (curr != nullptr) {
        ListNode* next = curr->next; // save next node
        curr->next = prev;       // reverse the link
        prev = curr;             // move prev forward
        curr = next;             // move curr forward
    }

    return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prevLast=NULL;
        while(temp!=NULL){
            ListNode* kthNode=findkthNode(temp, k);
            if(kthNode==NULL){
                if(prevLast) prevLast->next=temp;
                break;
            }

            ListNode* nextNode=kthNode->next;
            kthNode->next=NULL;
            reverseLinkedList(temp);
            if(temp==head){
                head=kthNode;
            }else {
                prevLast->next = kthNode;
            }

            prevLast = temp;
            temp = nextNode;
        }
        return head;
    }
};