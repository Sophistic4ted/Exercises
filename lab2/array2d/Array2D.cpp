//
// Created by kwiakami on 07.03.17.
//

#include "Array2D.h"

int **Array2D(int n_rows, int n_columns) {

    int **tab = new int *[n_rows];
    for (int i = 0; i < n_rows; i++)
    {
        tab[i] = new int[n_columns];
    }
}

void DeleteArray2D(int **array, int n_rows, int n_columns)
{
    for (int i=0;i<n_rows;i++){
        delete array[i];
    }
    delete [] array;
}