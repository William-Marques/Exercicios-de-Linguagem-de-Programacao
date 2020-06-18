#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>
#include <iomanip>

using namespace std;
double numero1, numero2, numero3, resultado;
void inicializacao();
void mostrarmenu();
double ler1();
double ler2();
double ler3();
double calcularmedia(double n1, double n2, double n3);
void exibirtudo();


int main() {
  setlocale(LC_ALL, "Portuguese");  
  inicializacao();//chama animação de inicializacao
  mostrarmenu();//Chama o menu grafico de controle
}

//void com simulação de inicialização
void inicializacao(){
    system("clear");
    cout << "\n\nIniciando o Ruindows..." << endl;
    system("echo '\033[01;91mNão desligue o computador!\033[01;97m'");
    system("sleep 4");
    system("clear");
}

//Menu gráfico de inicio com descrição do programa
void mostrarmenu(){
  int tecla;
repetir:
    cout << " __________________________ " << endl;
    cout << "|      Programa para       |" << endl;
    cout << "|     calcular a média     |" << endl;
    cout << "|      geométrica de       |" << endl;
    cout << "|       três valores       |" << endl;
    cout << "|__________________________| " << endl;
    cout << "|                          |" << endl;
    cout << "| 1 |  Ler valores         |" << endl;
    cout << "| 2 |  Calcular média      |" << endl;
    cout << "| 3 |  Exibir tudo         |" << endl;
    cout << "| 4 |  Sair                |" << endl;
    cout << "|__________________________|" << endl;
    cout << "|         Memória          |" << endl;
    cout << "|                          |" << endl;
    cout << "| Primeiro Número " << setfill(' ') << setw(8) <<  numero1 << " |" << endl;
    cout << "| Segundo Número " << setfill(' ') << setw(9) <<  numero2 << " |" << endl;
    cout << "| Terceiro Número " << setfill(' ') << setw(8) <<  numero3 << " |" << endl;
    cout << "|                          |" << endl;
    cout << "| Média " << fixed << setprecision(2) << setfill(' ') << setw(18) <<  resultado << " |" << endl;
    cout << "|__________________________|" << endl << endl ;
    cout << "\nDigite a opção desejada: ";
  cin >> tecla;

  switch (tecla){
      case 1:
          cout << endl;
          numero1 = ler1();
          numero2 = ler2();
          numero3 = ler3();
          system("clear");
          break;
      case 2:
          if((numero1 == 0) & (numero2 == 0) & (numero3 == 0)) {
            system("echo '\033[01;91mVocê precisa inserir dados.\033[01;97m'");
            system("sleep 3");
            system("clear");
            goto repetir;
          }else{            
            resultado = calcularmedia(numero1, numero2, numero3);
            system("clear");}
          break;
      case 3:
          exibirtudo();
          system("clear");
          break;
      case 4:
        cout << endl;
        system("echo '\033[01;91mSaindo...\033[01;97m'");
        system("sleep 3");
        system("clear");
        goto out;
        break;
      default:
        system("echo '\033[01;91mOpção Inválida.\033[01;97m'");
        system("sleep 3");
        system("clear");
        goto repetir;
        break;
  }
  goto repetir;
  out:
  return;
}

//Função para ler o primeiro número
double ler1(){
  double a;
  cout << "Digite o primeiro número: ";
  cin >> a;
  return a;
}

//Função para ler o segundo número
double ler2(){
  double b;
  cout << "Digite o segundo número: ";
  cin >> b;
  return b;
}

//Função para ler o terceiro número
double ler3(){
  double c;
  cout << "Digite o terceiro número: ";
  cin >> c;
  system("echo '\033[01;91mNúmeros Armazenados.\033[01;97m'");
  system("sleep 2");
  return c;
}

//Função de calcular média geométrica de três valores
double calcularmedia(double n1, double n2, double n3){
  double result;
  result = cbrt((n1 * n2 * n3));
  system("echo '\033[01;91mCalculando média...\033[01;97m'");
  system("sleep 2");
  system("echo '\033[01;91mMédia calculada.\033[01;97m'");
  system("sleep 1");
  return result;
}

//Função void para exibir tudo na tela
void exibirtudo()  {
  cout << endl << "O primeiro número é " << numero1 ;
  cout << endl << "O segundo número é " << numero2 ;
  cout << endl << "O terceiro número é " << numero3 << endl;
  cout << endl << "A média geométrica ";
  cout << endl << "desses três valores é " << resultado << endl ;
  system("echo '\033[01;91mReiniciando...\033[01;97m'");
  system("sleep 6");
  }  