#include <iostream>
#include "C:\Faculdade\PDS 2\VPL07\VPL07\include\intruso.hpp"

int main(){
    int num_entradas, i;
    std::string senha;
    Intruso intruso;
    
    std::cin >> num_entradas;
    std::getline(std::cin, senha);
    for(i=0; i < num_entradas; i++){
      // cout << "-1";
       //std::cin.ignore();
     //  cout<< "0";
        std::getline(std::cin, senha);
      //  cout<< "1";
        intruso.set_senha_vazada(senha);
       //cout << "2";
    }
    std::cout << intruso.crack_senha() <<std::endl;
    
    return 0;
}