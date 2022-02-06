#include "sort_method.h"

int main()
{
    int* series = new int [10];
    for(int i = 0; i<10; i++)
    {
        series[i] = i;
    }
    upset(series, 10);
    for(int j = 0; j<10; j++)
    {
        cout<<series[j];
    }
    cout<<endl;

    delete [] series;
    return 0 ;
}


