class Solution
public:
    ListNode* reverseList(ListNode *header) {

        if (!header || !header->next) {
            return header;
        }
        ListNode *cur = header;
        ListNode *pre = NULL;
        while (header != null) {
            ListNode *nextTemp = cur->next; // 把当前下一个节点保存到临时变量
            cur->next = pre; // 当前的指向换个方向
            pre = cur; // 当前节点 赋给 反转的节点 相当于反转的节点往后挪动
            cur = nextTemp;  // 临时变量为下一个节点 赋给 当前节点
        }
    }    
