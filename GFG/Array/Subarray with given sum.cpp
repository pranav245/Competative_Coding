#include <bits/stdc++.h>

using namespace std;

void subArray(vector<int> arr, int sum, int n)
{
        int start = 0;
        int curr_sum=arr[0];
        
            
        for(int i=1;i<=n;i++)
        {
            while(curr_sum>sum and start<i-1)
            {
                curr_sum -= arr[start];
                start++;
            }
            
            if(curr_sum==sum)
            {
                cout<<start+1<<" "<<i<<endl;
                return;
            }
            
            if(i<n)
            {
                curr_sum+=arr[i];
            }
        }
        
        cout<<-1<<endl;
        return;
}


int main() {
	//code
	int tc;
	cin>>tc;
	
	while(tc)
	{
	    tc--;
	    
	    int n,sum;
	    cin>>n;
	    cin>>sum;
	    vector<int> arr;
	    while(n)
	    {
	        int temp;
	        n--;
	        cin>>temp;
	        arr.push_back(temp);
	    }
	    subArray(arr,sum,arr.size());
	}
	return 0;
}
