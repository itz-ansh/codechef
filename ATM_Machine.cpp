#include<iostream>
using namespace std;
int main()
{
 int T;
 cin>>T;
 while(T){
    int N;int K;
    cin>>N>>K;
   //  cout<<N<<endl<<K;
   for (int i = 0; i <N; i++)
   {
      /* code */
      int A;
      cin>>A;
      if (A<=K){
         K-=A;
         cout<<1;
      }
      else{
         cout<<0;
      }
   }
   

    T--;
 cout<<endl;
 }
}