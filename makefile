roster:
	echo "not implemented..."

test_csv:
	gcc test/test_csv.c src/csv.c -o test_csv.o
	./test_csv.o
	rm ./test_csv.o

test_print:
	gcc test/test_print.c src/csv.c src/roster_list.c -o test_print.o
	./test_print.o
	rm ./test_print.o

test_sort:
	gcc test/test_sort.c src/csv.c src/sort_roster.c src/roster_list.c -o test_sort.o
	./test_sort.o
	rm ./test_sort.o

test_search:
	gcc test/test_search.c src/csv.c src/search_roster_JHS.c src/name_number.c -o test_search.o
	./test_search.o
	rm ./test_search.o
