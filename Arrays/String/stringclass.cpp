#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

char *mystrtok(char *s, char d)
{
    static char *input = NULL;

    if(s!=NULL)
    {
        input = s; //First call
    }


    //start extracting tokens
    char *output = new char[strlen(input)+1];

    int i;
    for(i=0;)

    {
        iostr
    }



int main()
{
    char str[90] = "It, is my, day";

    // Tokenized the first string
    char* ptr = mystrtok(str, " ");
    // Print current tokenized string
    cout << ptr << endl;

    // While ptr is not NULL
    while (ptr != NULL) {
        // Tokenize the string
        ptr = mystrtok(NULL, " ");
        // Print the string
        cout << ptr << endl;
    }
    return 0;
}




