#include "ClaseGanso.h"
#include "ClaseGallina.h"
#include "ClasePato.h"
#include <iostream>
using namespace std;

int main(){
    ClaseGanso ganso1=ClaseGanso("Blanco","Pequeño");
    ClasePato pato1=ClasePato("No_Vuela","Pequeño");
    ClaseGallina gallina1=ClaseGallina("Brahma", 4.25);
    ganso1.mostrarGanso();
    pato1.mostrarPato();
    gallina1.mostrarGallina();

    return 0;
}