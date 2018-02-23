#include <iostream>

using namespace std;

int main()
{
    int importe, bruto;
    cout<<"ingrece importe ";
    cin>> importe;

        if(importe>1500)

        {
        bruto=importe*0.16;
        }


      else

        if (importe>1500)

        {
            bruto=importe*0.10;

        }

        cout<<"el importe es:"<<importe - bruto;

    return 0;
}
