#include<iostream>
using namespace std;
int main(){
    int n, slast, first;
    cin>>n;
    n=n/10;
    slast= n%10;
    first= n/1000;
    int sum= slast + first;
    cout<<first<<" + "<<slast<<" = "<<sum;
    return 0;


}