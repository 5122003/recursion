#include<iostream>
using namespace std;
int factorial(int n){
    //base case
    if(n==1)
    return 1;
    //int ans= n*factorial(n-1);
    //return ans;
    int chhotiproblrmAns=factorial(n-1);
    int badiproblem=n*chhotiproblrmAns;
    return badiproblem;
}
int main(){
    int n;
    cout<<"enter the value of number"<<endl;
    cin>>n;
    int ans =factorial(n);
    cout<<"ans is "<<ans<<endl;
    return 0;
}