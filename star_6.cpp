#include<iostream>
using namespace std;
int main(){
	char i; 
	char j;
	
	for(i='a';i<='e';i++){
		for(j='a';j<=i;j++)
		{
			cout << i << " ";
		}
		cout << endl;
	}
}
