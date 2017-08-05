#pragma once
#include <string>

int parseString(string, string*);
int isOperator(char);
string extractNum(char*, int&);
int getPriority(char);
double calcRevPolish(string*, int);
string filterStr(string);
char lowerCase(char);
string lowerCase(string);
void modifyPowerSeq(string*, int)
