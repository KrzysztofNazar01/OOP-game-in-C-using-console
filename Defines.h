#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <cstdlib>
#include <list>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <conio.h>
#include <sstream>  
#include <Windows.h>
using namespace std;

#define UMIEJETNOSC_AKTYWNA 5 //tury
#define UMIEJETNOSC_ODNAWIANA 5 //tury
#define SZANSA_NA_ROZSIEW 20 //szansa na 100 %
#define ILOSC_GATUNKOW_BEZ_CZLOWIEKA 10
#define SILA_GRANICZNA_PRZY_ODBICIU 5
#define ILOSC_PROB_LOSOWYCH_RUCHOW 10

#define CZLOWIEK 'H'
#define WILK 'W'
#define OWCA 'O'
#define LIS 'L'
#define ZOLW 'Z'
#define ANTYLOPA 'A'
#define TRAWA '_'
#define MLECZ 'M' 
#define GUARANA 'G'
#define WILCZEJAGODY 'J' 
#define BARSZCZ 'B'
	
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define ENTER 13
#define ESC 27
#define TAB 9

enum DIRECTION {
	UP,
	DOWN,
	LEFT,
	RIGHT,
	NO_CHANGE
};

struct COORDINATES {
	int x;
	int y;
};

class Swiat;



