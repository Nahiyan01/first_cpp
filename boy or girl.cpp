#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    if(str.size() % 2 != 0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}