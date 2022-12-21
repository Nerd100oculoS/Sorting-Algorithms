#ifndef UNTIL_HPP
#define UNTIL_HPP

#define MAX_VALUE 1000
#define MIN_VALUE 0

#include<bits/stdc++.h>

using namespace std;

class Until{

    public:

    Until();
    ~Until();
    
    void MakeBubbleSort(vector<int> &vec);
    void MakeInsertionSort(vector<int> vec);
    void MakeSelectionSort(vector<int> vec);
    void MakeQuickSort(vector<int> vec);
    void MakeMergeSort(vector<int> vec);
    void MakeHeapSort(vector<int> vec);

    void PrintVector(vector<int> vec);
    void RandomNumbers(vector<int> &vec);
};

#endif