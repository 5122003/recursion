#include<iostream>
using namespace std;
void printcounting(int n){
    //base case
    if(n==0){
        return;
    }
    //processing
    cout<<n<<" ";
    printcounting(n-1);
}
int main(){
    int n;
    cout<<"Enter the number of n"<<endl;
    cin>>n;
    printcounting(n);
    cout<<endl;
    return 0;
}
