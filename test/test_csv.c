#include <stdio.h>
#include <string.h>
#include "../src/roster.h"

int main(void) {
	Student roster[100];
	int passing = 1;

	printf("[*] load test.csv\n");
	load_roster_csv("./test/resource/test.csv", roster);

	printf("[TEST] roster[0].number == 0\n");
	if (roster[0].number != 0) {
		printf("[FAIL] invalid roster[0].number: %d\n", roster[0].number);
		passing = 0;
		    
	}
	printf("[TEST] roster[0].name == \"A村　太郎\"\n");
	if (strcmp(roster[0].name, "A村　太郎") != 0) {
		printf("[FAIL] invalid roster[0].name: %s\n", roster[0].name);
		passing = 0;
	}
	printf("[TEST] roster[0].school == \"茨城中学\"\n");
	if (strcmp(roster[0].school, "茨城中学") != 0) {
		printf("[FAIL] invalid roster[0].school: %s\n", roster[0].school);
		passing = 0;
	}

	printf("[TEST] roster[5].number == 5\n");
	if (roster[5].number != 5) {
		printf("[FAIL] invalid roster[5].number: %d\n", roster[5].number);
		passing = 0;
	}
	printf("[TEST] roster[5].name == \"F坂　太郎\"\n");
	if (strcmp(roster[5].name, "F坂　太郎") != 0) {
		printf("[FAIL] invalid roster[4].name: %s\n", roster[5].name);
		passing = 0;
	}
	printf("[TEST] roster[5].school == \"茨城中学\"\n");
	if (strcmp(roster[5].school, "茨城中学") != 0) {
		printf("[FAIL] invalid roster[5].school: %s\n", roster[5].school);
		passing = 0;
	}


	init_roster(roster);
	printf("[*] load empty.csv\n");
	load_roster_csv("./test/resource/empty.csv", roster);
	printf("[TEST] roster[0].name == NULL\n");
	if (strcmp(roster[0].name, "") != 0) {
		printf("[FAIL] invalid roster[0].name: %s\n", roster[0].name);
		passing = 0;
	}

	init_roster(roster);
	printf("[*] load 100.csv\n");
	load_roster_csv("./test/resource/100.csv", roster);

	printf("[TEST] roster[0].number == 1\n");
	if (roster[0].number != 1) {
		printf("[FAIL] invalid roster[0].number: %d\n", roster[0].number);
		passing = 0;
	}
	printf("[TEST] roster[0].name == \"1郎丸　太郎\"\n");
	if (strcmp(roster[0].name, "1郎丸　太郎") != 0) {
		printf("[FAIL] invalid roster[0].name: %s\n", roster[0].name);
		passing = 0;
	}
	printf("[TEST] roster[0].school == \"第1中学\"\n");
	if (strcmp(roster[0].school, "第1中学") != 0) {
		printf("[FAIL] invalid roster[0].school: %s\n", roster[0].school);
		passing = 0;
	}

	printf("[TEST] roster[99].number == 100\n");
	if (roster[99].number != 100) {
		printf("[FAIL] invalid roster[99].number: %d\n", roster[99].number);
		passing = 0;
	}
	printf("[TEST] roster[99].name == \"100郎丸　太郎\"\n");
	if (strcmp(roster[99].name, "100郎丸　太郎") != 0) {
		printf("[FAIL] invalid roster[99].name: %s\n", roster[99].name);
		passing = 0;
	}
	printf("[TEST] roster[99].school == \"第100中学\"\n");
	if (strcmp(roster[99].school, "第100中学") != 0) {
		printf("[FAIL] invalid roster[99].school: %s\n", roster[99].school);
		passing = 0;	    
	}
	
   	if (passing) {
		printf("[RESULT] OK!\n");
	} else {
		printf("[RESULT] failed...\n");
	}
	return 0;
}
