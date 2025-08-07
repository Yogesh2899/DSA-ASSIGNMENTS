#include<iostream>
using namespace std;
int n=0;
int arr[100];
int i;
void createArr(){
    cout << "enter the nu mber of value" << endl; 
    cin >> n;
    
    for( i=0;i<n;i++){
        cin >> arr[i];
    }
}

void display(){
    if(n==0){
        cout<< arr[i];
    }
}

void insert(){
    
    
    int key;
    cout << "enter the no. u want to insert" << endl;
    cin >> key;

    int pos;
    cout << "enter the pos in which u want to place the number " << endl;
    cin >> pos;

    if(pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        
    }

    // Shift elements from the end to pos to make space for key
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert key at pos
    arr[pos] = key;
    for(int i=0;i<=n;i++){
        cout << arr[i] << " ";
    }
}

void deletion(){
    int pos;
    cout << "enter the pos in which u want to delete the number " << endl;
    cin >> pos;
    if(pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        }
        else{
            for(int i=pos;i<n;i++){
                arr[i]=arr[i+1];
                }
                n--;
                for(int i=0;i<=n;i++){
                    cout << arr[i] << " ";
                    }
                    }
                    }


void search(){
    int key;
    cout << "enter the no. u want to search" << endl;
    cin >> key;
    int flag = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element is present at index " << i << endl;
            
            flag = 1;
            break;
            }
            }
            if(flag == 0) {
            cout << "Element is not present in the array" << endl;
            }
            }
            


void exit(){
    cout << "Exiting..." << endl;
    exit(0);
}


int main(){
    char value;
    switch (value)
    {
    case 1:void createArr();
    break;
    case 2: void display();
    break;
    case 3:void insert();
    break;
    case 4:void deletion();
    break;
    case 5:void search();
    break;
    case 6:void exit();
    break;    

    
    default:
        break;
    }
    cout << "Choice from menu" << endl;
    cout << "1.CREATE" << endl;
    cout << "2.DISPLAY" << endl;
    cout << "3.INSERT" << endl;
    cout << "4.DELETE" << endl;
    cout << "5.LINEAR SEARCH" << endl;
    cout << "6.EXIT" << endl;

}