#include <iostream>

using namespace std;

int maksimumelement(int *arr, int ukuran);
int maksimumelementindeks(int *arr, int ukuran) ;
int main()
{
    int arr[]={1,2,4,5,6,100,10,7,100};
    int ukuran = sizeof(arr)/sizeof(arr[0]);
    cout<< "maks = "<< maksimumelement(arr,ukuran)<<", di indeks: "<<maksimumelementindeks(arr,ukuran);
    return 0;
}

int maksimumelement(int *arr, int ukuran){
    int maks=*(arr);
    for (int i = 1;i<ukuran;i++){
        if (*(arr+i)> maks){
            maks = *(arr + i);
        }
    }
    return maks;
}

int maksimumelementindeks(int *arr, int ukuran)
{
    int indeks = 0;
    int maks=*(arr);
    for (int i = 1; i < ukuran; i++)
    {
        if (*(arr + i) > maks)
        {
            maks=*(arr+i);
            indeks=i;
        }
    }
    return indeks;
}