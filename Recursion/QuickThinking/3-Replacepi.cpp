#include<bits/stdc++.h>
using namespace std;

void replacePi(char a[], int i){

	if(a[i] == '\0' or a[i+1] == '\0'){
		return;
	}

	if( a[i] == 'p' and a[i+1] == 'i'){

		//Indexing j to the next element after "pi"
		int j = i+2;

		//Making j to point at end of the array.
		while(a[j] != '\0'){
			j++;
		}

		//returning j from right(end of the array) to left untill (i+2) by allocating two spaces of every element.

		while(j >= i+2){
			a[j+2] = a[j];
			j--;
		}

		a[i] = '3';
		a[i+1] = '.';
		a[i+2] = '1';
		a[i+3] = '4';
		replacePi(a, i+4);
	}

	else{

		return replacePi(a, i+1);
	}
	
}



int main(){

	char a[1000];
	cin>>a;
	replacePi(a, 0);
	cout<<a;
}
