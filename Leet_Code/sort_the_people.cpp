#include<iostream>
using namespace std;
int main(){
    string names[3] = {"rohit","virat","msd"};
    int heights[3] = {180,160,175};

    for(int i=0;i<3;i++){
        for(int j=0;j<3-i-1;j++){
            if(heights[j]<heights[j+1]){
                swap(names[j],names[j+1]);
                swap(heights[j],heights[j+1]);
            }
        }
    }

    for(int i=0;i<3;i++){
        cout << names[i] << " ";
    }
    
}
