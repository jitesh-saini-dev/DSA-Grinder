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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;

        ListNode* c = head;
        int count = 0;
        while(c != NULL){
            c = c->next;
            count++;
        }

        k = k % count;
        if(k == 0) return head;

        int pos = count - k;

        ListNode* nt = head;
        for(int i = 1; i < pos; i++){
            nt = nt->next;
        }

        ListNode* newHead = nt->next;
        nt->next = NULL;

        ListNode* temp = newHead;
        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->next = head;

        return newHead;
    }
};