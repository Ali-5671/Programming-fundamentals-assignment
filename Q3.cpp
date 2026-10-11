#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,digit,i=0,temp,orignal;
    double sum =0;
    cout<<"enter the number :"<<endl;
    cin>>num;
    orignal = num;
    temp = num;
    while(temp>0){
    i++;
    temp=temp/10;}
    temp=num;

    while(temp>0){
        digit=temp%10;
        sum=sum+ pow(digit,i);
        temp=temp/10;
    }
    if(orignal==sum)
    cout<<"this is amstong number"<<endl;
    else
    cout<<"this is not amstong number"<<endl;
    return 0;
}