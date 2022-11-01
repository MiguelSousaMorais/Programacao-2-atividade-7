#include <iostream>
#include "instruso.hpp"

int main(){
    int num_entradas, i;
    std::string senha;
    Intruso intruso;
    
    std::cin >> num_entradas;
    std::cin.ignore();

    for(i=0; i < num_entradas; i++){
      // cout << "-1";
      
     //  cout<< "0";
        std::getline(std::cin, senha);
      //  cout<< "1";
        intruso.set_senha_vazada(senha,num_entradas);
       //cout << "2";
    }
    std::cout << intruso.crack_senha() <<std::endl;
    
    return 0;
}