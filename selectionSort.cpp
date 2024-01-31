#include<iostream>
#include <vector>
using namespace std;
int main()
{
     vector<int> arr={5,-11,4,56,0,11,22,-4};
     int n=arr.size();
     for (int i = 0; i < n-1; i++)
     {
        int maxi=i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]>arr[maxi]){
                maxi=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[maxi];
        arr[maxi]=temp;
          
     }
     for (int i = 0; i < n; i++)
     {
        cout<<arr[i]<<" ";
     }
     
     
}



//CALL PAPA FOR MOMO

