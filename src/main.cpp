#include "../include/until.hpp"

int main(){

    Until obj = Until();

    vector<int> vec;

    obj.RandomNumbers(vec);

    obj.PrintVector(vec);

    obj.MakeInsertionSort(vec);
    cout << endl << endl;

    obj.PrintVector(vec);
    return 0;
}