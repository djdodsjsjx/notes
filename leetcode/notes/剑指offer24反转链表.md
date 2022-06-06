# 反转链表
```cpp
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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) return nullptr;
        if (head->next == nullptr) return head;
        ListNode* node = reverseList(head->next);   //node节点记录反转链表后的头节点
        head->next->next = head;                    //令当前节点的后一个节点的后一个节点指向当前节点完成反转
        head->next = nullptr;                       //将当前节点设置为末尾节点
        return node;
    }
};
```