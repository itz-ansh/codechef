#include<iostream>
using namespace std;
int main()
{
 int T;
 cin>>T;
 while(T){
    int n;
    cin>>n;
        int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    int sum=0;
    for (int i = 0; i <n; i++)
    {
        sum+=arr[i];
    }
    if (sum%2==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
        
    
    
    T--;
 }
}