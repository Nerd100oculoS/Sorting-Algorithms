#include "../include/until.hpp"


Until::Until(){

}

void Until::RandomNumbers(vector<int> &vec){

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(MIN_VALUE,MAX_VALUE);

    while(vec.size() < 10){

        vec.push_back(dis(gen));
    }
}

Until::~Until(){}

void Until::PrintVector(vector<int> vec){

    for(int n: vec){

        cout << n << " ";
    }

    cout << endl;
}

void Until::MakeBubbleSort(vector<int> &vec){

    for(int i = 0; i < vec.size()-1; i++){

        for(int j = 0; j < vec.size()-1; j++){
            
            // Para ordenar decrescente apenas mude o sinal de maior/menor
            if(vec[j] > vec[j+1]){
                
                // Faz swap(troca)
                int aux = vec[j]; 
                vec[j] = vec[j+1]; 
                vec[j+1] = aux; 
            }
        }
    }
}

void Until::MakeInsertionSort(vector<int> &vec){
    
    int key, i;

    //Pega o primeiro elemento
    for(int j = 1; j < vec.size(); j++){

        key = vec[j]; // a chave recebe o valor seguinte

        // na primeira execução pega-se vec[0] e vec[1]
        i = j-1; // i recebe o valor do seu par de teste -> i = 0 na primeira execução

        //Ordena de forma crescente
        while(i >= 0 && vec[i] > key){

            vec[i+1] = vec[i];
            i = i-1;
        }
        
        vec[i+1] = key; //Insere o valor na sua devida posição já ordenado
    }   
}