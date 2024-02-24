/*
Write a program to remove duplicate elements from linear array.
*/
//code
/*
output:
OUTPUT
Define the number of elements in an array: 5
Enter 5 elements of an array:
1
4
4
5
5
Array elements after deletion of the duplicate elements: 1 4 5
*/
#include<iostream>
using namespace std;

void removeDuplicates(int arr[],int&size){

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<size-1;k++){
                    arr[k]=arr[k+1];
                }
                size--;
            }
        }
    }

}


int main(){
    int arr[20],size;
    cout<<"Define the number of elements in an array: ";
    cin>>size;
    cout<<"\n Enter "<<size << " elements of an array: \n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    removeDuplicates(arr,size);

    cout<<"\nArray elements after deletion of the duplicate elements: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}