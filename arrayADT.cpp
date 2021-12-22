#include <iostream>
using namespace std;
template <class t>
class arrayList
{
private:
    t *array;
    int size;

public:
    arrayList(int size)
    {
        this->size = size;
        this->array = new t[size];
    }
    void input(int low, int high)
    {
        if (low <= high && low < size && high < size)
            for (size_t i = low; i <= high; i++)
            {
                cin >> (this->array[i]);
            }
    }
    t operator[](int i)
    {
        return array[i];
    }
    void Double()
    {
        t *tmp = new t[size * 2];
        for (size_t i = 0; i < size; i++)
        {
            tmp[i] = this->array[i];
        }
        this->size *= 2;
        delete this->array;
        this->array = tmp;
    }
    void half()
    {
        size /= 2;
        t *tmp = new t[size];
        for (int i = 0; i < size; i++)
        {
            tmp[i] = this->array[i];
        }
        delete this->array;
        this->array = tmp;
    }
    void view(int low, int high)
    {
        if (low <= high && low < size && high < size)
        {
            for (int i = low; i <= high; i++)
            {
                cout << array[i] << " ";
            }
            cout << endl;
        }
    }
    int length()
    {
        return this->size;
    }
};

int main()
{
    arrayList<int> list(10);
    list.input(0, list.length() - 1);
    list.Double();
    list.view(0, list.length() - 1);
    list.half();
    list.view(0, list.length() - 1);

    return 0;
}