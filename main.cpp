#include <iostream>

#define _MATLAB_ "matlab -nodesktop -nosplash -r \'untitled, exit\'"

using namespace std;
int op;
int opRecta1;
int DosRectasR1ImplicitaA, DosRectasR1ImplicitaB, DosRectasR1ImplicitaC, DosRectasR1ImplicitaD;
int DosRectasR1ParametricasX0, DosRectasR1ParametricasY0, DosRectasR1ParametricasZ0;
int DosRectasR1ParametricasU1, DosRectasR1ParametricasU2, DosRectasR1ParametricasU3;
int DosRectasR1VectorialesX0, DosRectasR1VectorialesY0, DosRectasR1VectorialesZ0;
int DosRectasR1VectorialesU1, DosRectasR1VectorialesU2, DosRectasR1VectorialesU3;
int DosRectasR1ContinuasX0, DosRectasR1ContinuasY0, DosRectasR1ContinuasZ0;
int DosRectasR1ContinuasU1, DosRectasR1ContinuasU2, DosRectasR1ContinuasU3;
int opRecta2;
int DosRectasR2ImplicitaA, DosRectasR2ImplicitaB, DosRectasR2ImplicitaC, DosRectasR2ImplicitaD;
int DosRectasR2ParametricasX0, DosRectasR2ParametricasY0, DosRectasR2ParametricasZ0;
int DosRectasR2ParametricasU1, DosRectasR2ParametricasU2, DosRectasR2ParametricasU3;
int DosRectasR2VectorialesX0, DosRectasR2VectorialesY0, DosRectasR2VectorialesZ0;
int DosRectasR2VectorialesU1, DosRectasR2VectorialesU2, DosRectasR2VectorialesU3;
int DosRectasR2ContinuasX0, DosRectasR2ContinuasY0, DosRectasR2ContinuasZ0;
int DosRectasR2ContinuasU1, DosRectasR2ContinuasU2, DosRectasR2ContinuasU3;

int opRectaConPlanoRecta1;
int RectaConPlanoR1ImplicitaA, RectaConPlanoR1ImplicitaB, RectaConPlanoR1ImplicitaC, RectaConPlanoR1ImplicitaD;
int RectaConPlanoR1ParametricaX0, RectaConPLanoR1ParametricaY0, RectaConPLanoR1ParametricaZ0;
int RectaConPlanoR1ParametricaU1, RectaConPLanoR1ParametricaU2, RectaConPLanoR1ParametricaU3;
int RectaConPlanoR1VectorialX0, RectaConPlanoR1VectorialY0, RectaConPlanoR1VectorialZ0;
int RectaConPlanoR1VectorialU1, RectaConPlanoR1VectorialU2, RectaConPlanoR1VectorialU3;
int RectaConPlanoR1ContinuaX0, RectaConPlanoR1ContinuaY0, RectaConPlanoR1ContinuaZ0;
int RectaConPlanoR1ContinuaU1, RectaConPlanoR1ContinuaU2, RectaConPlanoR1ContinuaU3;
int opRectaConPlanoPlano1;
int RectaConPlanoP1ImplicitaA, RectaConPlanoP1ImplicitaB, RectaConPlanoP1ImplicitaC, RectaConPlanoP1ImplicitaD;
int RectaConPlanoP1ParametricaX0, RectaConPLanoP1ParametricaY0, RectaConPLanoP1ParametricaZ0;
int RectaConPlanoP1ParametricaU1, RectaConPLanoP1ParametricaU2, RectaConPLanoP1ParametricaU3;
int RectaConPlanoP1VectorialX0, RectaConPlanoP1VectorialY0, RectaConPlanoP1VectorialZ0;
int RectaConPlanoP1VectorialU1, RectaConPlanoP1VectorialU2, RectaConPlanoP1VectorialU3;
int RectaConPlanoP1ContinuaX0, RectaConPlanoP1ContinuaY0, RectaConPlanoP1ContinuaZ0;
int RectaConPlanoP1ContinuaU1, RectaConPlanoP1ContinuaU2, RectaConPlanoP1ContinuaU3;

int opPlanoConPLanoPlano1;
int PlanoConPlanoP1ImplicitaA, PlanoConPlanoP1ImplicitaB, PlanoConPlanoP1ImplicitaC, PlanoConPlanoP1ImplicitaD;
int PlanoConPlanoP1ParametricaX0, PlanoConPlanoP1ParametricaY0, PlanoConPlanoP1ParametricaZ0;
int PlanoConPlanoP1ParametricaU1, PlanoConPlanoP1ParametricaU2, PlanoConPlanoP1ParametricaU3;
int PlanoConPlanoP1VectorialX0, PlanoConPlanoP1VectorialY0, PlanoConPlanoP1VectorialZ0;
int PlanoConPlanoP1VectorialU1, PlanoConPlanoP1VectorialU2, PlanoConPlanoP1VectorialU3;
int PlanoConPlanoP1ContinuaX0, PlanoConPlanoP1ContinuaY0, PlanoConPlanoP1ContinuaZ0;
int PlanoConPlanoP1ContinuaU1, PlanoConPlanoP1ContinuaU2, PlanoConPlanoP1ContinuaU3;
int opPlanoConPLanoPlano2;
int PlanoConPlanoP2ImplicitaA, PlanoConPlanoP2ImplicitaB, PlanoConPlanoP2ImplicitaC, PlanoConPlanoP2ImplicitaD;
int PlanoConPlanoP2ParametricaX0, PlanoConPlanoP2ParametricaY0, PlanoConPlanoP2ParametricaZ0;
int PlanoConPlanoP2ParametricaU1, PlanoConPlanoP2ParametricaU2, PlanoConPlanoP2ParametricaU3;
int PlanoConPlanoP2VectorialX0, PlanoConPlanoP2VectorialY0, PlanoConPlanoP2VectorialZ0;
int PlanoConPlanoP2VectorialU1, PlanoConPlanoP2VectorialU2, PlanoConPlanoP2VectorialU3;
int PlanoConPlanoP2ContinuaX0, PlanoConPlanoP2ContinuaY0, PlanoConPlanoP2ContinuaZ0;
int PlanoConPlanoP2ContinuaU1, PlanoConPlanoP2ContinuaU2, PlanoConPlanoP2ContinuaU3;

int opTresPlanosPlano1;
int TresPlanosP1ImplicitaA, TresPlanosP1ImplicitaB, TresPlanosP1ImplicitaC, TresPlanosP1ImplicitaD;
int TresPlanosP1ParametricaX0, TresPlanosP1ParametricaY0,TresPlanosP1ParametricaZ0;
int TresPlanosP1ParametricaU1, TresPlanosP1ParametricaU2, TresPlanosP1ParametricaU3;
int TresPlanosP1VectorialX0, TresPlanosP1VectorialY0, TresPlanosP1VectorialZ0;
int TresPlanosP1VectorialU1, TresPlanosP1VectorialU2, TresPlanosP1VectorialU3;
int TresPlanosP1ContinuaX0, TresPlanosP1ContinuaY0, TresPlanosP1ContinuaZ0;
int TresPlanosP1ContinuaU1, TresPlanosP1ContinuaU2, TresPlanosP1ContinuaU3;
int opTresPlanosPlano2;
int TresPlanosP2ImplicitaA, TresPlanosP2ImplicitaB, TresPlanosP2ImplicitaC, TresPlanosP2ImplicitaD;
int TresPlanosP2ParametricaX0, TresPlanosP2ParametricaY0,TresPlanosP2ParametricaZ0;
int TresPlanosP2ParametricaU1, TresPlanosP2ParametricaU2, TresPlanosP2ParametricaU3;
int TresPlanosP2VectorialX0, TresPlanosP2VectorialY0, TresPlanosP2VectorialZ0;
int TresPlanosP2VectorialU1, TresPlanosP2VectorialU2, TresPlanosP2VectorialU3;
int TresPlanosP2ContinuaX0, TresPlanosP2ContinuaY0, TresPlanosP2ContinuaZ0;
int TresPlanosP2ContinuaU1, TresPlanosP2ContinuaU2, TresPlanosP2ContinuaU3;
int opTresPlanosPlano3;
int TresPlanosP3ImplicitaA, TresPlanosP3ImplicitaB, TresPlanosP3ImplicitaC, TresPlanosP3ImplicitaD;
int TresPlanosP3ParametricaX0, TresPlanosP3ParametricaY0,TresPlanosP3ParametricaZ0;
int TresPlanosP3ParametricaU1, TresPlanosP3ParametricaU2, TresPlanosP3ParametricaU3;
int TresPlanosP3VectorialX0, TresPlanosP3VectorialY0, TresPlanosP3VectorialZ0;
int TresPlanosP3VectorialU1, TresPlanosP3VectorialU2, TresPlanosP3VectorialU3;
int TresPlanosP3ContinuaX0, TresPlanosP3ContinuaY0, TresPlanosP3ContinuaZ0;
int TresPlanosP3ContinuaU1, TresPlanosP3ContinuaU2, TresPlanosP3ContinuaU3;


int main() {
    system(_MATLAB_);
    cout << "\t\t_________________________" << endl;
    cout << "\t\t                                                                    " << endl;
    cout << "\t\t UNIVERSIDAD EUROPEA - ESCUELA DE ARQUITECTURA, INGENIERIA Y DISEÑO" << endl;
    cout << "\t\t_________________________" << endl << endl;
    cout << "\t\tProf.:Christian Sucuzhanay.                  Alumnos: Daniel Sabbagh, Cristina Díez, Javier Taborda, Ignacio Lucas " << endl << endl << endl;
    cout << "\t\t            << PROYECTO INTEGRADOR PEL - INTERSECCIONES ALGEBRAICAS >>\n";
    cout << "\t\t           ----------------------------------------------\n\n";
    cout << "\t\tSeleccione una de las siguientes opciones para realizar su interesección:\n ";
    cout << "\t\t1.- Recta con Recta" << endl << endl;
    cout << "\t\t2.- Plano con Recta"<< endl << endl;
    cout << "\t\t3.- Plano con Plano" << endl << endl;
    cout << "\t\t4.- Tres Planos"<< endl << endl;
    cin>>op;
    if(op==1){
        cout << "\t\tElija que tipo de ecuación quiere usar en cada recta\n ";
        cout << "\t\tRecta 1:\n";
        cout << "\t\t1.- Implícita" << endl << endl;
        cout << "\t\t2.- Paramétrica"<< endl << endl;
        cout << "\t\t3.- Vectorial" << endl << endl;
        cout << "\t\t4.- Continua"<< endl << endl;
        cin>>opRecta1;
        if(opRecta1==1){
            cout << "\t\tLa ecuacion es: Ax + By + Cz + D = 0\n ";
            cout << "\t\tIntroduzca el valor de A: \n ";
            cin>>DosRectasR1ImplicitaA;
            cout << "\t\tIntroduzca el valor de B: \n ";
            cin>>DosRectasR1ImplicitaB;
            cout << "\t\tIntroduzca el valor de C: \n ";
            cin>>DosRectasR1ImplicitaC;
            cout << "\t\tIntroduzca el valor de D: \n ";
            cin>>DosRectasR1ImplicitaD;
            //TODO METODO

        }else if(opRecta1==2){
            cout << "\t\tLa ecuacion es: ";
            cout << "\t\tx = x0 + λu1";
            cout << "\t\ty = y0 + λu2";
            cout << "\t\tz = z0 + λu3";
            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>DosRectasR1ParametricasX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>DosRectasR1ParametricasY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>DosRectasR1ParametricasZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>DosRectasR1ParametricasU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>DosRectasR1ParametricasU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>DosRectasR1ParametricasU3;
            //TODO METODO



        }else if(opRecta1==3){
            cout << "\t\tLa ecuacion es: (x,y,z) = (x0,y0,z0) + λ(u1,u2,u3)";
            cout << "\t\tDonde (x0,y0,z0) son los valores de un punto de la recta";
            cout << "\t\tλ es un parametro";
            cout << "\t\tY (u1,u2,u3) es el vector director de la recta\"";

            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>DosRectasR1VectorialesX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>DosRectasR1VectorialesY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>DosRectasR1VectorialesZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>DosRectasR1VectorialesU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>DosRectasR1VectorialesU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>DosRectasR1VectorialesU3;
            //TODO METODO


        }else if(opRecta1==4){
            cout << "\t\tLa ecuacion es: (x - x0)/u1 = (y - y0)/u2 = (z - z0)/u3";
            cout << "\t\tDonde (x0,y0,z0) son los valores de un punto de la recta";
            cout << "\t\tY (u1,u2,u3) es el vector director de la recta\"";

            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>DosRectasR1ContinuasX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>DosRectasR1ContinuasY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>DosRectasR1ContinuasZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>DosRectasR1ContinuasU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>DosRectasR1ContinuasU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>DosRectasR1ContinuasU3;
            //TODO METODO



        }
        cout << "\t\tRecta 2:\n";
        cout << "\t\t1.- Implícita" << endl << endl;
        cout << "\t\t2.- Paramétrica"<< endl << endl;
        cout << "\t\t3.- Vectorial" << endl << endl;
        cout << "\t\t4.- Continua"<< endl << endl;
        cin>>opRecta2;
        if(opRecta2==1){
            cout << "\t\tLa ecuacion es: Ax + By + Cz + D = 0\n ";
            cout << "\t\tIntroduzca el valor de A: \n ";
            cin>>DosRectasR2ImplicitaA;
            cout << "\t\tIntroduzca el valor de B: \n ";
            cin>>DosRectasR2ImplicitaB;
            cout << "\t\tIntroduzca el valor de C: \n ";
            cin>>DosRectasR2ImplicitaC;
            cout << "\t\tIntroduzca el valor de D: \n ";
            cin>>DosRectasR2ImplicitaD;
            //TODO METODO

        }else if(opRecta2==2){
            cout << "\t\tLa ecuacion es: ";
            cout << "\t\tx = x0 + λu1";
            cout << "\t\ty = y0 + λu2";
            cout << "\t\tz = z0 + λu3";
            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>DosRectasR2ParametricasX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>DosRectasR2ParametricasY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>DosRectasR2ParametricasZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>DosRectasR2ParametricasU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>DosRectasR2ParametricasU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>DosRectasR2ParametricasU3;
            //TODO METODO

        }else if(opRecta2==3){
            cout << "\t\tLa ecuacion es: (x,y,z) = (x0,y0,z0) + λ(u1,u2,u3)";
            cout << "\t\tDonde (x0,y0,z0) son los valores de un punto de la recta";
            cout << "\t\tλ es un parametro";
            cout << "\t\tY (u1,u2,u3) es el vector director de la recta\"";

            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>DosRectasR2VectorialesX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>DosRectasR2VectorialesY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>DosRectasR2VectorialesZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>DosRectasR2VectorialesU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>DosRectasR2VectorialesU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>DosRectasR2VectorialesU3;
            //TODO METODO

        }else if(opRecta2==4){
            cout << "\t\tLa ecuacion es: (x - x0)/u1 = (y - y0)/u2 = (z - z0)/u3";
            cout << "\t\tDonde (x0,y0,z0) son los valores de un punto de la recta";
            cout << "\t\tY (u1,u2,u3) es el vector director de la recta\"";

            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>DosRectasR2ContinuasX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>DosRectasR2ContinuasY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>DosRectasR2ContinuasZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>DosRectasR2ContinuasU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>DosRectasR2ContinuasU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>DosRectasR2ContinuasU3;
            //TODO METODO

        }

    }
    else if(op==2){
        cout << "\t\tElija que tipo de ecuación quiere usar en la recta y en el plano\n ";
        cout << "\t\tRecta:\n";
        cout << "\t\t1.- Implícita" << endl << endl;
        cout << "\t\t2.- Paramétrica"<< endl << endl;
        cout << "\t\t3.- Vectorial" << endl << endl;
        cout << "\t\t4.- Continua"<< endl << endl;
        cin>>opRectaConPlanoRecta1;
        if(opRectaConPlanoRecta1==1){
            cout << "\t\tLa ecuacion es: Ax + By + Cz + D = 0\n ";
            cout << "\t\tIntroduzca el valor de A: \n ";
            cin>>RectaConPlanoR1ImplicitaA;
            cout << "\t\tIntroduzca el valor de B: \n ";
            cin>>RectaConPlanoR1ImplicitaB;
            cout << "\t\tIntroduzca el valor de C: \n ";
            cin>>RectaConPlanoR1ImplicitaC;
            cout << "\t\tIntroduzca el valor de D: \n ";
            cin>>RectaConPlanoR1ImplicitaD;
            //TODO METODO



        }else if(opRectaConPlanoRecta1==2){
            cout << "\t\tLa ecuacion es: ";
            cout << "\t\tx = x0 + λu1";
            cout << "\t\ty = y0 + λu2";
            cout << "\t\tz = z0 + λu3";
            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>RectaConPlanoR1ParametricaX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>RectaConPLanoR1ParametricaY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>RectaConPLanoR1ParametricaZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>RectaConPlanoR1ParametricaU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>RectaConPLanoR1ParametricaU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>RectaConPLanoR1ParametricaU3;
            //TODO METODO

        }else if(opRectaConPlanoRecta1==3){
            cout << "\t\tLa ecuacion es: (x,y,z) = (x0,y0,z0) + λ(u1,u2,u3)";
            cout << "\t\tDonde (x0,y0,z0) son los valores de un punto de la recta";
            cout << "\t\tλ es un parametro";
            cout << "\t\tY (u1,u2,u3) es el vector director de la recta\"";

            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>RectaConPlanoR1VectorialX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>RectaConPlanoR1VectorialY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>RectaConPlanoR1VectorialZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>RectaConPlanoR1VectorialU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>RectaConPlanoR1VectorialU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>RectaConPlanoR1VectorialU3;
            //TODO METODO

        }else if(opRectaConPlanoRecta1==4){
            cout << "\t\tLa ecuacion es: (x - x0)/u1 = (y - y0)/u2 = (z - z0)/u3";
            cout << "\t\tDonde (x0,y0,z0) son los valores de un punto de la recta";
            cout << "\t\tY (u1,u2,u3) es el vector director de la recta\"";

            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>RectaConPlanoR1ContinuaX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>RectaConPlanoR1ContinuaY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>RectaConPlanoR1ContinuaZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>RectaConPlanoR1ContinuaU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>RectaConPlanoR1ContinuaU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>RectaConPlanoR1ContinuaU3;
            //TODO METODO

        }
        cout << "\t\tPlano:\n";
        cout << "\t\t1.- Implícita" << endl << endl;
        cout << "\t\t2.- Paramétrica"<< endl << endl;
        cout << "\t\t3.- Vectorial" << endl << endl;
        cout << "\t\t4.- Continua"<< endl << endl;
        cin>>opRectaConPlanoPlano1;
        if(opRectaConPlanoPlano1==1){
            cout << "\t\tLa ecuacion es: Ax + By + Cz + D = 0\n ";
            cout << "\t\tIntroduzca el valor de A: \n ";
            cin>>RectaConPlanoP1ImplicitaA;
            cout << "\t\tIntroduzca el valor de B: \n ";
            cin>>RectaConPlanoP1ImplicitaB;
            cout << "\t\tIntroduzca el valor de C: \n ";
            cin>>RectaConPlanoP1ImplicitaC;
            cout << "\t\tIntroduzca el valor de D: \n ";
            cin>>RectaConPlanoP1ImplicitaD;
            //TODO METODO


        }else if(opRectaConPlanoPlano1==2){
            cout << "\t\tLa ecuacion es: ";
            cout << "\t\tx = x0 + λu1";
            cout << "\t\ty = y0 + λu2";
            cout << "\t\tz = z0 + λu3";
            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>RectaConPlanoP1ParametricaX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>RectaConPLanoP1ParametricaY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>RectaConPLanoP1ParametricaZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>RectaConPlanoP1ParametricaU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>RectaConPLanoP1ParametricaU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>RectaConPLanoP1ParametricaU3;
            //TODO METODO

        }else if(opRectaConPlanoPlano1==3){
            cout << "\t\tLa ecuacion es: (x,y,z) = (x0,y0,z0) + λ(u1,u2,u3)";
            cout << "\t\tDonde (x0,y0,z0) son los valores de un punto del plano";
            cout << "\t\tλ es un parametro";
            cout << "\t\tY (u1,u2,u3) es el vector director del plano\"";

            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>RectaConPlanoP1VectorialX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>RectaConPlanoP1VectorialY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>RectaConPlanoP1VectorialZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>RectaConPlanoP1VectorialU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>RectaConPlanoP1VectorialU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>RectaConPlanoP1VectorialU3;
            //TODO METODO

        }else if(opRectaConPlanoPlano1==4){
            cout << "\t\tLa ecuacion es: (x - x0)/u1 = (y - y0)/u2 = (z - z0)/u3";
            cout << "\t\tDonde (x0,y0,z0) son los valores de un punto del plano";
            cout << "\t\tY (u1,u2,u3) es el vector director del plano\"";

            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>RectaConPlanoP1ContinuaX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>RectaConPlanoP1ContinuaY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>RectaConPlanoP1ContinuaZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>RectaConPlanoP1ContinuaU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>RectaConPlanoP1ContinuaU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>RectaConPlanoP1ContinuaU3;
            //TODO METODO

        }

    }else if(op==3){
        cout << "\t\tElija que tipo de ecuación quiere usar en dos planos\n ";
        cout << "\t\tPlano 1:\n";
        cout << "\t\t1.- Implícita" << endl << endl;
        cout << "\t\t2.- Paramétrica"<< endl << endl;
        cout << "\t\t3.- Vectorial" << endl << endl;
        cout << "\t\t4.- Continua"<< endl << endl;
        cin>>opPlanoConPLanoPlano1;
        if(opPlanoConPLanoPlano1==1){
            cout << "\t\tLa ecuacion es: Ax + By + Cz + D = 0\n ";
            cout << "\t\tIntroduzca el valor de A: \n ";
            cin>>PlanoConPlanoP1ImplicitaA;
            cout << "\t\tIntroduzca el valor de B: \n ";
            cin>>PlanoConPlanoP1ImplicitaB;
            cout << "\t\tIntroduzca el valor de C: \n ";
            cin>>PlanoConPlanoP1ImplicitaC;
            cout << "\t\tIntroduzca el valor de D: \n ";
            cin>>PlanoConPlanoP1ImplicitaD;
            //TODO METODO


        }else if(opPlanoConPLanoPlano1==2){
            cout << "\t\tLa ecuacion es: ";
            cout << "\t\tx = x0 + λu1";
            cout << "\t\ty = y0 + λu2";
            cout << "\t\tz = z0 + λu3";
            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>PlanoConPlanoP1ParametricaX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>PlanoConPlanoP1ParametricaY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>PlanoConPlanoP1ParametricaZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>PlanoConPlanoP1ParametricaU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>PlanoConPlanoP1ParametricaU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>PlanoConPlanoP1ParametricaU3;
            //TODO METODO


        }else if(opPlanoConPLanoPlano1==3){
            cout << "\t\tLa ecuacion es: (x,y,z) = (x0,y0,z0) + λ(u1,u2,u3)";
            cout << "\t\tDonde (x0,y0,z0) son los valores de un punto del plano";
            cout << "\t\tλ es un parametro";
            cout << "\t\tY (u1,u2,u3) es el vector director del plano\"";

            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>PlanoConPlanoP1VectorialX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>PlanoConPlanoP1VectorialY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>PlanoConPlanoP1VectorialZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>PlanoConPlanoP1VectorialU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>PlanoConPlanoP1VectorialU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>PlanoConPlanoP1VectorialU3;
            //TODO METODO

        }else if(opPlanoConPLanoPlano1==4){
            cout << "\t\tLa ecuacion es: (x - x0)/u1 = (y - y0)/u2 = (z - z0)/u3";
            cout << "\t\tDonde (x0,y0,z0) son los valores de un punto del plano";
            cout << "\t\tY (u1,u2,u3) es el vector director del plano\"";

            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>PlanoConPlanoP1ContinuaX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>PlanoConPlanoP1ContinuaY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>PlanoConPlanoP1ContinuaZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>PlanoConPlanoP1ContinuaU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>PlanoConPlanoP1ContinuaU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>PlanoConPlanoP1ContinuaU3;
            //TODO METODO

        }
        cout << "\t\tPlano 2:\n";
        cout << "\t\t1.- Implícita" << endl << endl;
        cout << "\t\t2.- Paramétrica"<< endl << endl;
        cout << "\t\t3.- Vectorial" << endl << endl;
        cout << "\t\t4.- Continua"<< endl << endl;
        cin>>opPlanoConPLanoPlano2;
        if(opPlanoConPLanoPlano2==1){
            cout << "\t\tLa ecuacion es: Ax + By + Cz + D = 0\n ";
            cout << "\t\tIntroduzca el valor de A: \n ";
            cin>>PlanoConPlanoP2ImplicitaA;
            cout << "\t\tIntroduzca el valor de B: \n ";
            cin>>PlanoConPlanoP2ImplicitaB;
            cout << "\t\tIntroduzca el valor de C: \n ";
            cin>>PlanoConPlanoP2ImplicitaC;
            cout << "\t\tIntroduzca el valor de D: \n ";
            cin>>PlanoConPlanoP2ImplicitaD;
            //TODO METODO

        }else if(opPlanoConPLanoPlano2==2){
            cout << "\t\tLa ecuacion es: ";
            cout << "\t\tx = x0 + λu1";
            cout << "\t\ty = y0 + λu2";
            cout << "\t\tz = z0 + λu3";
            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>PlanoConPlanoP2ParametricaX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>PlanoConPlanoP2ParametricaY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>PlanoConPlanoP2ParametricaZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>PlanoConPlanoP2ParametricaU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>PlanoConPlanoP2ParametricaU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>PlanoConPlanoP2ParametricaU3;
            //TODO METODO

        }else if(opPlanoConPLanoPlano2==3){
            cout << "\t\tLa ecuacion es: (x,y,z) = (x0,y0,z0) + λ(u1,u2,u3)";
            cout << "\t\tDonde (x0,y0,z0) son los valores de un punto del plano";
            cout << "\t\tλ es un parametro";
            cout << "\t\tY (u1,u2,u3) es el vector director del plano\"";

            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>PlanoConPlanoP2VectorialX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>PlanoConPlanoP2VectorialY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>PlanoConPlanoP2VectorialZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>PlanoConPlanoP2VectorialU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>PlanoConPlanoP2VectorialU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>PlanoConPlanoP2VectorialU3;
            //TODO METODO


        }else if(opPlanoConPLanoPlano2==4){
            cout << "\t\tLa ecuacion es: (x - x0)/u1 = (y - y0)/u2 = (z - z0)/u3";
            cout << "\t\tDonde (x0,y0,z0) son los valores de un punto del plano";
            cout << "\t\tY (u1,u2,u3) es el vector director del plano\"";

            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>PlanoConPlanoP2ContinuaX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>PlanoConPlanoP2ContinuaY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>PlanoConPlanoP2ContinuaZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>PlanoConPlanoP2ContinuaU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>PlanoConPlanoP2ContinuaU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>PlanoConPlanoP2ContinuaU3;
            //TODO METODO

        }


    }else if(op==4){
        cout << "\t\tElija que tipo de ecuación que quiere usar en tres planos\n ";
        cout << "\t\tPlano 1:\n";
        cout << "\t\t1.- Implícita" << endl << endl;
        cout << "\t\t2.- Paramétrica"<< endl << endl;
        cout << "\t\t3.- Vectorial" << endl << endl;
        cout << "\t\t4.- Continua"<< endl << endl;
        cin>>opTresPlanosPlano1;
        if(opTresPlanosPlano1==1){
            cout << "\t\tLa ecuacion es: Ax + By + Cz + D = 0\n ";
            cout << "\t\tIntroduzca el valor de A: \n ";
            cin>>TresPlanosP1ImplicitaA;
            cout << "\t\tIntroduzca el valor de B: \n ";
            cin>>TresPlanosP1ImplicitaB;
            cout << "\t\tIntroduzca el valor de C: \n ";
            cin>>TresPlanosP1ImplicitaC;
            cout << "\t\tIntroduzca el valor de D: \n ";
            cin>>TresPlanosP1ImplicitaD;
            //TODO METODO



        }else if(opTresPlanosPlano1==2){
            cout << "\t\tLa ecuacion es: ";
            cout << "\t\tx = x0 + λu1";
            cout << "\t\ty = y0 + λu2";
            cout << "\t\tz = z0 + λu3";
            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>TresPlanosP1ParametricaX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>TresPlanosP1ParametricaY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>TresPlanosP1ParametricaZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>TresPlanosP1ParametricaU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>TresPlanosP1ParametricaU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>TresPlanosP1ParametricaU3;
            //TODO METODO


        }else if(opTresPlanosPlano1==3){
            cout << "\t\tLa ecuacion es: (x,y,z) = (x0,y0,z0) + λ(u1,u2,u3)";
            cout << "\t\tDonde (x0,y0,z0) son los valores de un punto del plano";
            cout << "\t\tλ es un parametro";
            cout << "\t\tY (u1,u2,u3) es el vector director del plano\"";

            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>TresPlanosP1VectorialX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>TresPlanosP1VectorialY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>TresPlanosP1VectorialZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>TresPlanosP1VectorialU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>TresPlanosP1VectorialU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>TresPlanosP1VectorialU3;
            //TODO METODO

        }else if(opTresPlanosPlano1==4){
            cout << "\t\tLa ecuacion es: (x - x0)/u1 = (y - y0)/u2 = (z - z0)/u3";
            cout << "\t\tDonde (x0,y0,z0) son los valores de un punto del plano";
            cout << "\t\tY (u1,u2,u3) es el vector director del plano\"";

            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>TresPlanosP1ContinuaX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>TresPlanosP1ContinuaY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>TresPlanosP1ContinuaZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>TresPlanosP1ContinuaU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>TresPlanosP1ContinuaU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>TresPlanosP1ContinuaU3;
            //TODO METODO


        }
        cout << "\t\tPlano 2:\n";
        cout << "\t\t1.- Implícita" << endl << endl;
        cout << "\t\t2.- Paramétrica"<< endl << endl;
        cout << "\t\t3.- Vectorial" << endl << endl;
        cout << "\t\t4.- Continua"<< endl << endl;
        cin>>opTresPlanosPlano2;
        if(opTresPlanosPlano2==1){
            cout << "\t\tLa ecuacion es: Ax + By + Cz + D = 0\n ";
            cout << "\t\tIntroduzca el valor de A: \n ";
            cin>>TresPlanosP2ImplicitaA;
            cout << "\t\tIntroduzca el valor de B: \n ";
            cin>>TresPlanosP2ImplicitaB;
            cout << "\t\tIntroduzca el valor de C: \n ";
            cin>>TresPlanosP2ImplicitaC;
            cout << "\t\tIntroduzca el valor de D: \n ";
            cin>>TresPlanosP2ImplicitaD;
            //TODO METODO

        }else if(opTresPlanosPlano2==2){
            cout << "\t\tLa ecuacion es: ";
            cout << "\t\tx = x0 + λu1";
            cout << "\t\ty = y0 + λu2";
            cout << "\t\tz = z0 + λu3";
            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>TresPlanosP2ParametricaX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>TresPlanosP2ParametricaY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>TresPlanosP2ParametricaZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>TresPlanosP2ParametricaU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>TresPlanosP2ParametricaU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>TresPlanosP2ParametricaU3;
            //TODO METODO

        }else if(opTresPlanosPlano2==3){
            cout << "\t\tLa ecuacion es: (x,y,z) = (x0,y0,z0) + λ(u1,u2,u3)";
            cout << "\t\tDonde (x0,y0,z0) son los valores de un punto del plano";
            cout << "\t\tλ es un parametro";
            cout << "\t\tY (u1,u2,u3) es el vector director del plano\"";

            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>TresPlanosP2VectorialX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>TresPlanosP2VectorialY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>TresPlanosP2VectorialZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>TresPlanosP2VectorialU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>TresPlanosP2VectorialU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>TresPlanosP2VectorialU3;
            //TODO METODO

        }else if(opTresPlanosPlano2==4){
            cout << "\t\tLa ecuacion es: (x - x0)/u1 = (y - y0)/u2 = (z - z0)/u3";
            cout << "\t\tDonde (x0,y0,z0) son los valores de un punto del plano";
            cout << "\t\tY (u1,u2,u3) es el vector director del plano\"";

            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>TresPlanosP2ContinuaX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>TresPlanosP2ContinuaY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>TresPlanosP2ContinuaZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>TresPlanosP2ContinuaU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>TresPlanosP2ContinuaU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>TresPlanosP2ContinuaU3;
            //TODO METODO

        }
        cout << "\t\tPlano 3:\n";
        cout << "\t\t1.- Implícita" << endl << endl;
        cout << "\t\t2.- Paramétrica"<< endl << endl;
        cout << "\t\t3.- Vectorial" << endl << endl;
        cout << "\t\t4.- Continua"<< endl << endl;
        cin>>opTresPlanosPlano3;
        if(opTresPlanosPlano3==1){
            cout << "\t\tLa ecuacion es: Ax + By + Cz + D = 0\n ";
            cout << "\t\tIntroduzca el valor de A: \n ";
            cin>>TresPlanosP3ImplicitaA;
            cout << "\t\tIntroduzca el valor de B: \n ";
            cin>>TresPlanosP3ImplicitaB;
            cout << "\t\tIntroduzca el valor de C: \n ";
            cin>>TresPlanosP3ImplicitaC;
            cout << "\t\tIntroduzca el valor de D: \n ";
            cin>>TresPlanosP3ImplicitaD;
            //TODO METODO

        }else if(opTresPlanosPlano3==2){
            cout << "\t\tLa ecuacion es: ";
            cout << "\t\tx = x0 + λu1";
            cout << "\t\ty = y0 + λu2";
            cout << "\t\tz = z0 + λu3";
            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>TresPlanosP3ParametricaX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>TresPlanosP3ParametricaY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>TresPlanosP3ParametricaZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>TresPlanosP3ParametricaU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>TresPlanosP3ParametricaU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>TresPlanosP3ParametricaU3;
            //TODO METODO

        }else if(opTresPlanosPlano3==3){
            cout << "\t\tLa ecuacion es: (x,y,z) = (x0,y0,z0) + λ(u1,u2,u3)";
            cout << "\t\tDonde (x0,y0,z0) son los valores de un punto del plano";
            cout << "\t\tλ es un parametro";
            cout << "\t\tY (u1,u2,u3) es el vector director del plano\"";

            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>TresPlanosP3VectorialX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>TresPlanosP3VectorialY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>TresPlanosP3VectorialZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>TresPlanosP3VectorialU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>TresPlanosP3VectorialU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>TresPlanosP3VectorialU3;
            //TODO METODO

        }else if(opTresPlanosPlano3==4){
            cout << "\t\tLa ecuacion es: (x - x0)/u1 = (y - y0)/u2 = (z - z0)/u3";
            cout << "\t\tDonde (x0,y0,z0) son los valores de un punto del plano";
            cout << "\t\tY (u1,u2,u3) es el vector director del plano\"";

            cout << "\t\tIntroduzca el valor del punto x0: \n ";
            cin>>TresPlanosP3ContinuaX0;
            cout << "\t\tIntroduzca el valor del punto y0: \n ";
            cin>>TresPlanosP3ContinuaY0;
            cout << "\t\tIntroduzca el valor del punto z0: \n ";
            cin>>TresPlanosP3ContinuaZ0;

            cout << "\t\tIntroduzca el valor del vector director u1: \n ";
            cin>>TresPlanosP3ContinuaU1;
            cout << "\t\tIntroduzca el valor del vector director u2: \n ";
            cin>>TresPlanosP3ContinuaU2;
            cout << "\t\tIntroduzca el valor del vector director u3: \n ";
            cin>>TresPlanosP3ContinuaU3;
            //TODO METODO

        }

    }
    
    return 0;
}