#include<iostream>
using namespace std;
int searchingofarray(int arr[] ,int n ,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    int ch =9;
    cout<<"enter size of array";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the number which you want to find";
    cin>>key;
    
    if(searchingofarray(arr,n,key)==-1){
        cout<<"The element is not in array"<<endl;
    }
    else{
        cout<<"the index of the element is :"<<searchingofarray(arr,n,key)<<endl;
    }
    
}