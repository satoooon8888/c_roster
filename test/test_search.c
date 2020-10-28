#include <stdio.h>
#include <string.h>
#include "../src/roster.h"

void init_roster(Student roster[100]) {
	for (int i = 0; i < 100; i++) {
		roster[i].number = 0;
		roster[i].name[0] = '\0';
		roster[i].school[0] = '\0';	    
	}	
}

int main(void) {
	Student roster[100];

	printf("目視で確認してください\n");
	printf("[*] load test.csv\n");
	load_roster_csv("./test/resource/test.csv", roster);
	
	init_roster(roster);
	printf("[*] load empty.csv\n");
	load_roster_csv("./test/resource/empty.csv", roster);
	
	
	init_roster(roster);
	printf("[*] load 100.csv\n");
	load_roster_csv("./test/resource/100.csv", roster);
	// TODO
	
	return 0;
}
