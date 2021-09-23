#include<bits/stdc++.h>
using namespace std;
int binary_search(int k,vector<int> v,int last)
{
    int mid,start=0,count=0;
    last=last-1;

    while(start<=last)
    {
      mid = (start+last)/2;
      count++;
        if(v[mid]==k)
        {
            cout<<"key is present at "<<mid+1<<" and number of comparison are "<<count+1<<endl<<endl;
            return 1;
        }
        else if(v[mid]<k)
        {
          start=mid+1;
        }
        else
        {
          last=mid-1;
        }
      
    }
    cout<<"key not present in "<<count+1<<" comparision"<<endl;
    return 0;
}

int main()
{
  
  int t;
  cout<<"enter the number of test cases: ";
  cin>>t;
  while(t)
  {
    int n;
    int k;
    cout<<"enter the length of array: ";
    cin>>n;
    cout<<"enter the k element: ";
    cin>>k;
    vector<int> v(n);
    cout<<"enter elements in the array: ";
    for(int i=0;i<n;i++)
    {
      cin>>v[i];
    }
    binary_search(k,v,n);
    t--;
  }
  return 0;
}