#include<iostream>
#include<vector>
using namespace std;
void printsubsequence(string str,int n,string output,int i,vector<string>&v){
    //base case
    if(i==n){
        v.push_back(output);
        return;
    }
    //include
    printsubsequence(str,n, output+str[i],i+1, v);

    //exclude
    printsubsequence(str,n,output,i+1,v);
}
int main(){
    string str="abcd";
    string output="";
    vector<string>v;
    int i=0;
    int n=str.length();
    printsubsequence(str,n,output,i,v);
    cout<<"printing all subsequnce"<<endl;
    for(auto val: v){
        cout<<val<<" ";

    }
    cout<<endl<<"size of vector is"<<v.size()<<endl;
    return 0;
}
