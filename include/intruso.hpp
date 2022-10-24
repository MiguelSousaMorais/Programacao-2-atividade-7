#include <string>
#include <vector>
using namespace std;

class Intruso{
    /*Continue a implementação da classe Intruso*/

    int aux=0;
    int num_entradas;
    string _senha;
    string elementos_aux;

    public:
        void set_senha_vazada(std::string vazou);
        std::string crack_senha();
};