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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p=l1, *q=l2;
        vector<int> vec;
        int carry = 0;
        ListNode *head=new ListNode();
        ListNode *ans=NULL;

        while(p!=NULL || q!=NULL || carry){
            int digit1 = 0;
            int digit2 = 0;
            int sum  = 0;
            int digit = 0;

            if(p!=NULL)
                digit1 = p->val;
            else
                digit1 = 0;

            if(q!=NULL)
                digit2 = q->val;
            else
                digit2 = 0;

            sum = digit1 + digit2 + carry;

            digit = sum%10;
            carry = sum/10;
            
            vec.push_back(digit);
            if(p!=NULL)
                p=p->next;
            if(q!=NULL)
                q=q->next;
        }
        
        head->val = vec[0];
        head->next=NULL;
        ans=head;
        for(int i=1;i<vec.size();i++){
            ListNode *temp=new ListNode();
            temp->val = vec[i];
            temp->next=NULL;
            head->next=temp;
            head=temp;
        }
        
        return ans;
    }
};