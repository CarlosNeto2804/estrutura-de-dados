#include <string>
using namespace std;

class Funcionario {
  private:
    float salario;
    string nome;

  public: 
    Funcionario(string n, float s){
        nome = n;
        salario = s;
    }
  public:
    void set_salario(int s) {
      salario = s;
    }
    int get_salario() {
      return salario;
    }
    void set_nome(string n) {
      nome = n;
    }
    string get_nome() {
      return nome;
    }
    bool equals(Funcionario func){
       bool nome_is_equals =  func.nome == nome;
       bool salario_is_equals = func.salario == salario;
       return nome_is_equals && salario_is_equals;
    }
};

