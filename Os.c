*/There are 3 student processes and 1 teacher process. Students are supposed to do their assignments and they need 3 things for that-pen,
paper and question paper. The teacher has an infinite supply of all the three things. One students has pen, another has paper and another
has question paper. The teacher places two things on a shared table and the student having the third complementary thing makes the 
assignment and tells the teacher on completion. The teacher then places another two things out of the three and again the student 
having the third thing makes the assignment and tells the teacher on completion. This cycle continues. WAP to synchronise the teacher 
and the students. /*
#include <stdio.h>
#include <string.h>
int student1=0,student2=0,student3=0 ;
	void student(int a)
    {
    	if(a==1)
    		{student1=1;
    		printf("Student 1 completed\n");
    		}
    	if(a==2)
    		{student2=1;
    	    printf("Student 2 completed\n");}
    	if(a==3)
    		{student3=1;
    		printf("Student 3 completed\n");
    		}
    }
int main()
{   printf("\t\tWhat do you want to keep in share table\n");
    printf("\tYou can keep pen, paper, question_paper\n\tYou should keep 2 items\n");
	char s1[50];
	char s2[50];
	q:
	printf("Enter first item\n");
	s1x:
	scanf("%s",s1);
	if((!(strcmp(s1,"pen")))||(!(strcmp(s1,"paper")))||(!(strcmp(s1,"question_paper"))));
	else
	{
		printf("Item must be only pen, paper, question_paper\n");
		goto s1x;
	}
	printf("Enter second item\n");
	s2x:
	scanf("%s",s2);
		if(((!(strcmp(s1,"pen")))||(!(strcmp(s1,"paper")))||(!(strcmp(s1,"question_paper"))))&&(strcmp(s1,s2)));
	else
	{   printf("Item must be only pen, paper, question_paper and not equal to first item\n");
		goto s2x;
	}
	if((!(strcmp(s1,"pen"))&&(!strcmp(s2,"paper")))||((!strcmp(s1,"paper"))&&(!strcmp(s2,"pen"))))
	{   if(student1==1)
	{
		printf("Student 1 is already completed please give different intems\n");
	}
	else{
	
		student(1);}
    }
    	if((!(strcmp(s1,"question_paper"))&&(!strcmp(s2,"paper")))||((!strcmp(s1,"paper"))&&(!strcmp(s2,"question_paper"))))
	{  if(student2==1)
	{
		printf("Student 2 is already completed please give different intems\n");
	}
	else
		{
		student(2);}
    }
    	if((!(strcmp(s1,"pen"))&&(!strcmp(s2,"question_paper")))||((!strcmp(s1,"question_paper"))&&(!strcmp(s2,"pen"))))
	{
		if(student3==1)
	{
		printf("Student 3 is already completed please give different intems\n");
	}
	else
		{
		student(3);}
    }
    //printf("%d\n",student1);
    //printf("%d\n",student2);
    //printf("%d\n",student3);
    if((student1==1)&&(student2==1)&&(student3==1))
    {
    	printf("done");
	}
	else
	{
		goto q;
	}
}
