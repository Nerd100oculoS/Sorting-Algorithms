#include "../include/until.hpp"

int main(){

    Until obj = Until();

    vector<int> vec;


    int op = -1;

    while(op != 0){

        cout << "--------------------------- MENU ---------------------------\n\n";
        cout << "[1] - BubbleSort\t[2] - InsertionSort\n\n";
        cout << ">>>> ";
        cin >> op;
        
        vec.clear();
        obj.RandomNumbers(vec);

        cout << "Vetor gerado: \n";
        obj.PrintVector(vec);
        
        switch(op){
            
            case 0:
                cout << "\n\nEnd Program!\n\n";
            break;

            case 1:

                cout << "\nBubbleSort\n\n";
                obj.MakeBubbleSort(vec);
                obj.PrintVector(vec);

            break;

            case 2:
                cout << "\nInsertion Sort\n\n";
                obj.MakeInsertionSort(vec);
                obj.PrintVector(vec);
            break;

            default:
                cout << "Opcao errada!\n\n";
            break;
        }
    }

    return 0;
}
