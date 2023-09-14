struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{

    return list1 + (list2 - list1) * (list2 && (!list1 ||
        (list1->val > list2->val) && (list2->next = mergeTwoLists(list1, list2->next)) ||
            (list1->next = mergeTwoLists(list1->next, list2)) && 0));
}
