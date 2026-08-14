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
    int getDecimalValue(ListNode* head) {
        int ans=0;
        ListNode* temp=head;
        int n=1;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        cout<<n;
        temp=head;
        int i=0;
        while(temp!=NULL){
            ans+=pow(2,n-i-2)*temp->val;
            i++;
            temp=temp->next;
        }
        return ans;
    }
};