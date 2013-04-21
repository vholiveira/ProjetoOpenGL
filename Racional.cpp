//
//  Racional.cpp
//  somaFracao
//
//  Created by Pedro Loami on 19/04/13.
//  Copyright (c) 2013 Pedro Loami. All rights reserved.
//

#include <cmath>
#include <iostream>
#include "Racional.h"

using namespace std;

Racional::Racional(int num, int den){
    setRacional(num, den);
}
void Racional::setRacional(int num, int den){
    if(den==0){
        std::cout<<"ERRO! O DENOMINADOR NAO PODE SER 0. SERÁ AJUSTADO AUTOMATICAMENTE PARA 1!\n";
        numerador=num;
        denominador=den;
    }
    else{
        numerador=num/MDC(num,den);
        denominador=den/MDC(num,den);
    }
}
Racional Racional::somar       (Racional &_r){
    numerador=(_r.numerador)*denominador + numerador*(_r.denominador);
    denominador=denominador*_r.denominador;
    simplificar(this);
    return *this;
}
Racional Racional::diminuir    (Racional &a, Racional &b){
    Racional r;
    r.numerador=a.numerador*b.denominador-b.numerador*a.denominador;
    r.denominador=a.denominador*b.denominador;
    simplificar(&r);
    return r;
}
Racional Racional::multiplicar (Racional &a, Racional &b){
    Racional r;
    r.numerador=a.numerador*b.numerador;
    r.denominador=a.denominador*b.denominador;
    simplificar(&r);
    return r;
}
Racional Racional::dividir     (Racional &a, Racional &b){
    Racional r;
    if (b.numerador==0) {
        std::cout << "Erro, divisão por zero.";
        return r;
        }
    r.numerador=a.numerador*b.denominador;
    r.denominador=a.denominador*b.numerador;
    simplificar(&r);
    return r;
}
void     Racional::simplificar (Racional *r){
    int m=MDC(r->numerador, r->denominador);
    r->denominador/=m;
    r->numerador/=m;
}
int Racional::MDC (int a, int b){
    int _a, _b;
    if (abs(a)>abs(b)) {_a=a; _b=b;} else {_a=b; _b=a;}
    if (_b==0) return a;
    return(( _a%_b==0 )? _b : MDC(_b, _a%_b));
}
void Racional::imprimeRacional(){
    if (denominador==1)cout<<numerador;
    else
        cout<<numerador<<"/"<<denominador;//endl;
}
void Racional::imprimeFlutuante(){
    cout<<(float)numerador/denominador;
}
