/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include "result.h"
using namespace std;
int main()
{
    cout<<"-----------CGPA CALCULATOR-----------"<<endl;
    result r;
    int choice;
    do
    {
        cout<<"enter choice:";
        cin>>choice;
        if(choice==1)
        {
          r.read();
          cout<<"___________________________"<<endl;
        }
        else if(choice==2)
        {
            r.show();
            cout<<"___________________________"<<endl;
        }
        else if(choice==3)
        {
            r.semgpa();
            cout<<"___________________________"<<endl;
        }
        else
            cout<<"invalid choice--- please enter correct choice"<<endl;
    }while(choice !=4);
    return 0;
}