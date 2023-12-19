#include <iostream>
#include <vector>
using namespace std;

/*
int arr[5]
int arr[] = {0,2,23,23}
vector<int> arr; //0
arr.push_back(1)O(N)
[1,xxxx]
arr.push_back(2) // O(1)
[1,2]
arr.push_back(3) TC:  O(N) + O(1), SC:O(N)  // *(arr+4*2) = 3
[1,2,xxxx,xxxx]
arr.push_back(4)
*/

vector<int> insert(vector<int> arr, int idx,int value)
{
    int length = arr.size();
    cout<< "size of arr is:" << length << endl;
    arr.push_back(0);
    for (int i = arr.size()-1;i>idx;i--){
        arr[i] = arr[i-1];
    }
    arr[idx]= value;
    cout<< "size of new arr is:" << arr.size() << endl;
    return arr;
}

void printArray(vector<int>arr){
    for (int i=0;i<arr.size();i++){
        cout << "\t" << arr[i];
    }
    cout << endl;
}

int main()
{
    int idx = 2;
    int value = 3;
    vector<int>arr={1,2,4,5,6}; // default constructor
    // vector<int>k(10,0); // parametrised constructor
    printArray(insert(arr, idx,value));
    return 0;
}

/*
prefix Sum array
Carry forward array
*/