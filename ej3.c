#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int PH=0, P=0, PPH=0, PPM=0;

    void PorcentajePostulantes()
    {
        printf ("Ingrese el numero de postulantes hombres: ");
        scanf ("%d",&PH);
        printf ("Ingrese el numero de postulantes totales: ");
        scanf ("%d",&P);

        system ("cls");

        PPH = PH*100/P;
        PPM = 100 - PPH;

        printf ("El porcentaje de hombres postulantes es de: \n%d\ny el porcentaje de mujeres postulantes es de: \n%d", PPH, PPM);
    }
    PorcentajePostulantes();
    return 0;
}
