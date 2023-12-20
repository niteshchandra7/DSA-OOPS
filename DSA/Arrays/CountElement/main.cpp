#include <iostream>
using namespace std;

int findMaxElement(vector<int> &arr)
{
    int maxElement = arr[0];
    for (unsigned int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int getCount(vector<int> &arr)
{
    int maxElement = findMaxElement(arr);
    int count = 0;
    for (unsigned int i = 0; i < arr.size(); i++)
    {
        if (maxElement>arr[i])
            count++;
    }
    return count;
}

int main()
{
    vector<int> arr = {-3, -2, 6, 8, 4, 8, 5};
    cout << getCount(arr) << endl;
    return 0;
}