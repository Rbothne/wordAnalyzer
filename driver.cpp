//Author: Robert Bothne
//Purpose: analyze file a file counting and displaying # of letters, # of upper/lower case and vowels to the user.
//9/3/2020

#include <iostream>
#include <string>
#include <string.h>
#include <fstream>
#include "word_analyzer.h"
#define MAX_WORDS 1000
using namespace std;

string findMaxWord(int, string[]);
int getWords(int, string[],string);

int main(int argc, char* argv[])
{
	int size = 0,lowers = 0,uppers = 0, letters = 0, vowels = 0;
	string words[MAX_WORDS];
	
	if (argc!=2){
		cout << "Correct usage:"<< "./text_analyzer filename\n";
		return(0);
	}
		int totalWords = getWords(size,words,argv[1]);
		
		if (totalWords == -1){//close program
			return(0);
		}
		for(int i =0; i<totalWords; i++){//for all words individually
			lowers += countLowerCase(words[i]);
			uppers += countUpperCase(words[i]);
			vowels += countVowels(words[i]);
			letters += countLetters(words[i]);
			//cout << "working";
		}
		string maxWord = findMaxWord(totalWords,words);
		cout << "There are " << letters << " letters in your file.";
		cout << "\nThere are " << lowers << " lower case letters in your file.";
		cout << "\nThere are " << uppers << " upper case letters in your file.";
		cout << "\nThere are " << vowels << " vowels in your file.";
		cout << "\nThe last word alphabetically is: " << maxWord << "\n";
		return(0);
}	

int getWords(int size, string words[], const string fileName)
{
		ifstream fin(fileName);
		if (fin.is_open()){
				while(!fin.eof()){
					fin >> words[size];
					size++;
				}
		}
		else{
			cout << "Sorry, could not open "<< fileName << " for reading\n";
			return(-1);
		}
		return (size);
}

string findMaxWord(int size,string words[])
{
	string maxWord="";
	for (int i=0; i<size; i++){
		if(words[i]>maxWord){
			maxWord=words[i];
		}
	}
	return (maxWord);
}
