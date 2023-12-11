#include <iostream>
using namespace std;
 
main()
{
    float a, b, max;          
 
    cout <<"Unesite brojeve a i b: ";
    cin >> a >> b;
    if (a > b)                
        max = a;               
    else                      
        max = b;               
    cout << "Najveci od 2 uneta broja je: " <<  max;
}
 
