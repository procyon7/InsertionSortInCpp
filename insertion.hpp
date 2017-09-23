//
//  insertion.hpp
//  Insertion
//
//  Created by Rumeysa Bulut on 23.09.2017.
//  Copyright © 2017 Rumeysa Bulut. All rights reserved.
//

#ifndef insertion_hpp
#define insertion_hpp

#include <stdio.h>

class InsertionSort {
private:
    int size;
    int* array;
    //int array[8];
    
public:
    InsertionSort();
    InsertionSort( int array_size );
    ~InsertionSort();
    int getSize();
    void printElements();
    void setElements();
    void InsertSort(unsigned int n);
};

#endif /* insertion_hpp */
