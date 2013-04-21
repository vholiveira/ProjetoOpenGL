//
//  main.cpp
//  somaFracao
//
//  Created by Bianca Lodoli on 19/04/13.
//  Copyright (c) 2013 Bianca Lodoli. All rights reserved.
//

#include <iostream>
#include "Racional.h"

using namespace std;

int main(int argc, const char * argv[])
{
    Racional Obj1,Obj2,Obj3;
    Obj1.setRacional(5, 10);
    Obj1.imprimeRacional();
    cout<<endl;
    cout<<endl;
    cout<<Obj1.MDC(18, 81);
    cout<<endl;
    Obj1.imprimeRacional();
    cout<<endl;
    Obj2.imprimeRacional();
    return 0;
}

