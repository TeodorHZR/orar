#ifndef GENERARE_H_INCLUDED
#define GENERARE_H_INCLUDED
#include <algorithm>
#include <cstring>
#include <cctype>
#include "anul1.h"
#include "anul2.h"
#include "anul3.h"
#include "afisareprofesor.h"
using namespace std;
void generare()
{
    int an;
    cout<<"Se genereaza orarul specializarii 'Matematica'"<<endl;
    cout<<"Selectati anul(1/2/3): ";
    cin>>an;

    switch (an){
case 1:
    anul1();
    break;
case 2:
    anul2();
    break;
case 3:
    anul3();
    break;
    }

}


#endif // GENERARE_H_INCLUDED
