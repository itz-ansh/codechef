#include<iostream>
using namespace std;
int main()
{
 int T;
 cin>>T;
 while(T){
    int N;
    int K;
    bool flag=true;
    cin>>N;
    cin>>K;
    int arr[N];
    int total=0;
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < N; i++)
    {
         total+=arr[i];
        if (total>=K)
        {   
            total-=K;
            // cout<<total<<" "<<endl;
            
        }
        else
        {
            cout<<"NO"<<" "<<i+1<<endl;
            flag=false;
            break;
        }
        
        
    }
    if (flag)
    {
        cout<<"YES"<<endl;
    }
    
    // cout<<"YES"<<endl;

    
    
    T--;
 }
}