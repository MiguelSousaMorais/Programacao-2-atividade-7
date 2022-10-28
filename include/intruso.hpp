#include <string>
#include <vector>
using namespace std;

class Intruso{
    /*Continue a implementação da classe Intruso*/

    int aux=0;
    int num_entradas;
    string _senha;
    string elementos_aux;
    string elementos_aux1;

    public:
        void set_senha_vazada(std::string vazou,int num_entradas);
        std::string crack_senha();
};