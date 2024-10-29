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
    ListNode* resultingList = new ListNode();

    ListNode* outputList = resultingList;

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int sum = l1->val + l2->val;
        int carry = 0;

        if(sum > 9){
            carry = sum / 10;
            outputList->val = (sum % 10);
        } else{
            outputList->val = sum;
        }

        if(l1->next == nullptr && l2->next == nullptr && carry == 0){
            return resultingList;
        }

        if(l1->next == nullptr){
            l1->next = new ListNode(carry);
        } else if (carry){
            l1->next->val++;
        }

        if(l2->next == nullptr){
            l2->next = new ListNode();
        }

        

        outputList->next = new ListNode();
        outputList = outputList->next;

        addTwoNumbers(l1->next, l2->next);

        return resultingList;
    }
};