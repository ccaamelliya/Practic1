#include <iostream>
using namespace std;
int main(){
    int a, b;
    int c;
    cout<<"Enter Numbers"<<endl;
    cin>>a;
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"Result"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}