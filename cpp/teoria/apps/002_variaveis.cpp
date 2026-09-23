// Variáveis e tipos básicos

#include <iostream>
#include <string>

int main() {

    // Tipos fundamentais
    int inteiro = 10;
    char caractere = 'p';
    float decimal = 7.777f;
    double decimal_preciso = 7.77777;
    bool booleano = true;

    // std::string é uma classe da biblioteca padrão
    std::string nome = "pedro";

    // Saída
    std::cout << inteiro << '\n';
    std::cout << caractere << '\n';
    std::cout << decimal << '\n';
    std::cout << decimal_preciso << '\n';
    std::cout << booleano << '\n';
    std::cout << nome << '\n';

    // Entrada
    std::cout << "Digite um inteiro: ";
    std::cin >> inteiro;

    std::cout << "Inteiro digitado: "
              << inteiro << '\n';

    return 0;
}