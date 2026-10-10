#include<iostream>
using namespace std;

void rotate_90(int arr[][4], int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        int start=0 , end=n-1;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }

       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void rotate_180(int arr[][4], int n){
    for(int i=0;i<n;i++){
        int start = 0 , end = n-1;
        while(start<end){
            swap(arr[start][i] , arr[end][i]);
            start++;
            end--;
        } 
     }

     for(int i=0;i<n;i++){
        int start = 0 , end = n-1;
        while(start<end){
            swap(arr[i][start] , arr[i][end]);
            start++;
            end--;
        } 
     }

      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void rotate_270(int arr[][4], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            swap(arr[j][i],arr[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        int start=0 , end=n-1;
        while(start<end){
            swap(arr[start][i],arr[end][i]);
            start++;
            end--;
        }
    }

       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}

int main(){
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int n = 4;
    int choice;
    cout << "Enter how many times do you want to rotate matrix : ";
    cin >> choice;

    int x = choice % 4;

    switch (x)
    {
    case 1:
        rotate_90(arr,4);
        break;
    case 2 : 
        rotate_180(arr,4);
        break;
    case 3 :
        rotate_270(arr,4);
        break;
    case 4 : 
        rotate_90(arr,4);
    
    default:
        cout << "Invalid";
        break;
    }
}