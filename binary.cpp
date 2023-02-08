#include <iostream>
#include<math.h>
using namespace std;
int main(){
    cout<<"enter \n1 for conversion of decimal number system to other base\n2 for other base to decimal number system\n";
    int n=0;
    int num, b, rem, r, oth, rev, sum =0;
    cin>>n;
    if(n ==2){
        cout<<"enter your number\n";
        cin>>num;
        cout<<"enter the base of your given number\n";
        cin>>b;
        for(int i =0; num!= 0; i++){
            r=num%10;
            num =num/10;
            if(r<b && r>=0){
                rev=r*pow(b, i);
                sum = sum + rev;
            }
            else{
                cout<<"INVALID INPUT!!\n";
                break;
            }
        }
        cout<<"result :"<<sum;
    }
     else if(n==1){
        cout<<"enter your number\n";
        int n, d, b;
        int r= 0;
        cin>>n;
        cout<<"enter the base in which you want to change \n";
        cin>>b;
        for(int i = 0; n != 0; i++)
        {
            d=n%b;
            r=(d*pow(10, i))+r;
            n=n/b;
        }
        cout<<"result :"<<r;
    }
    else{
        cout<<"INVALID INPUT!!";
    }
}
