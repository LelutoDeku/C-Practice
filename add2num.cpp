/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };f
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head=NULL,*temp,*temp2;
        int carry=0;
        while(l1!=NULL && l2!=NULL)
        {
            ListNode *l3=new ListNode();
            if(head==NULL)
            {
                head=l3;
            }
            else
            {
                temp->next=l3;
            }
            l3->val=(l1->val+l2->val);
            if(carry==1)
            {
                l3->val+=1; 
            }
            if(l3->val>=10)
            {
                carry=1;
                l3->val=l3->val-10;
            }
            else
            {
                carry=0;
            }
            l3->next=NULL;
            temp=l3;

            l1=l1->next;
            l2=l2->next;
        }
        if(l1==NULL) temp2=l2;
        else temp2=l1;
        while(temp2!=NULL)
        {
            if(carry==1)
            {
                temp2->val+=1;
            }
            if(temp2->val>=10)
            {
                temp2->val-=10;
                carry=1;
            }
            else 
            {
                carry=0;
            }
            temp->next=temp2;
            temp=temp2;
            temp2=temp2->next;
        }
        if(carry==1)
        {
            ListNode *l3=new ListNode();
            l3->val=1;
            l3->next=NULL;
            temp->next=l3;
        }
        return head;
    }

};