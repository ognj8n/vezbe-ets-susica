#include <iostream>
using namespace std;
 
main()
{
    int ocena;
    cout << "Ocena (1 do 5): ";
    cin >> ocena;
    switch(ocena)
    {
	
        case 1: cout << "Nedovoljan" << endl; break;
        case 2: cout << "Dovoljan" << endl; break;
        case 3: cout << "Dobar" << endl; break;
        case 4: cout << "Vrlodobar" << endl; break;
        case 5: cout << "Odlican" << endl; break;
        default: cout << "Greska, moras uneti broj od 1-5.";
        
    }
 
}
