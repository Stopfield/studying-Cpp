#include <iostream>

using namespace std;

// São diversos detalhes das classes que eu ainda não sei, mas vamos começar pelo básico
class minhaClasseLegal // A classe não precisa de "()", já que o seu construtor é definido dentro da classe como uma função
{

    // Existem três tipos de escopos dentro de uma classe
    public:     // Na qual todos podem acessar
        int issoAquiGeralVe;
    private:    // Na qual só o pessoal dentro da classe acessa
        int issoAquiSoAPanelaVe;
    protected:  // Na qual somente o pessoal que é derivada da classe acessa e a classe tbm
        int issoAquiSoVeQuemAClasseDeixa;
    
    
    // O interessante em C++, é que funções podem ser definidas dentro das classes, mas não implementadas nelas
    public:
        void imprimeAi(string );

};


// E aqui podemos fazer a implementação da função
void minhaClasseLegal::imprimeAi(string texto)
{
    cout << texto << endl;
}

int main()
{
    
    return 0;
}