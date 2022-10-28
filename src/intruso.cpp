#include "C:\Faculdade\PDS 2\VPL07\VPL07\include\intruso.hpp"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

void Intruso::set_senha_vazada(string vazou, int num_entradas){
  //  cout << 5;
    int i=0;
    int j=0;
    string elementos;

    for(i=20;i<31;i++){
        
        if(vazou[i]=='A'){                        // organiza a senha na ordem correta dos números dentro
            elementos.push_back(vazou[0]);        // do vetor elementos.
            elementos.push_back(vazou[2]);        //  EX :: vazou = 1 7 3 9 0 8 5 6 2 4 B C E A E B 
        }                                         //        elementos = 39 08 24 17 24 39

        if(vazou[i]=='B'){
            elementos.push_back(vazou[4]);
            elementos.push_back(vazou[6]);
        }

        if(vazou[i]=='C'){
            elementos.push_back(vazou[8]);
            elementos.push_back(vazou[10]);
        }

        if(vazou[i]=='D'){
            elementos.push_back(vazou[12]);
            elementos.push_back(vazou[14]);
        }

        if(vazou[i]=='E'){
            elementos.push_back(vazou[16]);
            elementos.push_back(vazou[18]);
        }

    }

        if (aux==0){                              // Verifica se é a primeira execução da função set_senha_vazada
            elementos_aux = elementos;            // cria vetores para serem comparados para descobrir a senha
        }
        if(aux == 1){
            elementos_aux1 = elementos;
            if(num_entradas<3){
                 for(int z=0; z<12 ; z+=2){            // compara os elementos dos vetores criados para         
                                                  // para descobir a senha certa 
                for(i=z;i<z+2;i++){               // EX :: elemento aux = 39 08 24 17 24 39
                    for(j=z;j<z+2;j++){           //       elemento x = 98 05 34 72 82 79
                        for(int x=z;x<z+2;x++){
                           if(elementos[i]==elementos_aux[j] && elementos_aux[j]==elementos_aux1[x]){      
                            _senha.push_back(elementos[i]);
                            _senha += " ";
                        }
                        }
                    }
                }
            }
            }
        }
        if(aux == 2){
             for(int z=0; z<12 ; z+=2){            // compara os elementos dos vetores criados para         
                                                  // para descobir a senha certa 
                for(i=z;i<z+2;i++){               // EX :: elemento aux = 39 08 24 17 24 39
                    for(j=z;j<z+2;j++){           //       elemento x = 98 05 34 72 82 79
                        for(int x=z;x<z+2;x++){
                           if(elementos[i]==elementos_aux[j] && elementos_aux[j]==elementos_aux1[x]){      
                            _senha.push_back(elementos[i]);
                            _senha += " ";
                            }
                        }
                    }

                }
            }
        }
           
        

        aux++;
//cout << elementos << endl << elementos_aux;
}

string Intruso::crack_senha(){
   // cout << 4;
    return _senha;
}