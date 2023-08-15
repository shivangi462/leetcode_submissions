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


    void insert(ListNode** root, int item)  // 
{
    ListNode* temp = new ListNode(item);
    ListNode* ptr;
    // temp->val = item; //   item|NULL  
    temp->next = NULL;
  

    // agr root null hai toh direct jor do
    if (*root == NULL)
        *root = temp;

    // but agr kuch element hai toh end me jana padega     
    else {
        ptr = *root;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
    }
}


    ListNode* partition(ListNode* head, int x) {
      // 1 4 3 2 5 2 
        vector<int> arr; // wo values store karega jo x se kam hongi
        vector<int> arr2; // wo values store karega jo x ke barabar aur x se badi values

        
        while(head!=nullptr){
          if(head->val < x) 
             arr.push_back(head->val);
          else 
             arr2.push_back(head->val);

          head=head->next;
        }
        // arr -> 1 2 2
        // arr2 -> 4 3 5 
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