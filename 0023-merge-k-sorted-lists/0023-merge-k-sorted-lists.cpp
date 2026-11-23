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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>arr;
        for(int i=0;i<lists.size();i++){
            ListNode*temp=lists[i];
            while(temp!=NULL){
                arr.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(arr.begin(),arr.end());
        ListNode* newHead=NULL;
        ListNode*temp=NULL;
        for(int i=0;i<arr.size();i++){
            ListNode* newNode=new ListNode(arr[i]);
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
        }
    };