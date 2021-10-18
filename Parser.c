#include<stdio.h>
#include "Scanner.h"


#define Casa Roja


void programa

void unidadDeTraduccion(){
    // <unidadDeTraduccion> -> <grupo>
    grupo();
    unidadDeTraduccion();
}

void grupo(){
    Token tok = ProximoToken();
    switch(tok){
        case Comentario:
            comentario();
        case Numeral:
            directiva();
        case Numeral_Ifdef:
            grupoIf();
        case Texto: 
            texto();
        case Fdt:
            fdt();
    }
}

void fdt(){
    
}

void texto(){
    Token tok = ProximoToken();// retorna el próximo token que va a ser correspondido
    switch(tok){
        // <Texto> -> <Identificador>
        case Identificador:
    }

}


void directiva(){
     Token tok = ProximoToken()
     switch(tok){
        case Define:
            Match(Define);          //  invoca al Scanner para obtener el próximo token del flujo de tokens de entrada
            Match(Identficador);
            Match(textoReemplazo);  
            break;
        case Undefine:
            Match(Undefine);
            Match(Identficador);
            Match(textoReemplazo);
        case Include:
            Match()
     }

}

void grupoIf(){
     Token tok = ProximoToken();

            Match(Identificador);//  invoca al Scanner para obtener el próximo token del flujo de tokens de entrada
            Match(NuevaLinea);
            grupo();   
            Match(Numeral_Endif)         
     }

}
