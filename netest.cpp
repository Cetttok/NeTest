

#define _CRT_SECURE_NO_WARNINGS

#define LenMainList 5  
#define NameDataFile "uiu.txt"

#include<stdio.h>
#include<conio.h>
#include<Windows.h>
//#include "structurbl.h"
//nclude<stdlib.h> вызвано в"structurbl.h"
 


int main()
{




	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	
	
	

	
	
	DWORD dwMode = 0;
	GetConsoleMode(hOut, &dwMode);
	SetConsoleMode(hOut, dwMode);
    //dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
	wprintf(L"\x1b[31mThis text has a red foreground using SGR.31.\r\n");
	wprintf(L"\x1b[1mThis text has a bright (bold) red foreground using SGR.1 to affect the previous color setting.\r\n");
	wprintf(L"\x1b[mThis text has returned to default colors using SGR.0 implicitly.\r\n");
	wprintf(L"\x1b[34;46mThis text shows the foreground and background change at the same time.\r\n");
	wprintf(L"\x1b[0mThis text has returned to default colors using SGR.0 explicitly.\r\n");
	wprintf(L"\x1b[31;32;33;34;35;36;101;102;103;104;105;106;107mThis text attempts to apply many colors in the same command. Note the colors are applied from left to right so only the right-most option of foreground cyan (SGR.36) and background bright white (SGR.107) is effective.\r\n");
	wprintf(L"\x1b[39mThis text has restored the foreground color only.\r\n");
	wprintf(L"\x1b[49mThis text has restored the background color only.\r\n");
	
}



/*
int uzap(FILE* willzap, unsigned int nshtuk) { //возвращает количество успешно введённых, если ошибка в набранной инф. то 0.
	char j, o, tr, ich[10];
	unsigned int n = 0, i = 0;
	float kwa;
	printf("TNn(0-3)\\k\\n vqxoda'n\\n vxoda/w'n/w;   tip 4 - nerezanucatb\n");
	while (true) {
		o = _getch() - '0'; printf("%d", (int)o);
		if (o == 4)return(0); printf("\\");
		for (j = 0;j < 9;j++) {
			tr = _getch();
			if (tr == '\\') break;
			printf("%c", tr);
			ich[j] = tr;
		}
		if (j == 9 && tr != '\\')return(-1);
		ich[j] = '\0';
		printf("\\");
		kwa = strtof(ich, NULL);
		//fwrite(&i, sizeof(int), 1, willzap);
		fwrite(&o, sizeof(char), 1, willzap);
		fwrite(&kwa, sizeof(float), 1, willzap);
		
		if (o != 3)
			while (true) {
				tr = (char)(160 + sizeof(int)); fwrite(&tr, sizeof(char), 1, willzap);
				for (j = 0;j < 10;j++) { 
					tr = _getch();printf("%c",tr);
					if ((tr == '\\') || (tr == '\'') || (tr == ';'))break;
					ich[j] = tr;
				}
				if (j == 10)return(-1); 
				ich[j] = '\0';
				n = strtoul(ich, NULL, 10);
				fwrite(&n, sizeof(int), 1, willzap);
				if (o == 2 && tr == ';')return(0);
				if (tr == '\\' || tr == ';')break;
			}
		else {
			tr = (char)160;
			fwrite(&tr, sizeof(char), 1, willzap);
		}
		if (o == 2 || o == 3)
			while (true) {
				tr = (char)(160 + 2 * sizeof(int)); fwrite(&tr, sizeof(char), 1, willzap);
				for (j = 0;j < 10;j++) { 
					tr = _getch(); printf("%c", tr);
					if (tr != '/')break;
					ich[j] = tr;
				}
				if (j == 10)return(-1);
				ich[j] = '\0';
				n = strtoul(ich, NULL, 10);
				fwrite(&n, sizeof(int), 1, willzap);

				for (j = 0;j < 10;j++) {          
					tr = _getch(); printf("%c", tr);
					if ((tr == ';') || (tr == '\''))break;
					ich[j] = tr;
				}
				if (j == 10)return(-1);
				ich[j] = '\0';
				kwa = strtof(ich, NULL);
				fwrite(&kwa, sizeof(float), 1, willzap); //тут некорректно записывает в файл.
				if (tr == ';')break;
			}
		else {
			if (tr != ';')return(-1);
			tr = (char)160;
			fwrite(&tr, sizeof(char), 1, willzap);
		}

		tr = (char)240;
		fwrite(&tr, sizeof(char), 1, willzap);
		i++;
	}
	return(i);
}*/
