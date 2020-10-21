#include <stdio.h>
#include "roster.h"

void load_roster_csv(const char* filename, Student roster[]) {
	FILE *fp;
	int input_number;
	char input_name[128];
	char input_school[128];
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
