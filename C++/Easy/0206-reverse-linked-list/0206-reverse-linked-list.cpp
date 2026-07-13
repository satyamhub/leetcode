/*
Brute:
1. I will insert the value of each node in an array.
2. Then I will reverse the array.
3. Then I will re- iterate the link list and replace the value with
    array value.

TC:O(2N)+O(N/2)
SC:O(N)



*/




#include<bits/stdc++.h>
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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode* temp=head;
        vector<int>arr;

        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        reverse(arr.begin(), arr.end());
        int i=0;
        temp=head;
        while(temp!=NULL){
            temp->val=arr[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};