#include <iostream>
#include<math.h>
using namespace std;
int main(){
    cout<<"enter your number\n";
    int n, d;
    int r= 0;
    cin>>n;
    for(int i = 0; n != 0; i++)
    {
        d=n%2;
        r=(d*pow(10, i))+r;
        n=n/2;
    }
    cout<<r;

}