#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    selection_sort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
