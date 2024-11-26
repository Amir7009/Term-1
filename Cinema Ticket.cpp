#include <iostream>
using namespace std;

int main( ){
int age;
string A;
cout << "please enter your age: ";
cin >> age;
if ( age<12 ){
    cout << "you must pay -10- Tomans.";
	return 0;
    }
else if ( age<18 ){
         cout << "Are you a customer club member? (yes/no)  ";
         cin >> A;
         if ( A=="yes" ){
             cout << "you must pay -12- Tomans.";
             return 0;
         }
         else
             cout << "you must pay -15- Tomans.";
             return 0;
     }
     else if ( age<=60 ){
              cout << "Are you a customer club member? (yes/no)  ";
              cin >> A;
              if ( A=="yes" ){
                  cout << "you must pay -20- Tomans.";
                  return 0;
              }
              else
                  cout << "you must pay -25- Tomans.";
                  return 0;
          }
          else
              cout << "you must pay -10- Tomans.";
              return 0;
}
