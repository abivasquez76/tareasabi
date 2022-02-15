#include <iostream>

using namespace std;


  int lsuma(int num1,int num2)
{
    return num1 + num2;
}
int lresta(int num1,int num2)
{
    return num1 - num2;
}
int lmultiplicacion(int num1,int num2)
{
    return num1 * num2;
}
int ldivision(int num1,int num2)
{
    return num1 / num2;
}
int main()
{

    int num1,num2;

    int sum,rest,mult,div;

    cout <<"Ingrese el primer numero"<<endl;
    cin >> num1;
    cout <<"Ingrese el segundo numero"<<endl;
    cin >> num2;


    sum = lsuma(num1,num2);
     cout <<"  El resultado de la suma es :"<< sum <<endl;

    rest = lresta(num1,num2);
     cout <<"  El resultado de la resta es :"<< rest <<endl;

    mult = lmultiplicacion(num1,num2);
     cout <<"  El resultado de la multiplicacion es :"<< mult <<endl;

    div = ldivision(num1,num2);
     cout <<"  El resultado de la division es :"<< div <<endl;

     return 0;

     }


