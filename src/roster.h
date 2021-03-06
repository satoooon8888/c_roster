#include <stdbool.h>
typedef struct {
	int number;
	char name[128];
	char school[128];
} Student;

void init_roster(Student roster[]);
bool load_roster_csv(const char* filename, Student roster[]);
bool save_roster_csv(const char* filename, Student roster[]);

bool add_student(Student roster[], Student student);

void print_roster_list(Student roster[]);
void sort_roster_by_name(Student roster[]);
void sort_roster_by_number(Student roster[]);
void search_roster_number(Student student_roster[], int number);
void search_roster_name(Student student_roster[], char name[]);
void search_roster_JHS(Student student_roster[], char jhs[]);
