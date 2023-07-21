#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int last,first, middle;
    last=n%10;
    n/=10;
    middle = n%10;
    n/=10;
    first = n%10;
    int sum = first + middle + last;
    cout<<sum;
    return 0;
}