3
/*#include<bits/stdc++.h>
using namespace std;

int main()
{
  ///////
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // #ifndef ONLINE_JUDGE
  // freopen("in.txt", "r", stdin);
  // freopen("out.txt", "w", stdout);
  // #endif
  ///////
  int t;
  cin>>t;
  while(t--)
  {
  int n;
    int flag=0;
    cin>>n;
    int a[n];
    int key;
    cin>>key;
    int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
        if(a[i]==key)
        {
            flag=1;
            break;
        }
        
    }
    if(flag==1)
    {
        cout<<"number "<<key<<" is present and number of comparisons performmed are "<<c<<endl;
    }
    else if(flag==0){
        cout<<"number is not present";
    }
  }
}*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;
    while (t)
    {
        int n, count = 0, flag = 0, k;
        int arr[n];
        cout << "enter length of array: "<<endl;
        cin >> n;
        cout << "enter k element: "<<endl;
        cin >> k;
        cout << "enter elements: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
         
            if (arr[i] == k)
            {
                flag = 1;
                break;
            }
            count++;
        }
        if(flag ==1)
        {
            cout<<"Number is Present in "<<count+1<<" comparision"<<endl;
        }
        else{
            cout<<"Number is not Present in "<<n<<" comparision"<<endl;
        }
    }
}