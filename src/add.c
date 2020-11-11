#include "roster.h"
#include <string.h>

bool add_student(Student roster[], Student student) {
	int length = 100;
	for (int i = 0; i < 100; i++) {
		if (roster[i].name[0] == '\0') {
			length = i;
			break;
		}
	}
	if (length == 100) {
		return 1;
	}
	roster[length].number = student.number;
	strncpy(roster[length].name, student.name, 128);
	strncpy(roster[length].school, student.school, 128);
	return 0;
}
