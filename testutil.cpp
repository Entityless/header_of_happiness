#include <iostream>
#include "header_of_happiness.hpp"

using namespace std;


int main()
{
    for(int i = 0; i < 100; i++)
    {
        if(true)
        {
            printf("true true %d\n", i);
        }
        if(false)
        {
            printf("false true %d\n", i);
        }
    }

    int arr_i[10];
    int arr_i2[10];

    for(int i = 0; i < 10; i++)
    {
        arr_i[i] = rand();
        arr_i2[i] = rand();
        printf("%d ", arr_i[i]);
    }

    printf("\n");

    sort(arr_i, arr_i + 10);


    for(int i = 0; i < 10; i++)
    {
        printf("%d ", arr_i[i]);
    }

    printf("\n");

    memcpy(arr_i, arr_i2, sizeof(int) * 10);

    for(int i = 0; i < 10; i++)
    {
        printf("%d ", arr_i[i]);
    }

    printf("\n");


    return 0;
}
