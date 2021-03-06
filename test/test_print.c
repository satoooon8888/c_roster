#include <stdio.h>
#include <string.h>
#include "../src/roster.h"

int main(void) {
	Student roster[100];

	printf("目視で確認してください\n");
	printf("[*] load test.csv\n");
	load_roster_csv("./test/resource/test.csv", roster);
    print_roster_list(roster);
	
	init_roster(roster);
	printf("[*] load empty.csv\n");
	load_roster_csv("./test/resource/empty.csv", roster);
	print_roster_list(roster);
	
	init_roster(roster);
	printf("[*] load 100.csv\n");
	load_roster_csv("./test/resource/100.csv", roster);
	print_roster_list(roster);
	
	return 0;
}
