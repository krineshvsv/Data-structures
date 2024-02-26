//Write a program to implement bubble sort in c++ language.
#include<iostream>
using namespace std;

void print(int a[],int n){
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}

void bubble(int a[],int n){

    int temp;
    for(int i=1;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[i]<a[j]){
                //swap(a[i],a[j])
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        // if(a[i] < a[i-1]){
        //     //swap(a[i],a[i-1])
        //     temp=a[i];
        //     a[i]=a[i-1];
        //     a[i-1]=temp;
        // }
    }
}




int main(){
    int i,j,temp;
    int a[5]={45,1,32,13,26};

    int n=sizeof(a)/sizeof(a[0]);

    cout<<"Before sorting array elements are-\n";
    print(a,n);

    bubble(a,n);

    cout<<"\nAfter sorting array elements are-\n";
    print(a,n);

    return 0;
}
