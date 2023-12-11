#include <iostream>
using namespace std;
 
main() 
{
    float a , b , c, max;  
    cout << "Tri broja ( a,b,c): ";
    cin >> a >> b >> c;     
    max=a;                  
    if (b > max)            
        max = b;          
    if (c > max)            
        max = c;  
		           
    cout << "Najveci je " << max;
  

}
