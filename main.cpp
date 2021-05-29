#include <iostream>

using namespace std;

int saisirEntier()
{
    int n;
    {
      cout<<"saisir un entier"<<endl;
      cin>>n;
    }while(n<0);

    return n;
}
int PPCM(int a,int b)
{
    int i=1,m=a;
    while(m%b != 0)
    {
        m=m*i;
        i++;
    }
    return m;
}

int pgcd(int a, int b)
{
    int d=a;
    while(a%d !=0 || b%d !=0)
    {
        d--;
    }
    return d;
}

int main()
{
    int a,b,d;
    a=saisirEntier();
    b=saisirEntier();
    d=PPCM(a,b);
    cout<<"le PPCM de "<<a<<" et "<<b<<" est "<<d;
    cout<<"\n\n\n";
    a=saisirEntier();
    b=saisirEntier();
    d=pgcd(a,b);
    cout<<"le PGCD de "<<a<<" et "<<b<<" est "<<d;
}


