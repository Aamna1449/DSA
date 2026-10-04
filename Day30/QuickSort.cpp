#include<iostream>
using namespace std;
int Partition(int arr[], int start, int end)
{
    int pos = start;

    for (int i = start; i < end; i++)
    {
        if (arr[i] <= arr[end])
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }

    swap(arr[pos], arr[end]);

    return pos;
}

void QuickSort(int arr[],int start,int end){
    if(start>=end){
        return;
    }

    int pivot=Partition(arr,start,end);
    QuickSort(arr,start,pivot-1);
    QuickSort(arr,pivot+1,end);
}
int main(){
    int arr[10]={6,4,2,8,13,7,11,9,3,6};
    QuickSort(arr,0,9);
    cout<<"Quick Sort: ";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
    
}