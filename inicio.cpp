#include <iostream>
using namespace std;

int main () {  
    cout << "*****************" << endl; 
    cout << "*Bem vindo ao jogo da advinhação*" << endl;
    cout << "*****************" << endl;

    bool acertou = false;
    const int NUMERO_SECRETO = 41;

    while (!acertou) {
        int palpite;
        cout << "Qual o seu Palpite:" << endl; 
        cin >> palpite;

        acertou = NUMERO_SECRETO == palpite;
        bool maior = NUMERO_SECRETO < palpite;
        cout << "Status acertou: " << acertou << endl; 

        if (acertou) {
            cout << "Você Acertou";
        }
        else if (maior) {
            cout << "O numero que você chutou é maior do que o numero secreto" << endl;
        }
        else {
            cout << "O numero que você chutou é menor do que o numero secreto" << endl;
        }
    }
}