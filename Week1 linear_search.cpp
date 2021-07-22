#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;
    while (t)
    {
        int n, count = 0, flag = 0, key;
        int arr[n];
        cout << "enter length of array: "<<endl;
        cin >> n;
        cout << "enter key element: "<<endl;
        cin >> key;
        cout << "enter elements: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
         
            if (arr[i] == key)
            {
                flag = 1;
                break;
            }
            count++;
        }
        if(flag ==1)
        {
            cout<<"Number is present in "<<count+1<<" comparision"<<endl;
        }
        else{
            cout<<"Number is not present in "<<n<<" comparision"<<endl;
        }
    }
}
