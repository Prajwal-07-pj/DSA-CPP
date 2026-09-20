#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 6, 7, 10};
    int n = 6;
    int k = 5;
    int i=0,j=n-1,mid,ans=n;

    while (i<=j)
    {
        mid = i+(j-i)/2;
        if(arr[mid]-mid-1 >= k){
            ans = mid;
            j = mid - 1;
        }else{
            i = mid + 1;
        }
    }

    cout << ans + k;
    
}