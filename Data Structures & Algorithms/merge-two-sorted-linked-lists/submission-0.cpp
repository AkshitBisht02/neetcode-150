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
        if(!list1) return list2;
        if(!list2) return list1;
        ListNode *a=list1;
        while(a->next){
            a=a->next;
        }
        a->next=list2;
        ListNode *b=list1;
        vector<int> hash;
        while(b){
            hash.push_back(b->val);
            b=b->next;
        }
        sort(hash.begin(),hash.end());
        ListNode *c=list1;
        int i=0;
        while(c){
            c->val=hash[i++];
            c=c->next;
        }
        return list1;
    }
};
