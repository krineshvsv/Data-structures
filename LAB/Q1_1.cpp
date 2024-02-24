/* Write a program to insert/delete in linear array at specific position  */
//code
/*
EXPECTED OUTPUT:
OUTPUT
enter the number of elements: 5
enter the elements:
1
4
5
6
8
array is:
1
4
5
6
8
1 for insert.
2 for delete
enter choice: 1
enter the position where you want to insert element: 3
enter new one element: 45
Array after insertion is:
1
4
45
5
6
8
*/
#include<iostream>
using namespace std;

void insertElement(int arr[],int &n){
    int index,ele;
    cout<<"Enter the position where you want to insert element: ";
    cin>>index;
    cout<<"Enter the new element: ";
    cin>>ele;
    if(index>n){
        cout<<"Invalid Position"<<endl;
        return;
    }
    /*Logic Explain
    ->  for(int i=n-1;i>=index-1;i--){
             arr[i+1]=arr[i];}

    index=3,n=5;

    calculations:
    1) i=4 i>=2:
        arr[5]=arr[4]
                 8

    2)i=3  i>=2:
         arr[4]=arr[3]
                 6
    3)i=2 i>=2:
          arr[3]=arr[2]
                 5

    and finally
      arr[index-1]=element(45)
    
    */
   for(int i=n-1;i<=2;i--){
    arr[i+1]=arr[i];
   }
   arr[index-1]=ele;

   n++;

   cout<<"Arra after insertion is: "<<endl;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
   }

}

void deleteElement(int arr[],int&n){
    int index;
    cout<<"Enter the position where you want to delete element: ";
    cin>>index;
    if(index>=n){
        cout<<"Invalid position"<<endl;
        return;
    }
    /*OUTPUT:
    1
    4
    5
    6
    8
    Enter the position where you want to delete element:
    3
    Array after deletion:
    1
    4
    6
    8
    Logic Explain:
    for(int i=index-1;i<n-1;i++)   [n-1 because it is array -> 0 to 4]
      {arr[i]=arr[i+1]}
    
    index=3, n=5

    calculations:
    1)i=2  i<4
    arr[2]=arr[3]
           6
    2)i=3 i<4
    arr[3]=arr[4]
           8
    
    */
   for(int i=index-1;i<n;i++){
    arr[i]=arr[i+1];
   }
   n--;

   cout<<"Array after deletion: "<<endl;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
   }
}

int main(){
    int n,arr[100];
    
    cout<<"Enter the number of elements: ";
    cin>>n;

    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }


    cout<<"1 for insert."<<endl;
    cout<<"2 for delete."<<endl;
    char ch;
    cout<<"Enter choice: ";
    cin>>ch;

    switch(ch){

        case '1':
            insertElement(arr,n);
        
        case '2':
            deleteElement(arr,n);
            break;
        default:
            cout<<"Enter Valid choice!"<<endl;
            break;

    }

    return 0;
}