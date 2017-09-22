/*********** Librerias utilizadas **************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

/************* Definiciones ********************/
#define TAMBUFF 5
#define TAMCMLEX 50
#define TAMLEX 50
#define TAMHASH 101

/************* Estructuras ********************/
// Campos de la entrada.
typedef struct entrada{
    char compLex[TAMCMLEX];
    char lexema[TAMLEX];	
} entrada;

// Estructura del token.
typedef struct {
    char compLex[50];
    entrada *pe;
} token;

/************* Prototipos ********************/
void insertar(entrada e);
entrada* buscar(const char *clave);
void initTabla();
void initTablaSimbolos();
void sigLex();
