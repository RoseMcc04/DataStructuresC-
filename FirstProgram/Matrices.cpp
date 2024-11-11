#include <iostream>
#include <stdlib.h>

int main() 
{
    int matrix[3][5];

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            matrix[i][j] = j * (i + 1);
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}