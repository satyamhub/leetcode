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
        unordered_map<ListNode*,int>mpp;
        ListNode* temp=head;
        while(temp!=NULL){
            if(mpp[temp->next]>0){
                return true;
            }
            mpp[temp->next]++;
            temp=temp->next;
        }
        return false;
    }
};