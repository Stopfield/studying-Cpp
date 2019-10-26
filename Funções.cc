#include <iostream>

using namespace std;

// Isso é uma função
void imprimeQualquerCoisa()
{

    cout << "Qualquer coisa" << endl;
}

// A função é primeiro indicada pelo tipo que ela irá retornar
// Por exemplo, digamos que criemos um novo tipo
class novoTipo{
    public:
        string nomeTipo;
        int numTipo;
        int maisUmNumTipo;
}; // As classes devem ter um ";" no final

// Agora vamos criar uma função que retorne uma variavel/valor com o tipo "novoTipo"
novoTipo tipoPositivo()
{
    // Agora definimos suas características
    novoTipo tipoPos;
    tipoPos.nomeTipo = "Positivo";
    tipoPos.numTipo = 1;
    tipoPos.maisUmNumTipo = 2;
    return tipoPos;
}


// Agora vamos chamá-la na função main()
int main()
{
    novoTipo tipoQueEuFiz;
    tipoQueEuFiz = tipoPositivo();
    // Agora o "tipoQueEuFiz" vai receber as características do objeto "tipoPos" criado dentro da função "tipoPositivo"
    cout << tipoQueEuFiz.nomeTipo << endl;
    imprimeQualquerCoisa();
    return 0;
}