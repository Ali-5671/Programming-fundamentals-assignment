#include <iostream>
using namespace std;
int main() {
     float water = 0.40;
     float milk = 0.90;
     float lemonade = 0.25;
     int choice;
     double cash;
     double return_cash;
     double reduce;
     cout<<"What do you want: "<<endl<<"1. water = 0.40$"<<endl<<"2. milk = 0.90$"<<endl<<"3. lemonade = 0.25"<<endl;
     cout<<"ENTER YOUR CHOICE"<<endl;
     cin>>choice;
     cout<<"enter cash";
     cin>>cash;
     switch(choice) {
        case 1: 
            if(cash == water || cash > water) {
               cout<<"Here is your water bottle"<<endl;
                return_cash = cash - water;
                cout<<"return is "<<return_cash;
            } else {
                 reduce = water - cash;
                cout<<reduce<<"$ more cash needed";
                
            }
           break; 
        case 2: 
         if(cash == milk || cash > milk) {
               cout<<"Here is your milk bottle"<<endl;
                return_cash = cash - milk;
                cout<<"return is "<<return_cash<<"$";
            } else {
                 reduce = milk - cash;
                cout<<reduce<<"$ more cash needed";
                
            }
            break;
        case 3: 
         if(cash == lemonade || cash > lemonade) {
               cout<<"Here is your lemonade bottle"<<endl;
                return_cash = cash - lemonade;
                cout<<"return is "<<return_cash<<"$";
            } else {
                 reduce = lemonade - cash;
                cout<<reduce<<"$ more cash needed";
                        }
            break;        

        default: 
           cout<<"item unavailable";    

     }  
}