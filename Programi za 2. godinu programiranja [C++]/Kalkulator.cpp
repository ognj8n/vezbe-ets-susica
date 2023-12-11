#include <iostream>
using namespace std;

main()
{
    double a,b,c;
    char op;
 
    cout<<"KALKULATOR";
    cout << "Prvi broj:"; cin>>a;
    cout << "Operacija:"; cin>>op;
    cout << "Drugi broj:"; cin>>b;
 
    switch(op)
    {
    case '+':
        c=a+b;
        cout << c;
        break;
 
    case '-':
        c=a-b;
        cout << c;
        break;
 
    case '*':
        c=a*b;
        cout << c;
        break;
 
    case '/':
        c=a/b;
        cout << c;
        break;
    default:
        cout << "Greska";
    }
}
