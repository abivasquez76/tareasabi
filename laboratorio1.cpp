#include <iostream>

using namespace std;

int main()
{
    int x,y;
    int suma, resta, multiplicacion, division;

    cout << "introduzca el primer numero" << endl;
    cin >> x;
    cout << "introduzca el segundo numero" << endl;
    cin >> y;

    suma = x+y;
    resta= x-y;
    multiplicacion = x*y;
    division = x/y;

    cout << "el resultado es:" << endl;
    cout << "el resultado de la suma es:" <<suma << endl;
    cout << "el resultado de la resta es:" <<resta << endl;
    cout << "el resultado de la multiplicacion es:" <<multiplicacion << endl;
    cout << "el resultado de la division es:" << division << endl;

    return 0;
}
