#include<iostream>
using namespace std;
void factorial(int n){
    int count=1;
    for(int i=n;i>=1;i--){
        count = count * i;
        cout<<count<<endl;
    }
    
} 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        factorial(n);
    }
    return 01;
}