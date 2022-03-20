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
    void remove(ListNode<t> *&head)
    {
        if (head == nullptr || head->next == nullptr)
            return;

        Listnode<t> *prev = nullptr;
        Listnode<t> *p1 = head;
        Listnode<t> *p2 = head->next;
        // loop
        while (p1 != nullptr)
        {
            bool isOcuurances = false; // if true the element p1 has more than one occurance
            while (p2->value == p1->value)
            {
                p2 = p2->next;
                isOcuurances = true;
            }
            // p2 is the first non-mathing element from p1.isOccurance is set
            // remove the elements
            if (prev == nullptr)
                head = p2;
            else
                prev->next = p2;

            if (isOcuurances == false)
            {
                prev = p1;
            }
            p1 = p2;
            p2 = p2->next;
        }

        // int current = head->value;
        // ListNode<t> *tmp = head->next;
        // ListNode<t> *ptmp = head;
        // while (tmp != nullptr)
        // {
        //     if (tmp->value == current)
        //     {
        //         // code to remove tmp from list
        //         ptmp->next = tmp->next;
        //     }
        //     else
        //     {
        //         current = tmp->value;
        //         ptmp = tmp;
        //     }
        //     tmp = tmp->next;
        // }
    }
};
solution<int> obj;

int main()
{
    // Driver code
    int n;
    cin >> n;
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
    obj.remove(head);
    tmp = head;
    while (tmp != nullptr)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
    return 0;
}