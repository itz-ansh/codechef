#include <iostream>
#include <string>
// #include <cctype>

using namespace std;
int check(string c,int n){
    int count=0;
    for (int i=0;i<n;i++){
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'|| c[i]=='u'){
            count++;
        }
    }
    return count;
}

int main()
{
    string s;
    cin>>s;
    int n=s.length()/2;
    
    string fh=s.substr(0,n);
    // fh=tolower(fh);
    string sh=s.substr(n);
    // cout<<fh<<endl;
    // cout<<sh;
    if(check(fh,n)==check(sh,n)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
//  return 0;
}