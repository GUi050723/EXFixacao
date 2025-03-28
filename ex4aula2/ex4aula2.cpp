#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Declaração das variáveis
    int codigoPeca1, numeroPeca1, codigoPeca2, numeroPeca2;
    double valorPeca1, valorPeca2;
    
    // Solicita a entrada dos dados da peça 1
    cout << "Digite o código da peça 1: ";
    cin >> codigoPeca1;
    
    cout << "Digite o número de peças 1: ";
    cin >> numeroPeca1;
    
    cout << "Digite o valor unitário da peça 1: ";
    cin >> valorPeca1;
    
    // Solicita a entrada dos dados da peça 2
    cout << "Digite o código da peça 2: ";
    cin >> codigoPeca2;
    
    cout << "Digite o número de peças 2: ";
    cin >> numeroPeca2;
    
    cout << "Digite o valor unitário da peça 2: ";
    cin >> valorPeca2;
    
    // Calcula o valor total a ser pago
    double total = (numeroPeca1 * valorPeca1) + (numeroPeca2 * valorPeca2);
    
    // Exibe o valor total formatado com duas casas decimais
    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: U$ " << total << endl;
    
    return 0;
}