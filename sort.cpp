#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int n=8;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    //{ 3 , 2 , 4 , 5, 11, 0, 8, 33 }

    for (int i=0;i<n;i++){
        int mini=arr[i];
        for (int j=1;j<n;j++){

                if(mini>arr[j]){
                    mini=arr[j];
                }


        }
        
    }

 return 0;
}