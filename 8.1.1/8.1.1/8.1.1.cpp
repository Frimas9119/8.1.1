#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int Count(char* str, char* s)
{
	int z = 0;
	for (int i = 0; i < 102;i++) {
		if (s[z] == str[i]) {
			z++;
				if (z == 5) {
					return z;
				}
		}
	}
	return z;
}

int main()
{
	char str[101];
	char s[]="while";
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "there are "<< Count(str, s) << "/5 " <<"letters in the word 'while' " << endl;
	return 0;
}