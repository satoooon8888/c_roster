#include <stdio.h>
#include "roster.h"

void init_roster(Student roster[100]) {
	for (int i = 0; i < 100; i++) {
		roster[i].number = 0;
		roster[i].name[0] = '\0';
		roster[i].school[0] = '\0';	    
	}	
}

void load_roster_csv(const char* filename, Student roster[]) {
	FILE *fp;
	init_roster(roster);
	fp = fopen(filename, "r");
	if( fp == NULL ){
		printf( "%s が開けません\n", filename);
		return;
	}
	int i = 0;
	while (fscanf(fp, "%d,%127[^,],%127[^\n]%*c", &roster[i].number, roster[i].name, roster[i].school) != EOF) {
		i++;
	};
}
