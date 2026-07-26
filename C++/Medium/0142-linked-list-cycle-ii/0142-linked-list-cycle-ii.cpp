/*
Approach:
1. After slow meet fast 1st time, put slow back to head and move both slow and 
   fast one one step at a time.
   eventually they will meet at starting point of loop.
   because when slow meets fast first time, it covers d distance in loop,
   and total distance is L+d, and also L=distance between head and start of loop.
   so fast will cover L and slow will also cover L distance from head.
   so they will meet at starting point of head;

   TC:O(N)
   SC:O(1)


*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                slow=head;
                while(slow!=fast){
                    slow=slow->next;
                    fast=fast->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};