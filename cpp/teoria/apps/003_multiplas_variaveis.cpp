// Múltiplas variáveis

#include <iostream>

// constexpr define uma constante cujo valor pode ser conhecido em tempo de compilação. Diferentemente de uma variável comum, seu valor não pode ser alterado.
constexpr double pi = 3.1415;

// #define cria uma macro do pré-processador.
// Antes da compilação, o pré-processador substitui todas as ocorrências de "canal" pelo texto definido abaixo.
//
// Portanto:
// canal;
//
// será substituído por algo equivalente a:
// std::cout << "pedro\n";;
//
// Para esse tipo de situação, funções são geralmente preferíveis em C++ moderno. Aqui é usado apenas para demonstrar o funcionamento de uma macro.
#define canal std::cout << "pedro\n";

int main() {

    // É possível declarar várias variáveis do mesmo tipo em uma única instrução, separando-as por vírgulas.
    int vidas = 3, municao = 500, life = 100;

    // Imprime a constante pi.
    std::cout << pi << '\n';

    // "canal" é uma macro.
    // O pré-processador substitui este nome pelo conteúdo definido no #define antes da compilação.
    canal;

    return 0;
}