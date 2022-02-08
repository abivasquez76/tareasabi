#include <iostream>

using namespace std;

int main()
{

    int CALCULO = 0 ;
    int PROGRAMACION = 0;
    int PROSESOADMN = 0;
    int FISICA = 0;
    int DERECHOINF = 0;

    cout << "INGRESE LA NOTA DE CALCULO" << endl;
    cin >> CALCULO;
    cout << "INGRESE LA NOTA DE PROGRAMACION" <<endl;
    cin >> PROGRAMACION;
    cout << "INGRESE LA NOTA DE PROCESO ADMINISTRATIVO " << endl;
    cin >> PROSESOADMN;
    cout << "INGRESE LA NOTA DE FISICA" << endl;
    cin >> FISICA ;
    cout << "INGRESE LA NOTA DE DERECHO INFORMATICO" << endl;
    cin >> DERECHOINF;

    cout << "CALCULO 1:"<<endl;
    switch(CALCULO){
    case  100 :
        cout <<"FELICIDADES APROBO EL CURSO DE CALCULO 1 CON 100 PUNTOS" <<endl;
        break;
    default:
        if(CALCULO >= 61){
                cout <<" USTED HA APROBADO EL CURSO" <<endl;
                }else{cout <<" USTED HA REPRADO EL CURSO" <<endl;
                }
    }
     cout << "PROGRAMACION:"<<endl;
    switch(PROGRAMACION){
    case  100 :
         cout <<"FELICIDADES APROBO EL CURSO DE PROGRAMACION CON 100 PUNTOS" <<endl;
        break;
    default:
        if(PROGRAMACION >= 61){
                 cout <<" USTED HA APROBO EL CURSO" <<endl;
                 }else{cout <<" USTED HA REPROBO EL CURSO" <<endl;
                 }
    }
    cout << "PROCESO ADMIN:"<<endl;
    switch(PROSESOADMN){
    case  100 :
         cout <<"FELICIDADES APROBO EL CURSO DE PROCESO ADMIN. CON 100 PUNTOS " <<endl;
        break;
    default:
        if(PROSESOADMN >= 61){
                 cout <<" USTED HA APROBADO EL CURSO" <<endl;
                 }else{cout <<" USTED HA REPROBADO EL CURSO" <<endl;
                 }
    }
    cout << "FISICA 1:"<<endl;
    switch(FISICA){
    case  100 :
         cout <<"FELICIDADES APROBO EL CURSO DE FISICA 1 CON 100 PUNTOS" <<endl;
        break;
    default:
        if(FISICA >= 61){
                 cout <<" USTED HA APROBADO EL CURSO" <<endl;
                 }else{cout <<" USTED HA REPROBADO EL CURSO" <<endl;
                 }
    }
    cout << "DERECHO INFORMATICO :"<<endl;
    switch(DERECHOINF){
    case  100 :
         cout <<"FELICIDADES APROBO EL CURSO DE DERECHO INF. CON 100 PUNTOS" <<endl;
        break;
    default:
        if(DERECHOINF >= 61){
                 cout <<" USTED HA APROBADO EL CURSO" <<endl;
                 }else{cout <<" USTED HA REPROB EL CURSO" <<endl;
                 }
    }
    return 0;
}
