#include <stdio.h>
#include <string.h>
#include "roster.h"

void search_number_name(Student student){
	printf("%d %s\n",student.number,student.name);
}

void search_roster_JHS(Student student[],char jhs[]){
	int i;
	for(i = 0;i < 100;i++)
	{
		if(strcmp(jhs,student[i].school)==0){
			search_number_name(student[i]);
		}
		/*for(j = 0; j < 128 && jhs[j] == student[i].school[j];j++)
		{
			if(jhs[j] == student[i].school[j] && jhs[j] == '\n')
			{
				search_number_name(student[j]);
			}
			else
			{
				printf("一致する学生はいません。");
			}
		}*/
	}
}
