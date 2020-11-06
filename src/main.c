#include <stdio.h>
#include <stdbool.h>
#include "roster.h"
/*
・出席番号順(昇順)に名簿情報を一覧表示
・氏名順(辞書順,昇順)に名簿情報を一覧表示
・出席番号を入力すると氏名を表示
・氏名を入力すると出席番号を表示
・出身中学を入力すると,該当する人物の出席番号・氏名を一覧表示
*/
void menu(Student roster[]) {
	int choice = 0;
	char input_school[128];
	char input_name[128];
   	int input_number = 0;
	while (1) {
		printf(
			   "\n"
			   "1. 一覧を表示\n"
			   "2. 出席番号順の一覧\n"
			   "3. 氏名順の一覧\n"
			   "4. 出席番号で検索\n"
			   "5. 氏名で検索\n"
			   "6. 中学で検索\n"
			   "7. 終了\n"
			   "Input: "
			   );
		scanf("%d%*c", &choice);
		switch (choice) {
		case 1:
		    print_roster_list(roster);
			break;
		case 2:
			sort_roster_by_number(roster);
			break;
		case 3:
			sort_roster_by_name(roster);
			break;
		case 4:
			printf("出席番号: ");
			scanf("%d%*c", &input_number);
			search_roster_number(roster, input_number);
			break;
		case 5:
			printf("氏名: ");
			scanf("%127s%*c", input_name);
			search_roster_name(roster, input_name);
			break;
		case 6:
			printf("学校名: ");
			scanf("%127s%*c", input_school);
			search_roster_JHS(roster, input_school);
			break;
		case 7:
			return;
		}
	}
}

int main(int argc, char* argv[]) {
	if (argc != 2) {
		printf("Usage: ./roster csv_path\n");
		return 1;
	}
	Student roster[100];
	bool csv_opening_failed = false;
	csv_opening_failed = load_roster_csv(argv[1], roster);
	if (csv_opening_failed) {
		return 1;
	}
	menu(roster);
	return 0;
}
