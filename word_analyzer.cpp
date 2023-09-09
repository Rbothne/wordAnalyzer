#include "word_analyzer.h"
int countLetters(string word)
{	int totLetters=0;
//sets n to be original string length
	int n = word.length();
// sets character array to be n+1 for invisible end character
	char letters[n+1];
// copies values from word to letters array
	strcpy(letters, word.c_str());
	for(int i=0;letters[i]!='\0';i++){
		if(letters[i]>='A' && letters[i]<='z'){
			totLetters++;
			}
		}
	return(totLetters);
}

int countLowerCase(string word)
{
//sets n to be original string length
	int lowLetters=0;
	int n = word.length();
// sets character array to be n+1 for invisible end character
	char letters[n+1];
// copies values from word to letters array
	strcpy(letters, word.c_str());
	for(int i=0;letters[i]!='\0';i++){
		if(letters[i]>='a' && letters[i]<='z'){
			lowLetters++;
		}
	}
	return(lowLetters);
}
int countUpperCase(string word)
{	int uppLetters=0;
//sets n to be original string length
	int n = word.length();
// sets character array to be n+1 for invisible end character
	char letters[n+1];
// copies values from word to letters array
	strcpy(letters, word.c_str());
	for(int i=0;letters[i]!='\0';i++){
		if(letters[i]>='A' && letters[i]<='Z'){
			uppLetters++;
		}
	}
	return(uppLetters);
}
int countVowels(string word)
{	int vowels=0;
//sets n to be original string length
	int n = word.length();
// sets character array to be n+1 for invisible end character
	char letters[n+1];
// copies values from word to letters array
	strcpy(letters, word.c_str());
	for(int i=0;letters[i]!='\0';i++){
		if(letters[i]=='A'||letters[i]=='E'||letters[i]=='I'||letters[i]=='O'||letters[i]=='U'||letters[i]=='a'||letters[i]=='e'||letters[i]=='i'||letters[i]=='o'||letters[i]=='u'){
			vowels++;
		}
	}
	return(vowels);
}

