/*
Write a program to read 10 integers in an array.
sort them out on the basis of number of digits in each elements.

output:

Enter the elements of the array
4
74
8
2
1
7
5
6
4
7
Sorted array is
4 8 2 1 7 5 6 4 7 74
*/
#include<iostream>
using namespace std;

void Swap(int& x,int& y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}

void sortedArray(int arr[],int& size){
// first find the number of  digits of all the numbers

//Creating an array to store the number of digits for each element
int nrOfDigit[size];

int digit=0;
int count=0;
   
        //iterate over the original array and calculate the number of 
        //digits for each element,storing them in the array created in
        //step 1.
        for(int i=0;i<size;i++){
            digit=arr[i];
            while(digit!=0){
                digit/=10;
                count++;
            }
            nrOfDigit[i]=count;
            count=0;
        }
        
    //sort the original array along with the array storing the number
    //of digits , using a sorting algorithm like bubble sort,where you 
    //swap elements in both array based on the number of digits.
    int temp;
    for(int i=1;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(nrOfDigit[i]<nrOfDigit[j]){
                Swap(arr[i],arr[j]);
                Swap(nrOfDigit[i],nrOfDigit[j]);//Also swap the number of digits.
            }
        }
    }
    

    
}

int main(){
    int size=10;
    int arr[20];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    sortedArray(arr,size);

    cout<<"sorted array is:"<<endl;
    for(int i=0;i<size;i++){

        cout<<arr[i]<<" ";

    }
    return 0;
}