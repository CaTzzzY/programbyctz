#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x, y;
    char iscontinue;
     do {
        cout << " Your example Y=(x + 1)^3+ 2 * (x - 2) " << endl;
        cout << " Please, input x: ";
        cin >> x;
        y = pow((x + 1), 3 ) + 2 * (x - 2) ;
        cout << " Your answer : " << y << endl;
        cout << "Do you want to retry? y/[n]";
        cin >> iscontinue;
     } while ( iscontinue == 'y');
    return 0;
}
