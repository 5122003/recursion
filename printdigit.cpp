#include<iostream>
#include<vector>
using namespace std;
void printDigits(int n){
    //base case
    cout<<"printing value of n"<<n<<endl;
    if(n==0){
        return ;
    }
}
int main(){
    int n=0647;
    cout<<n<<endl;
    if(n==0){
        cout<<0<<endl;
        printDigits(n);
        vector<int>ans(10,20);
        for(int i=0;i<ans.size(); i++){
            cout<<ans[i]<<endl;
            
        }
    }
}