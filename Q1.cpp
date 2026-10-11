#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    const double alpha = 1.234;
    const double beta = 3.34;
    double x, result;
    cout<<"enter the value for x"<<endl;
    cin>>x;
    result=sqrt(alpha*pow(x,3.0/2.0)*(pow(x,2)-1))/(sqrt(beta*x-2)+sqrt(beta*x-1));
    cout<<"the result is :"<<result<<endl;
    return 0;
}