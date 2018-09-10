#include <iostream>  
#include <vector>         
#include <io.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cstring> 

#define WORDLEN 100
#define WORDNUM 1000000 
#define GROUPNUM 10000000

using namespace std; 

FILE *fin, *fout;

typedef struct word{
	int frequency;
	char content[WORDLEN];
	char after_deal[WORDLEN];
}word;

typedef struct wordgroup{
	int frequency;
	word *firstword, *secondword;
}wordgroup;


word Hashw[WORDNUM];        

wordgroup Hashg[GROUPNUM];   

word *preword=NULL; 

char wordstore[WORDLEN];                  

unsigned long int count_character=0;
unsigned long int count_word=0;
unsigned long int count_line=0;

void wordoperation(char* newword);         
void wordjudge(char ch);            
void toptenw(void);
void topteng(void);
vector<char*> getFilesList(const char * dir);

