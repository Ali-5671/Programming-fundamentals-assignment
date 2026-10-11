#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int choice;
    while(choice != 4){
    srand(time(0));
    cout<<"1. Play Higher or Lower"<<endl;
    cout<<"2. Play Paper - Scissors - Rock"<<endl;
    cout<<"3. Guess the numbers"<<endl;
    cout<<"4. Quit"<<endl<<endl;
    cout<<"Enter your choice(1-4) ";
    cin>>choice;
   
    switch(choice) {
      case 1:  {
          
          int num1 = rand() % 20 +1;
          int num2 = rand() % 20 +1;
          char guess;
          cout<<"First number is "<<num1<<endl;
          cout<<"Enter Higher or Lower ";
          cin>>guess;
          cout<<"Second number is "<<num2<<endl;
          if(num2 > num1 && guess == 'H') { 
            cout<<"Correct. You Win";
            } 
          else if(num2< num1 && guess == 'L') {
                cout<<"Correct. You Win";
            } 
          else {
            cout<<"Wrong. You Lose";
           }
           break;
         }
      case 2: {
           
           int comp = rand() % 3 + 1;
           char user_choice;
           cout<<"Enter P for Paper, S for Scissors, R for Rocks ";
           cin>>user_choice;
           if(comp == 1) {
            cout<<"Paper";
           }else if(comp == 2) {
            cout<<"Scissors";
           } else {
            cout<<"Rocks";
           }
           if(user_choice == 'P' && comp == 1) {
              cout<<"Its a tie";
           } else if(user_choice == 'S' && comp == 2) {
              cout<<"its a tie";
           } else if (user_choice == 'R' && comp == 3) {
              cout<<"its a tie";
           }
              else if(user_choice == 'P'&& comp == 3) {
                cout<<"You Win";
             } else if(user_choice == 'S'&& comp == 1) {
                cout<<"You Win";
             } else if(user_choice == 'R'&& comp == 2) {
                cout<<"You Win";
             }
            
             else if(user_choice == 'P' && comp == 2) {
                cout<<"Computer Wins";
             } else if(user_choice == 'S' && comp == 3) {
                cout<<"Computer Wins";
             } else if(user_choice == 'R' && comp == 1) {
                cout<<"Computer Wins";
             } else {
                cout<<"invalid";
             }
             break;
            }

      case 3:
        {
            srand(time(0));
            int n1=rand() % 10;
            int n2=rand() % 10;
            int n3=rand() % 10;

            int match = 0;
            int numb1,numb2,numb3;

            cout<<"enter First number: ";
            cin>>numb1;
            cout<<"enter Second number: ";
            cin>>numb2;
            cout<<"enter Third number: ";
            cin>>numb3;

            cout<<"random numbers : " <<n1 <<n2 <<n3 <<endl;

         if (numb1 == n1 && numb2 == n2 && numb3 == n3)

            {
                cout << "Three matching (exact order)!";
            }

         else if (

              (numb1 == n1 || numb1 == n2 || numb1 == n3) &&
              (numb2 == n1 || numb2 == n2 || numb2 == n3) &&
              (numb3 == n1 || numb3 == n2 || numb3 == n3))
            {
              cout << "Three matching (not in order)!";
            }
         else {
              if(numb1 == n1 || numb1 == n2 || numb1 == n3)
               {
                  match = match + 1;
               } 
               if(numb2 == n1 || numb2 == n2 || numb2 == n3) 
               {
                  match = match + 1;
               }
              if(numb3 == n1 || numb3 == n2 || numb3 == n3) 
               {
                  match = match + 1;
               }
               if(match == 0) 
               {
                  cout<<"no match";
               }
               else if (match == 1) 
               {
               } 
               else 
               {
                 cout<<" Two matches";
               } 
            }
            break;
         }   
   
               
            }
         }
         cout<<"Thanks for playing"<<endl;
            return 0;
         }