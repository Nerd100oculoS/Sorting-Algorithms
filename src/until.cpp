#include "../include/until.hpp"

/**
 * @brief Construtor padrão
 * 
 */
Until::Until(){}

/**
 * @brief Destrutor padrão
 * 
 */
Until::~Until(){}

/**
 * @brief Gera um vetor de numeros aleatorios
 * 
 * @param vec vetor a ser prenchido
 */
void Until::RandomNumbers(vector<int> &vec){

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(MIN_VALUE,MAX_VALUE);

    while(vec.size() < QTD){

        vec.push_back(dis(gen));
    }
}

/**
 * @brief Imprime vetor
 * 
 * @param vec vetor a ser impresso
 */
void Until::PrintVector(vector<int> vec){

    for(int n: vec){

        cout << n << " ";
    }

    cout << endl;
}

/**
 * @brief Faz a ordenação por BubbleSort
 * 
 * @param vec Vetor a ser ordenado
 */
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

/**
 * @brief Faz a ordenação por InsertionSort
 * 
 * @param vec Vetor a ser ordenado
 */
void Until::MakeInsertionSort(vector<int> &vec){
    
    int key, i;

    for(int j = 1; j < vec.size(); j++){

        key = vec[j]; 
        i = j-1; 

        //Ordena de forma crescente
        while(i >= 0 && vec[i] > key){ //Move os valores 

            vec[i+1] = vec[i];
            i = i-1;
        }
        
        //Insere o valor na sua devida posição já ordenado até a ultima interação.
        vec[i+1] = key;
    }   
}

/**
 * @brief Faz ordenação por SelectionSort
 * 
 * @param vec Vetor a ser ordenado
 */
void Until::MakeSelectionSort(vector<int> &vec){

    int menor_idx, aux;
    
    for(int i = 0; i < vec.size(); i++){

        menor_idx = i;

        //Sempre pega o proximo elemento
        for(int j = i+1; j < vec.size(); j++){

            if(vec[j] < vec[menor_idx]){

                menor_idx = j;
            }
        }

        //Faz Swap(TROCA)
        aux = vec[i]; //elemento a ser trocado de posicao
        vec[i] = vec[menor_idx]; // o menor passa para toca de posicao
        vec[menor_idx] = aux; // o elemento selecionado no primeiro loop troca de posicao com o de menor valor
    }
}

/**
 * @brief Faz a ordenação por QuickSort
 * 
 * @param vec vetor a ser ordenado
 * @param index1 indice do elemento inicial do vetor(inicialmente)
 * @param index2 indice referente ao ultimo elemento do vetor(inicialmente)
 */
void Until::MakeQuickSort(vector<int> &vec,  int index1, int index2){

    if(index1 < index2){

        int index_pivot = FindPivot(vec,index1,index2); // acha o indice do elemento que será o pivot

        MakeQuickSort(vec,index1,index_pivot-1); // ordena os elementos da esquerda (menores)
        MakeQuickSort(vec,index_pivot+1,index2); // ordena os elementos da direita (maiores)
    }
}

/**
 * @brief Encontra um pivot e reorganiza os elementos
 * 
 * @param vec vetor a ser reorganizado e ordenado
 * @param index1 indice do elemento inicial do vetor(inicialmente)
 * @param index2 indice referente ao ultimo elemento do vetor(inicialmente)
 * @return o indice do elemento que será o pivot
 */
int Until::FindPivot(vector<int> &vec, int index1, int index2){

    int x = vec[index2]; // recebe ultimo elemento
    int i = index1 - 1; // indice i que comeca antes do vetor

    for(int j = index1; j < index2; j++){

        // descending -> (>=)
        // Para odernar de forma decrescente basta mudar a verificação para (>=)
        if(vec[j] <= x){

            i += 1;
            swap(vec[i],vec[j]);
        }
    }

    swap(vec[i+1],vec[index2]);

    return i+1;
}


