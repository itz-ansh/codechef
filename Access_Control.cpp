#include<iostream>
using namespace std;
int main()
{
 int T;
 cin>>T;
 while(T--){
    int n;
    int x;
    string s;
    cin>>n>>x;
    cin>>s;
    int swipe=0;
    bool flag=true;
    for (int i=0; i<n;i++){

        if (s[i]=='0'){
            swipe--;
        }
        if (s[i]=='1'){
            swipe=x;
        }
       // cout<<swipe<<endl;
        if (swipe<0){
            flag=false;
            break;
            
        }
        

    }
    if (flag){

    cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
 }
}   