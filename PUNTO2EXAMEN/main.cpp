#include <iostream>

using namespace std;

int main()
{
    int A, B, C, MULTIPLICACION=C;
    cout<<"digite primer numero";
    cin>> A;
    cout<<"digite segundo numero";
    cin>> B;
    cout<<"digite tercer numero";
    cin>> C;
    MULTIPLICACION = A*B;

    cout<<"LA MULTIPLICACION ES:"<<MULTIPLICACION;
    if (A * B ==C){
        cout<<"CUMPLE";
    }
else{cout<<"NO CUMPLE";}
    return 0;
}
