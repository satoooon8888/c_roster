typedef struct {
	int number;
	char name[128];
	char school[128];
} Student;

void load_roster_csv(const char* filename, Student roster[]);
void print_roster_list(Student roster[]);
// void sort_roster_by_name(Student roster[]);
// void sort_roster_by_number(Student roster[]);
// void search_roster_number();
// void search_roster_name();
// void search_roster_JHS();
