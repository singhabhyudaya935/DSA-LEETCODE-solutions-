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
    bool isPalindrome(ListNode* head) {
        if(head==nullptr) return true;
        if(head->next==nullptr) return true;
        ListNode*temp=head;
        vector<int>arr;
        int len=0;
        while(temp!=nullptr){
            len++;
            temp=temp->next;
        } temp=head;
        for(int i=0;i<len/2;i++){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        if(len%2==1){
            temp=temp->next;
        }
        for(int i=len/2-1; i>=0;i--){
            if(arr[i]!=temp->val){
                return false;
            }
            temp=temp->next;
        }
return true;
        
    }
};