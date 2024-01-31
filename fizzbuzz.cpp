#include<iostream>
#include <vector>
using namespace std;
int main()
{
    int n=16;
    vector <string> ans;
    for (int i = 1; i < n; i++)
    {
  
        if (i%5==0 && i%3==0){
            ans.push_back("FizzBuzz");
            continue;
        }
        else if (i%3==0){
            ans.push_back("Fizz");
            continue;
            
        }   
       else if (i%5==0){
            ans.push_back("Buzz");
            continue;
            
        }
        else
        {
            ans.push_back(to_string(i));
            
        }
        

    }
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
 return 0;
}