#include <stdio.h>
#include <string.h>
#include "../src/roster.h"

int main(void) {
	Student roster[100];

	printf("目視で確認してください\n");
	printf("[*] load test.csv\n");
	load_roster_csv("./test/resource/test.csv", roster);
	printf("[*] JHS: 茨城中学\n");
	search_roster_JHS(roster, "茨城中学");
    printf("[*] name: D森　太郎\n");
	search_roster_name(roster, "D森　太郎");
	printf("[*] number: 5\n");
	search_roster_number(roster, 5);
	
	init_roster(roster);
	printf("[*] load empty.csv\n");
	load_roster_csv("./test/resource/empty.csv", roster);
	printf("[*] JHS: 虚無中学\n");
	search_roster_JHS(roster, "虚無中学");
	printf("[*] name: 虚無　太郎\n");
	search_roster_name(roster, "虚無　太郎");
	printf("[*] number: 0\n");
	search_roster_number(roster, 0);
	
	init_roster(roster);
	printf("[*] load 100.csv\n");
	load_roster_csv("./test/resource/100.csv", roster);
	printf("[*] JHS: 第100中学\n");
	search_roster_JHS(roster, "第100中学");
	printf("[*] name: 100郎丸　太郎\n");
	search_roster_name(roster, "100郎丸　太郎");
	printf("[*] number: 100\n");
	search_roster_number(roster, 100);
	
	return 0;
}
