// Change in the given string itself. So no need to return or print anything

#include<iostream>
using namespace std;
int getMeLength(char array[])
{
    int len = 0;
    for(int i =0;array[i]!='\0';i++)
    {
        len++;
    }
    return len;
}
void shiftArray(char input[])
{
    int n = getMeLength(input);
    for(int i = n-1;i>=2;i--)
    {
        input[i+2] = input[i];
    }
    input[0] = '3';
    input[1] = '.';
    input[2] = '1';
    input[3] = '4';
   // cout<<input<<"-";
}
void replacePi(char input[]) 
{
	if(input[0]=='\0')
        return;
    if(input[0]=='p'&&input[1]=='i')
    {
        shiftArray(input);
        replacePi(input+1);
    }
    else
    {
     	 replacePi(input+1);   
    }
}

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
