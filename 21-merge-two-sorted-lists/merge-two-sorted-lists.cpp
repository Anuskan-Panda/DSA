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
        
    ListNode* s1=list1;
    ListNode* s2=list2;
    ListNode* s3;
     ListNode* head = NULL;
        ListNode* tail =NULL;

    while(s1!=NULL && s2!=NULL)
    {
        if(s1->val > s2->val)
        {
            s3=new ListNode(s2->val);
            s2=s2->next;
            

        }
        else
        {
            s3=new ListNode(s1->val);
            s1=s1->next;
           
        }

         if (head == nullptr) {
                head = s3;
                tail = s3;
            } else {
                tail->next = s3;
                tail = tail->next;
            }
    }
    
    while(s1!=NULL)
    {
        s3=new ListNode(s1->val);
         if (head == nullptr) {
                head = s3;
                tail = s3;
                } else {
                tail->next = s3;
                tail = tail->next;
            }
        s1=s1->next;
      
    }
     while(s2!=NULL)
    {
        s3=new ListNode(s2->val);
         if (head == nullptr) {
                head = s3;
                tail = s3;
                } else {
                tail->next = s3;
                tail = tail->next;
            }
        s2=s2->next;
    
    }
 
return head;

    }
    
};