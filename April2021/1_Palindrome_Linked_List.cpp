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
        
        stack <int> st;
        ListNode *stptr=head;
        
        while(stptr!=NULL){
            st.push(stptr->val);
            stptr=stptr->next;
        }
        while(head!=NULL){
            int t=st.top();
            st.pop();
            
            if(head->val != t)
                return false;
            
            head=head->next;
        }
        return true;
    }
};