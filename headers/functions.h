#ifndef functions_h
#define functions_h

#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <cstring>
#include <limits>
#include <ctime>
#include <ratio>
#include <list>
#include <functional>
#include <windows.h>
#include <direct.h>
#include <iterator>
#include <limits>
#include <sys/stat.h>

using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::setfill;
using std::left;
using std::list;
using std::string;


void InsertYourself(list <student> &A);
void PrintData(list <student> A);
void GroupStudents(list <student> &A);
void ReadFromFile(list <student> &A);
void GenerateList(int StudSK);
void InsertFromFile(list <student> &A);
int GetLongestString(list <student> &A);

#endif
