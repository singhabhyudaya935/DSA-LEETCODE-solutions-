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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr){
            return nullptr;
        }
        int len = 0;
        ListNode* temp = head;
        while(temp != nullptr){
            len++;
            temp = temp->next;
        }
        n=len-n+1; 
        if(n==1){
            ListNode* temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        temp=head;
        for(int i=0;i<n-2 && temp!=nullptr;i++){
            temp=temp->next;
        }
        if(temp==nullptr || temp->next==nullptr){
            return head;
        }
        ListNode* del=temp->next;
        temp->next=del->next;
        delete del;
        return head;
    }
};