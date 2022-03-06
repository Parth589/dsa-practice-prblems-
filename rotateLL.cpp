#include <bits/stdc++.h>
using namespace std;
template <class t>
class ListNode
{
public:
    t value;
    ListNode *next;
    ListNode(t value)
    {
        this->value = value;
        this->next = nullptr;
    }
    ListNode(t value, ListNode *next)
    {
        this->value = value;
        this->next = next;
    }
    ListNode()
    {
        this->next = nullptr;
        this->value = 0;
    }
};
template <class t>
class solution
{
public:
    void rotate(ListNode<t> *&head, int k)
    {
        if (head == nullptr || head->next == nullptr) // if the list has only one one element or it is a null list
            return;
        // approach : make the list circular.find the first node in resultant list and make the previous one as null
        // phase 1: make the list circular
        ListNode<t> *lastNode = head;
        while (lastNode->next != nullptr)
            lastNode = lastNode->next;
        lastNode->next = head;
        // find the first and last node in resultant list
        for (size_t i = 0; i < k; i++)
        {
            head = head->next;
            lastNode = lastNode->next;
        }
        // remove the circuallity of list
        lastNode->next = nullptr;
    }
};
solution<int> obj;

int main()
{
    // Driver code
    int n, k;
    cin >> n >> k;
    vector<ListNode<int>> v(n);
    for (size_t i = 0; i < n - 1; i++)
    {
        v[i].next = &v[i + 1];
    }
    v[n - 1].next = nullptr;
    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i].value;
    }

    ListNode<int> *head = &v[0];
    // printing before processing
    ListNode<int> *tmp = head;
    while (tmp != nullptr)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
    obj.rotate(head, k);
    tmp = head;
    while (tmp != nullptr)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
    return 0;
}