#include<bits/stdc++.h>
using namespace std;

std::string words[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void printSpellings(int n){

	if(n == 0){
		return;
	}


	printSpellings(n/10);
	int digit = n%10;
	cout<<words[digit]<<" ";
	return;

}

int main(){

	int n;
	cin>>n;

	printSpellings(n);

}
