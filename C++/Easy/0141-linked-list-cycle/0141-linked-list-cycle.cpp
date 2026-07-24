/*
Approach: Tortoise and Heir approach

1. I will assign two pointer one is slow and another is fast.
2. slow will move 1 step and fast will move 2 step at a time.
3. In a cycle slow and fast pointer will eventually meet, bcz
   their distance between will decrease by 1 each time.

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
    bool hasCycle(ListNode *head) {
        
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
            
        }
        return false;
    }
};