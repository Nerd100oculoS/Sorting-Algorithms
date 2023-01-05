#include "../include/until.hpp"

int main(){

    Until obj = Until();

    vector<int> vec;


    int op = -1;

    // vector<int> aux = {2,8,7,1,3,5,6,4};
    vector<int> aux;

    obj.RandomNumbers(aux);
    
    int index1 = 0; //index do primeiro elemento do vetor
    int index2 = aux.size()-1; // index do ultimo elemento do vetor

    int pivot = obj.FindPivot(aux,index1,index2);
    
    cout << "index_pivot: " << pivot << endl;
    cout << "elemento pivot = " << aux[pivot] << endl;
    obj.PrintVector(aux);

    obj.MakeQuickSort(aux,index1,index2);

    cout << "vetor ordenado com quicksort:\n\n";
    obj.PrintVector(aux);

    // while(op != 0){

    //     cout << "--------------------------- MENU ---------------------------\n\n";
    //     cout << "[0] - Para Finalizar!\n";
    //     cout << "[1] - BubbleSort\t[2] - InsertionSort\t[3] - SelectionSort\n\n";
    //     cout << ">>>> ";
    //     cin >> op;
    //     cout << endl << endl;
        
    //     vec.clear();
    //     obj.RandomNumbers(vec);

    //     cout << "Vetor gerado: \n";
    //     obj.PrintVector(vec);
        
    //     switch(op){
            
    //         case 0:
    //             cout << "\n\nEnd Program!\n\n";
    //         break;

    //         case 1:

    //             cout << "\nBubbleSort\n\n";
    //             obj.MakeBubbleSort(vec);
    //             obj.PrintVector(vec);

    //         break;

    //         case 2:
    //             cout << "\nInsertion Sort\n\n";
    //             obj.MakeInsertionSort(vec);
    //             obj.PrintVector(vec);
    //         break;

    //         case 3:
    //             cout << "\nSelection Sort\n\n";
    //             obj.MakeSelectionSort(vec);
    //             obj.PrintVector(vec);
    //         break;

    //         case 4:
    //             cout << "\nQuick Sort\n\n";
    //             obj.MakeQuickSort(vec,0,vec.size());
    //             obj.PrintVector(vec);
    //         break;

    //         default:
    //             cout << "Opcao errada!\n\n";
    //         break;
    //     }
    // }

    return 0;
}
