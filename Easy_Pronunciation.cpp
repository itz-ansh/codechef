#include<iostream>
using namespace std;
int main()
{
 long long T;
 cin>>T;
 while(T){
    long long N;
    cin>>N;
    string S;
    cin>>S;
   long long count=0;
   long long m=0;
  for ( long long i = 0; i <N; i++)

  {
    // char temp= S[i]; 
    if (S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u')
    {
        count=0;
    }
    else {
        count++;
    }
    m=max(m,count);
    // cout<<count;

  }

  if (m>=4){
    cout<<"NO"<<endl;
  }else{
    cout<<"YES"<<endl;
  }
  

    T--;
 }
}