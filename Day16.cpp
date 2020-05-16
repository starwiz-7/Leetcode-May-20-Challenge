/*
    Author: Aryan Yadav
    Odd Even Linked List
    
    Complexity:O(n)
    Algorithm: NA
    Difficulty: Medium   
*/

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
    ListNode* oddEvenList(ListNode* head) {
        if (head) {
            for (auto odd_tail = head, curr = head->next;
                 curr && curr->next;
                 curr = curr->next) {
                ListNode *even_head = odd_tail->next;
                odd_tail->next = curr->next;
                odd_tail = odd_tail->next;
                curr->next = odd_tail->next;
                odd_tail->next = even_head;
            }
        }
        return head; 
    }
};
