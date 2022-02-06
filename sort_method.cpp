#include "sort_method.h"

void upset(int* object, int n)
{
    list<int> temp_container;
    list<int> :: iterator it = temp_container.begin();
    srand(time(0));
    int random_number;
    for(int i = 0; i<n; i++)
    {
        temp_container.push_back (object[i]);
    }
    for(int j = n; j > 1 || j == 1; j--)
    {
       random_number =  rand()%j;
       advance(it, random_number);
        object[n-j] = *it;
       temp_container.erase(it);
       it = temp_container.begin();
    }
}


// void bubble_sort(int* input_series)
// {
    
// }