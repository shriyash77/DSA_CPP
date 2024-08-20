#include<iostream>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low+1;
    int j = high;

    do{
    while(arr[i]<=pivot){
        i++;
    }
    while(arr[j]>pivot){
        j--;
    }
    if(i<j){
        int temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    }
    while(i<j);
    if(i>=j){
        int temp;
        temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;

    }

    return j;
}
void Quicksort(int arr[], int low, int high){
    int partitionindex; //Index of pivot after partition

    if(low<high){
    partitionindex = partition(arr, low, high);
    Quicksort(arr, low, partitionindex-1); //sorting of left side array
    Quicksort(arr, partitionindex+1, high);//sorting of right side array
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Quicksort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}