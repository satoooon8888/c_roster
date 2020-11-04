
#include <stdio.h>
#include <string.h>
typedef struct {
        int number;
        char name[128];
        char school[128];
} Student;

void search_roster_name(Student student_roster[] , char name[])
{
\  for ( int i = 0; i < 100; i++){
  if(strcmp(name , student_roster[i].name) == 0){
      printf("%cの出席番号は%d番です。\n" , name , number); 
  }
}
  void search_roster_number(Student student_roster[] , int number)
  {
    for ( int i = 0; i < 100; i++){
      if(number == student_roster[i].number);{
	printf("%d番の生徒は%cです。\n",number ,name); 
    }
  }
  
  
      
	
    
    
