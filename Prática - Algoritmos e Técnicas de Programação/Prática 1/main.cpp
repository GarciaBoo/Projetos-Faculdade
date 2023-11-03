#include <iostream>
#include <vector>

using namespace std;

// Função para ler os valores de potência e armazená-los em um vetor
void recebe_valor(vector<double>& potencia) {
    cout << "Digite os valores da potência ao longo do dia:\n";
    for (int i = 0; i < potencia.size(); i++) {
        cin >> potencia[i];
    }
}

// Função para encontrar o valor máximo no vetor
double encontra_valor_maximo(const vector<double>& potencia) {
    double valorMaximo = potencia[0];
    for (int i = 1; i < potencia.size(); i++) {
        if (potencia[i] > valorMaximo) {
            valorMaximo = potencia[i];
        }
    }
    return valorMaximo;
}

// Função para encontrar o valor mínimo no vetor
double encontra_valor_minimo(const vector<double>& potencia) {
    double valorMinimo = potencia[0];
    for (int i = 1; i < potencia.size(); i++) {
        if (potencia[i] < valorMinimo) {
            valorMinimo = potencia[i];
        }
    }
    return valorMinimo;
}

int main() {
    const int numValores = 20;
    vector<double> potencia(numValores);

    recebe_valor(potencia);

    double valorMaximo = encontra_valor_maximo(potencia);
    double valorMinimo = encontra_valor_minimo(potencia);

    cout << "O valor máximo de potência atingido foi: " << valorMaximo << " Watt (W)" << endl;
    cout << "O valor mínimo de potência atingido foi: " << valorMinimo << " Watt (W)" << endl;

    return 0;
}
