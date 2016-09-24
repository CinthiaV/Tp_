typedef struct
{

    char nombre[50];
    int dni;
    int edad;
    int status;

}ePersona;


void inicializarArrayPersona(ePersona ArrayPersona[], int Cant_Personas);
int obtenerEspacioLibre(ePersona lista[],int Cant_Personas);
void mostrarOrdenado(ePersona ArrayPersona[],int Cant_Personas);
int buscarPorDni(ePersona lista[],int dni);
void mostrarGrafico(ePersona ArrayPersona[],int Cant_Personas);





