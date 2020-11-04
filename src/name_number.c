
#include <stdio.h>
#include <string.h>
#include "roster.h"

void search_roster_name(Student student_roster[] , char name[])
{
  for ( int i = 0; i < 100; i++){
  if(strcmp(name , student_roster[i].name) == 0){
      printf("%sの出席番号は%d番です。\n" , name , student_roster[i].number); 
  }
  }
}
  void search_roster_number(Student student_roster[] , int number)
  {
    for ( int i = 0; i < 100; i++){
        if(student_roster[i].name[0] == '\0'){
          break;
        }
      if(number == student_roster[i].number){
	printf("%d番の生徒は%sです。\n",number ,student_roster[i].name);
    }
  }
  }
