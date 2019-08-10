// Middle of the Linked List
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fastPointer = head;
        ListNode* slowPointer = head;
        
        while(fastPointer!=NULL && fastPointer->next!=NULL)
        {
            fastPointer = fastPointer->next->next;
            slowPointer = slowPointer->next;
        }
        return slowPointer;
        
    }
};