#include<iostream>
using namespace std;
int binarysearch(int a[] ,int n ,int key){
    int i = 0;
    int j = n;
    while(j>=i){
        int mid = (i+j)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            j = mid-1;
        }
        else if(a[mid]<key){
            i = mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int key;
    cin>>key;

    cout<<binarysearch(a,n,key);
}