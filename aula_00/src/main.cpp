#include <iostream>
#include "funcionario.cpp"
using namespace std;
int main()
{
    cout << "Informe o nome: ";
    string nome;
    cin >> nome;
    cout << endl;
    cout << "Informe o salario: ";
    float salario;
    cin >> salario;
    cout << endl;

    Funcionario func(nome, salario);
    cout << func.get_salario() << endl;
    return 0;
}


