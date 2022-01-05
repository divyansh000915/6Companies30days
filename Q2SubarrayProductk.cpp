// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
       long long int start=0,end=0,cnt=0,mult=1;
       while(end<n){
           mult*=a[end];
           while(start<n and mult>=k){
               mult=mult/a[start];
               start++;
           }
           if(mult<k)
           cnt+=end-start+1;
          
           end++;
       }
       return cnt;  
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends