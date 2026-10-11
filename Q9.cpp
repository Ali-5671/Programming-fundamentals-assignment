#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    cout<<"enter the number for power  of two"<<endl;
    cin>>num;
    if(num>0&&(num&(num-1))==0){
        cout<<"True it its the power of two"<<endl;
    }
    else{
        cout<<"False its not the power of two"<<endl;
    }
    cout<<"Enter the number for digital root"<<endl;
    cin>>num;
    if(num<0){
    num =-num;
}
    if(num==0)
    {
        cout<<"DIGITAL ROOT = 0"<<endl;

    }
    else{
        cout<<"DIGITAL ROOT :"<<1 + (num  - 1) % 9 << endl;
    }
    cout<<"enter the numbeer of stones"<<endl;
    cin>>num;
    if(num%4==0){
    cout<<"You will lose"<<endl;
    }
    else{
        cout<<"You will win"<<endl;
    }
    return 0;
}