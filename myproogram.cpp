#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"eneter number of rows and coloomns"<<endl;
    cin>>n>>m;
    int arr[n][m];
    int i=0,j=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int target;
    cout<<"Enter your target element"<<endl;
    cin>>target;
    bool value=false;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]==target)
            value=true;
        }
    }
    cout<<value;
    return 0;
}