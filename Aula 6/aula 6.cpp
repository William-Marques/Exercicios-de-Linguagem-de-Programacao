#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>
using namespace std;

/* Quadro resumo de funções ou Declarações de funções/subrotinas */
  double ler_A ( );
  double ler_B ( );
  double ler_C ( );
  double cal_Delta ( double a, double b, double c);
  double cal_x1 ( double a, double b, double delta );
  double cal_x2 ( double a, double b, double delta );
  void exibir ( double a, double b, double c, double delta );
/* Quadro resumo de funções ou Declarações de funções/subrotinas */

int main () 
{ 
  setlocale(LC_ALL, "Portuguese");

  double a, b, c, delta;   int tecla;

MENU: /* marca um ponto no código para retornar aqui depois */
system("clear");
cout << "\nmenu\n1 Executar\n2 Finalizar\nitem:"; 
cin >> tecla;

switch ( tecla ) {  
  case 1:
  a = ler_A ( );
  b = ler_B ( );
  c = ler_C ( );
    if ( a == 0 ) 
      { 
        cout << "\nErro!'A' deve ser diferente de zero!";
          system("sleep 5"); 
          exit(0); 
          } else { 
            delta = cal_Delta ( a, b, c );
            exibir ( a, b, c, delta );
          } 
          break;

  case 2: cout << "\nO programa será finalizado!"; 
    system ("sleep 5"); 
    exit ( 0 ); 
    break;
}
goto MENU; /* executa novamente a partir do ponto marcado */
return 0; } 



double ler_A ( ) 
{ 
  double va; 
  cout << "Valor de A:";
  cin >> va;
  return va; 
}

double ler_B ( ) 
{ 
  double vb; 
  cout << "Valor de B:";
  cin >> vb;
  return vb;
}

double ler_C ( ) 
{ 
  double vc; 
  cout << "Valor de C:";
  cin >> vc;
  return vc; 
}

double cal_Delta ( double a, double b, double c) 
{
   double d = pow(b,2) - 4 * a * c;
   return d; 
}

double cal_x1 ( double a, double b, double delta ) 
{
   double x = (-b + sqrt(delta))/(2*a);
   return x; 
}

double cal_x2 ( double a, double b, double delta ) 
{
   double x = (-b - sqrt(delta))/(2*a);
   return x; 
}



void exibir ( double a, double b, double c, double delta )
{
 cout << fixed << setprecision(2) << "\nValor de ....A:" << setfill(' ') << setw(15) << a;
 cout << "\nValor de ....B:" << setfill(' ') << setw(15) << b;
 cout << "\nValor de ....C:" << setfill(' ') << setw(15) << c;
 cout << "\nValor de Delta:" << setfill(' ') << setw(15) << delta;

if ( delta >= 0 )
 { 
   double x1 = cal_x1 ( a , b , delta);
   double x2 = cal_x2( a , b , delta);
   
   cout << fixed << setprecision(2) << "\nValor de ....x1:" << setfill(' ') << setw(14) << x1;
   cout << "\nValor de ....x2:" << setfill(' ') << setw(14) << x2 << endl;
  }
else 
{ 
  cout << "\nImpossível calcular x1 e x2\nDelta é negativo!";
}

system("sleep 5");

} // fim do void exibir