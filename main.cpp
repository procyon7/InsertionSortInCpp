//
//  main.cpp
//  Insertion
//
//  Created by Rumeysa Bulut on 23.09.2017.
//  Copyright © 2017 Rumeysa Bulut. All rights reserved.
//

#include <iostream>
#include "insertion.hpp"
using namespace std;
int main(int argc, char const *argv[]) {
    
    int size;
    cout<< "Enter array size: "<<endl;
    cin>>size;
    InsertionSort insertionArr(size);
    insertionArr.InsertSort(insertionArr.getSize());
    
    cout<<"Array is sorted using insertion sort algorithm."<<endl;
    insertionArr.printElements();
    return 0;
}
