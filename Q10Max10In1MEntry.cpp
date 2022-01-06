
   
// Article Link : https://leetcode.com/discuss/interview-experience/514986/Goldman-Sachs-Interview-Process-and-Questions

/*
Direct Question Not Present for Practice but Reading above article
I could make out Problem Statement and Its solution.
*/  

/*
Problem Statement : Find maximum 10 numbers in a list having 10M entries.
Solution Approach :
Maintain a minHeap of size 10
Let's say you insert first 10 numbers (1,2,3,4,5,6,7,8,9,10) to the heap so that "1" will be the root
Now next number is 11
compare 11 with the root element
if it is greater then remove the root and insert the number
if it is smaller then do nothing
In the end you will have largest 10 elements in the heap
*/


#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void largest(int arr[],int n,int k)
    {
        vector<int> final;
        priority_queue<int> temp;
        for(int i=0;i<n;i++)
            temp.push(arr[i]);
        for(int i=0;i<k;i++)
        {
            final.push_back(temp.top());
            temp.pop();
        }
        for(auto it:final)
            cout<<it<<" ";
    }
};