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
    ListNode* deleteMiddle(ListNode* head)
    {
        if(!head -> next) return NULL;
        ListNode* temp=head;
        int counter=0;
        
        while(temp!=NULL)
        {
            counter++;
            temp=temp->next;
        }
        int k=counter/2;
        
        ListNode* pre=NULL;
        ListNode* temp1=head;
        int count=0;
         while(temp1!=NULL)
         {
             if(count==k)
             {
                 pre->next=temp1->next;
             }
             count++;
                 pre=temp1;
                 temp1=temp1->next;
             
         }
        return head;
    }
};