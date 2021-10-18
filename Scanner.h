#pragma once
typedef enum {
    Comentario, // Estados que devuelven este token: Comentario Linea y Comentario Grande
    Numeral, // '' : Numeral
    Define, // '' : Define 
    Undefine, // '' : Undefine
    Ifdef,  // '' : Ifdef
    Endif,  // '' : Endif
    Include, // '' : Include
    Path,   // '' :
    Identificador, // '' : Identificador
    TextoReemplazo,
    LParen='(',
    RParen=')',
    LBrack='[',
    RBrack=']',
    LBrace='{',
    RBrace='}',
    Punctuator, 
    LexError
} TokenType;

typedef struct{
    TokenType type;
    char* val;
} Token;

// Retorna si pudo leer, almacena en t el token leido.
bool GetNextToken(Token *t /*out*/);