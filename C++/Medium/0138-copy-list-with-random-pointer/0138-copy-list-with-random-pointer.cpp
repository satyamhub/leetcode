/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

/*
Approach:
1. Create CopyNode in between two original nodes.
2. now reiterate and copyNode->random=original->random->next;
3. now creat a dummy Node and point to head->next;
4. now break the links of original and copyNodes
5. return dummyNode next

*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp=head;
        while(temp!=NULL){
            Node* copyNode=new Node(temp->val);
            copyNode->next=temp->next;
            temp->next=copyNode;
            temp=temp->next->next;
        }

        
        temp=head;
        while(temp!=NULL){
            Node* copyNode=temp->next;
            if(temp->random){
                copyNode->random=temp->random->next;
            }else{
                copyNode->random=NULL;
            }
            temp=temp->next->next;
        }
        temp=head;
        Node* dummyNode=new Node(-1);
        Node* res=dummyNode;
        while(temp!=NULL){
            res->next=temp->next;
            temp->next=temp->next->next;
            res=res->next;
            temp=temp->next;
        }
        return dummyNode->next;

    }
};