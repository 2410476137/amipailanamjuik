#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
          reverse(s.begin(),s.end());
          if(s.size()>=3){
        for(int i=0;i<s.size()-2;i++){
            if(s[i]=='F'&&s[i+1]=='F'&&s[i+2]=='T'){
                char a=s[i+2];
                s[i+2]=s[i+1];
                s[i+1]=a;
            }
            else if(s[i]=='N'&&s[i+1]=='T'&&s[i+2]=='T'){
                 char b=s[i+1];
                s[i+1]=s[i];
                s[i]=b;
            }
        }
    }
       
         sort(s.begin(),s.end());
          reverse(s.begin(),s.end());

        cout<<s<<endl;
    
}
}