#include "the0.h"

void insertionSort(int* arr, long &comparison, long & swap, int size) 
{
    int i=1;
    while(i<size){
        int x=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>x){
            arr[j+1]=arr[j];
            j-=1;
            comparison++;
            swap++;
        }
        comparison++;
        arr[j+1]=x;
        i+=1;
    }
}