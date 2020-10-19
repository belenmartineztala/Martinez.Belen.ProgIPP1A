#include <stdio.h>
#include <stdlib.h>

int main()
{
   int aplicarDescuento(int producto)
{
    int descuento;
    descuento = 0.05;
    producto = producto - (producto*descuento);
    return producto;
}


}
