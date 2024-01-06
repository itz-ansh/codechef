#include<iostream>
using namespace std;
int main()
{
 int T;
 cin>>T;
 while(T){
    int DSA1;int TOC1;int TDM1;
    int DSA2;int TOC2;int TDM2;
    cin>>DSA1>>TOC1>>TDM1;
    cin>>DSA2>>TOC2>>TDM2;

    int total_DRAGON=DSA1+TOC1+TDM1;
    // cout<<total_DRAGON<<endl;
    int total_SLOTH=DSA2+TOC2+TDM2;
    // cout<<total_SLOTH<<endl;

    if (total_DRAGON>total_SLOTH)
    {
        cout<<"DRAGON"<<endl;
    }
    else if(total_SLOTH>total_DRAGON){
        cout<<"SLOTH"<<endl;
    }
    else if(DSA1>DSA2){
        cout<<"DRAGON"<<endl;
    }
    else if(DSA2>DSA1){
        cout<<"SLOTH"<<endl;
    }
    else if(TOC1>TOC2){
        cout<<"DRAGON"<<endl;
    }
    else if(TOC2>TOC1){
        cout<<"SLOTH"<<endl;
    }
    else if(TDM1>TDM2){
        cout<<"DRAGON"<<endl;
    }
    else if(TDM2>TDM1){
        cout<<"SLOTH"<<endl;
    }
  
    else{
        cout<<"TIE"<<endl;
    }
    

    T--;
 }
}