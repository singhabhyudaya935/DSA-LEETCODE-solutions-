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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>arr;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<list2->val){
                arr.push_back(list1->val);
                list1=list1->next;
            }
            else{
                arr.push_back(list2->val);
                list2=list2->next;
                
            }}
            while(list1!=NULL){
                arr.push_back(list1->val);
                list1=list1->next;
            }
            while(list2!=NULL){
                arr.push_back(list2->val);
                list2=list2->next;
            } ListNode* newHead=NULL;
            ListNode* temp=NULL;
            for(int i=0;i<arr.size();i++){
                ListNode* newNode= new ListNode(arr[i]);
                if(newHead==NULL){
                    newHead=newNode;
                    temp=newNode;
                }
                else{
                    temp->next=newNode;
                    temp=temp->next;
                }
                }
                return newHead;
    }};