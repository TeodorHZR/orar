#ifndef AFISAREPROFESOR_H_INCLUDED
#define AFISAREPROFESOR_H_INCLUDED
#include <cstring>
using namespace std;
string profesor()
{
    string prof={" "},nume,prenume,var;
    cout<<endl;
    cout<<"Doriti afisarea orarului unui singur profesor? (Da/Nu): ";
    cin>>var;
    transform(var.begin(), var.end(),var.begin(),
              [](unsigned char c)
    {
        return std::tolower(c);
    });
    if(var=="da")
    {
        cout<<"Numele: ";
        cin>>nume;
        cout<<"Prenumele: ";
        cin>>prenume;
        prof=nume + " " + prenume;
        transform(prof.begin(), prof.end(),prof.begin(),
              [](unsigned char c)
    {
        return std::toupper(c);
    });
        return prof;
    }
return prof;

}
#endif // AFISAREPROFESOR_H_INCLUDED
