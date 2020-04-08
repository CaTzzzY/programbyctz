#include <iostream>
#include<cmath>
using namespace std;
    int main()
 {
    double x,Y  ;
    cout << " Your example Y=( x + 1 )^3+ 2 * ( x - 2) " << endl;
    cout << " Please, imput x " << endl;
    cin >> x ;
    Y= pow ( ( x + 1) , 3 ) + 2 *( x - 2 ) ;
    cout<< " Your answer : " << Y << endl;
  }
    int iscontine()
   {
char IScontine ;
    cout << " If you wnat set other x typing y or n " ;
    cin >> IScontine;
    if (IScontine == 'y') ;
 do {
        double x,Y  ;
        cout << " Your example Y=( x + 1 )^3+ 2 * ( x - 2) " << endl;
        cout << " Please, imput x " << endl;
        cin >> x ;
        Y= pow ( ( x + 1) , 3 ) + 2 *( x - 2 ) ;
        cout<< " Your answer : " << Y << endl;
        }
    while ( IScontine == 'n');
            return 0;
    }
