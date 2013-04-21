//
//  Racional.h
//  somaFracao
//
//  Created by Pedro Loami on 19/04/13.
//  Copyright (c) 2013 Pedro Loami. All rights reserved.
//

#ifndef __somaFracao__Racional__
#define __somaFracao__Racional__


class Racional {
private:
    int denominador;

public:
    int numerador;
    
    Racional(int = 1, int = 1);
    void setRacional(int,int);
    Racional somar       (Racional &);
    Racional diminuir    (Racional &, Racional &);
    Racional multiplicar (Racional &, Racional &);
    Racional dividir     (Racional &, Racional &);
    void     imprimeRacional();
    void     imprimeFlutuante();
    void     simplificar (Racional *);
    int      MDC         (int, int);
};



#endif /* defined(__somaFracao__Racional__) */
