#ifndef ANUL2_H_INCLUDED
#define ANUL2_H_INCLUDED
#include <cstring>
#include <iomanip>
#include <fstream>
#include "afisareprofesor.h"
using namespace std;
void anul2()
{
    ofstream g("orar.out");
    ofstream p("orarp.out");
    int i,ok=1,l=0;
    string prof={" "};
    string Timp[5] = { "8-10","10-12","12-2","2-4","4-6" };
    string s[5];
    string orar[4]= { "Zi","Ora","Materie","Profesor"};
    string Zi[5] = { "Luni","Marti","Miercuri","Joi","Vineri"};
    string Materii[9]= { "Limba franceza 1","Analiza matematica III","Teoria Masurii","Limba engleza","Ec. dif. si ec. cu deriv. partiale","Software matematic","Analiza complexa","Pedagogie II","Educatie fizica"};
    string Profesori[9]= { "IVAN MIRELA","STANESCU NICOLAE","NUICA ANTONIO","MOISE ANDREEA","GEORGESCU RALUCA","DEACONU LAURENTIU","COSTEA SERBAN","APETROAIEI ANA","ENACHE SEBASTIAN"};
    while(ok){
             if(prof != " ")
    {
        for(i=0; i<4; i++)
            p<<setw(33)<<left<<orar[i]<<"\t";
        p<<endl;
    }
    else{
    for(i=0; i<4; i++)
        g<<setw(33)<<left<<orar[i]<<"\t";
    g<<endl;}


    int ag=0;
    int k=0;
    while(k<=4) /** LUNI */
    {
        i=0;
        if(k==0)
            s[i++]=Zi[ag++];
        else s[i++]=" ";
        s[i++]=Timp[k];
        switch (k){
        case 1:
        {
            s[i++]=Materii[0];
            s[i++]=Profesori[0];
            break;
        }
        case 2:
        {
            s[i++]=Materii[1];
            s[i++]=Profesori[1];
            break;
        }
        case 3:
            case 4:
        {
            s[i++]=Materii[2];
            s[i++]=Profesori[2];
            break;
        }}
        while(i<5)s[i++]=" ";
        k++;
        if(prof != " " && prof==s[3])
        {if(s[0]==" "){
                s[0]=Zi[--ag];
                ag++;}
            for(i=0; i<4; i++)
                p<<setw(33)<<left<<s[i]<<"\t";
            p<<endl;
        }
        else {
        for(i=0; i<4; i++)
            g<<setw(33)<<left<<s[i]<<"\t";
        g<<endl;
        }
    }
    k=0;
    while(k<=4) /** MARTI */
    {
        i=0;
        if(k==0)
            s[i++]=Zi[ag++];
        else s[i++]=" ";
        s[i++]=Timp[k];
        if(k==4)
        {
            s[i++]=Materii[3];
            s[i++]=Profesori[3];
        }
        else while(i<5)s[i++]=" ";
        k++;
        if(prof != " " && prof==s[3])
        {if(s[0]==" "){
                s[0]=Zi[--ag];
                ag++;}
            for(i=0; i<4; i++)
                p<<setw(33)<<left<<s[i]<<"\t";
            p<<endl;
        }
        else {
        for(i=0; i<4; i++)
            g<<setw(33)<<left<<s[i]<<"\t";
        g<<endl;
        }
    }
    k=0;
    while(k<=4) /** MIERCURI */
    {
        i=0;
        if(k==0)
            s[i++]=Zi[ag++];
        else s[i++]=" ";
        s[i++]=Timp[k];
        switch (k){
    case 1:
        case 2:
        {
            s[i++]=Materii[4];
            s[i++]=Profesori[4];
            break;
        }
        case 3:
            case 4:
        {
            s[i++]=Materii[5];
            s[i++]=Profesori[5];
            break;
        }}
         while(i<5)s[i++]=" ";
        k++;
        if(prof != " " && prof==s[3])
        {if(s[0]==" "){
                s[0]=Zi[--ag];
                ag++;}
            for(i=0; i<4; i++)
                p<<setw(33)<<left<<s[i]<<"\t";
            p<<endl;
        }
        else {
        for(i=0; i<4; i++)
            g<<setw(33)<<left<<s[i]<<"\t";
        g<<endl;
        }
    }
    k=0;
    while(k<=4) /** JOI */
    {
        i=0;
        if(k==0)
            s[i++]=Zi[ag++];
        else s[i++]=" ";
        s[i++]=Timp[k];
        switch (k){
        case 0:
        {
            s[i++]=Materii[4];
            s[i++]=Profesori[4];
            break;
        }
        case 1:
            case 2:
        {
            s[i++]=Materii[6];
            s[i++]=Profesori[6];
            break;
        }
        case 3:
        {
            s[i++]=Materii[7];
            s[i++]=Profesori[7];
            break;
        }}
            while(i<5)s[i++]=" ";
        k++;
        if(prof != " " && prof==s[3])
        {if(s[0]==" "){
                s[0]=Zi[--ag];
                ag++;}
            for(i=0; i<4; i++)
                p<<setw(33)<<left<<s[i]<<"\t";
            p<<endl;
        }
        else {
        for(i=0; i<4; i++)
            g<<setw(33)<<left<<s[i]<<"\t";
        g<<endl;
        }
    }
    k=0;
    while(k<=4) /** VINERI */
    {
        i=0;
        if(k==0)
            s[i++]=Zi[ag++];
        else s[i++]=" ";
        s[i++]=Timp[k];
        switch (k){
        case 2:
        {
            s[i++]=Materii[1];
            s[i++]=Profesori[1];
            break;
        }
        case 3:
        {
            s[i++]=Materii[8];
            s[i++]=Profesori[8];
            break;
        }
        case 4:
        {
            s[i++]=Materii[7];
            s[i++]=Profesori[7];
            break;
        }}
         while(i<5)s[i++]=" ";
        k++;
        if(prof != " " && prof==s[3])
        {if(s[0]==" "){
                s[0]=Zi[--ag];
                ag++;}
            for(i=0; i<4; i++)
                p<<setw(33)<<left<<s[i]<<"\t";
            p<<endl;
        }
        else {
        for(i=0; i<4; i++)
            g<<setw(33)<<left<<s[i]<<"\t";
        g<<endl;
        }
    }
    l++;
    if(l==1){
  prof=profesor();
  if(prof==" ")
  ok=0;}
  else ok=0;
    }
}

#endif // ANUL2_H_INCLUDED
