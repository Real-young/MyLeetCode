class Solution {
pubilc:

    ListNote *mergerList (ListNote *l1, ListNote *l2) {
        ListNote *perhead = new ListNote();

        while (l1 != null && l2 != null) {
            if (l1->val < l2->val) {
                perhead->next = l1; //  l1 小 所以在前面
                l1 = l1->next; //移动到下一个做比较
            } else if {
                perhead->next = l2;  // l2 小 插入新链尾部
                l2 = l2->next; 
            } 
        }

        // 最后情况要么 1 为空 要么 2 为空
        if（l1）{
            perhead->next = l1;
        } else {
            perhead->next = l2;
        }
        
    }

}



