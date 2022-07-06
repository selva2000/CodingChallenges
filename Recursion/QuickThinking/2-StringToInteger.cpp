#include<bits/stdc++.h>
using namespace std;

int strToInt(char *a, int n){

	if(n == 0){
		return 0;
	}

	int digit = a[n-1] - '0';

	int small_sub = strToInt(a, n-1);

	return small_sub * 10 + digit;
}


int main(){

	char a[] = "1234";
	int len = strlen(a);
	cout<<"Length: "<<len<<endl;

	cout<<strToInt(a, len);
}
