#include <iostream>
#include <vector>
#include <map>
using namespace std;

int getPairCount(vector<int>arr,int k){
    map<int,int> frequencyMap; //TC: O(N)+O(N) ~ O(N), SC:O(N)
    int count = 0;
    for (int i=0;i<arr.size();i++){
        if (frequencyMap.find(arr[i])==frequencyMap.end()){ // if key was not present in the map
            frequencyMap[arr[i]]=1;
        } else {
            frequencyMap[arr[i]]+=1;
        }
        //frequencyMap[arr[i]]+=1;
    }
    for (int i=0;i<arr.size();i++){
        int currentElement = arr[i];
        int elementLookingFor = k -arr[i];
        if (frequencyMap.find(elementLookingFor)!=frequencyMap.end()){
            if (currentElement==elementLookingFor){
                count += (frequencyMap[elementLookingFor])-1;
            } else {
                count+= (frequencyMap[elementLookingFor]);
            }
        }
    }
    return count;
}

int main()
{
    vector<int> arr = {3, -2, 1, 4, 3, 6, 8,5,5}; //SC:O(N),TC:O(N)
    //vector<int> arr = {5,5};
    int k=10;
    cout << getPairCount(arr,10) << endl;
    return 0;
}