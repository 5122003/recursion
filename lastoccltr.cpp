#include<iostream>
using namespace std;
void lastoccltr(string& s,char c,int i,int& ans){
    //base case
    if(i>=s.size()){
        return;
    }
    //ek case ka solution
    if(s[i]==c){
        ans=i;
    }
    lastoccltr(s,c,i+1,ans);
    
}
int main(){
    string s;
    cin>>s;
    char c;
    cin>>c;
    int ans=-1;
    lastoccltr(s,c,0,ans);
    cout<<ans<<endl;
}