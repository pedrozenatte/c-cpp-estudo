#include <iostream>
// Inclui a biblioteca padrão de entrada e saída (I/O).
// Ela fornece objetos como std::cout, std::cin e std::cerr.

using namespace std;
// Permite usar os nomes do namespace std sem escrever "std::".
// Por exemplo: cout em vez de std::cout.
//
// Um namespace é um mecanismo usado para organizar nomes e evitar
// conflitos entre funções, classes, variáveis etc.

int main() {

    cout << "Hello World!" << endl;

    return 0;
}


// Forma padrão
// #include <iostream>
// // Biblioteca padrão de entrada e saída (I/O).
// // Fornece std::cout, std::cin, std::cerr etc.

// int main() {

//     std::cout << "Hello World!" << '\n';
//     // std::cout -> saída padrão (normalmente o terminal)
//     // <<        -> operador de inserção

//     return 0;
// }