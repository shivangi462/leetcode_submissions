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
    void insert(ListNode** root, int item)
{
    ListNode* temp = new ListNode;
    ListNode* ptr;
    temp->val = item;
    temp->next = NULL;
  
    if (*root == NULL)
        *root = temp;
    else {
        ptr = *root;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
    }
}
    ListNode* partition(ListNode* head, int x) {
        vector<int> arr;
        vector<int> arr2;
        ListNode* dhead=head;
        while(head!=nullptr){
          if(head->val<x) arr.push_back(head->val);
          else arr2.push_back(head->val);
          head=head->next;
        }
        // for(int i=0;i<arr.size();i++)
        // cout<<arr[i];
        ListNode* ans=NULL ;

        for(int i=0;i<arr.size();i++){
          insert(&ans, arr[i]);
        }
        for(int i=0;i<arr2.size();i++){
          insert(&ans, arr2[i]);
        }
        return ans;
    }
};