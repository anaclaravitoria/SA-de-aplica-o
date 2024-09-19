/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
/*Faça um programa para o cálculo de uma folha de pagamento, sabendo que os
descontos são do Imposto de Renda, que depende do salário bruto (conforme
tabela abaixo) e 10% para o INSS e que o FGTS corresponde a 11% do Salário
Bruto, mas não é descontado (é a empresa que deposita).
O Salário Líquido corresponde ao Salário Bruto menos os descontos. O
programa deverá pedir ao usuário o valor da sua hora e a quantidade de horas
trabalhadas no mês. Desconto do IR: Salário Bruto até 900 (inclusive) - isento Salário Bruto até 1500
(inclusive) - desconto de 5% Salário Bruto até 2500 (inclusive) - desconto de
10% Salário Bruto acima de 2500 - desconto de 20%
Imprima na tela as informações.*/

int main()
{
    double SalarioLiquido; // valor final com os descontos
    double SalarioBruto; // Salário 
    double ir; // impostos de descontos
    double inss; // impostos de descontos
    double fgts; // impostos de descontos que é descontado na empresa
    double Totaldedescontos; // Valor total que será descontado
    int HoraMes;// horas trabalhadas por mês
    int HoraValorRecebido;// valor recebido por hora

    
   cout << " Seja bem vindo(a)! \n Para saber quanto será descontado em seu salário, digite o valor recebido por hora: ";
   cin >> HoraValorRecebido;
   cout << " Agora, digite as horas trabalhadas: ";
   cin >> HoraMes;
   
   SalarioBruto = HoraValorRecebido * HoraMes;
   
   inss = SalarioBruto * 0.10;
   fgts = SalarioBruto * 0.11;
   
   if (SalarioBruto >= 900) {
       ir = SalarioBruto * 0.05;
       Totaldedescontos = ir + inss;
       SalarioLiquido = SalarioBruto - Totaldedescontos;
       cout << "\n Salário Bruto: " << SalarioBruto;
       cout << "\n IR: " << ir;
       cout << "\n INSS: " << inss;
       cout << "\n FGTS: " << fgts;
       cout << "\n Total de Descontos: " << Totaldedescontos;
       cout << "\n Salario Liquido: " << SalarioLiquido;
   } else if (SalarioBruto >= 1500){
       ir = SalarioBruto * 0.10;
       Totaldedescontos = ir + inss;
       SalarioLiquido = SalarioBruto - Totaldedescontos;
       cout << "\n Salário Bruto: " << SalarioBruto;
       cout << "\n IR: " << ir;
       cout << "\n INSS: " << inss;
       cout << "\n FGTS: " << fgts;
       cout << "\n Total de Descontos: " << Totaldedescontos;
       cout << "\n Salario Liquido: " << SalarioLiquido;
       Totaldedescontos = ir + inss;
   } else if (SalarioBruto >= 2500){
       ir = SalarioBruto * 0.20;
       Totaldedescontos = ir + inss;
       SalarioLiquido = SalarioBruto - Totaldedescontos;
       cout << "\n Salário Bruto: " << SalarioBruto;
       cout << "\n IR: " << ir;
       cout << "\n INSS: " << inss;
       cout << "\n FGTS: " << fgts;
       cout << "\n Total de Descontos: " << Totaldedescontos;
       cout << "\n Salario Liquido: " << SalarioLiquido;
       Totaldedescontos = ir + inss;
   } else {
       SalarioLiquido = SalarioBruto - inss;
       cout << "\n Salário Bruto: " << SalarioBruto;
       cout << "\n IR: Isento";
       cout << "\n INSS: " << inss;
       cout << "\n FGTS: " << fgts;
       cout << "\n Total de Descontos: " << inss;
       cout << "\n Salário líquido: " << SalarioLiquido;
   }
   
   return 0;
}