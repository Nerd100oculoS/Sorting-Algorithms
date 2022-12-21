#include "../include/until.hpp"


Until::Until(){

}

void Until::RandomNumbers(vector<int> &vec){

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(MIN_VALUE,MAX_VALUE);

    while(vec.size() < 50){

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

    for(int i = 0; i < vec.size(); i++){

        for(int j = 0; j < vec.size(); j++){
            
            // Para ordenar decrescente apenas mude o sinal de maior/menor
            if(vec[j] > vec[i]){
                
                // Faz swap(troca)
                int aux = vec[j]; 
                vec[j] = vec[i]; 
                vec[i] = aux; 
            }
        }
    }
}

