*/ Two types of people can enter into a library- students and teachers. After entering the library, the visitor searches for the required
books and gets them. In order to get them issued, he goes to the single CPU which is there to process the issuing of books. Two types of
queues are there at the counter-one for students and one for teachers. A student goes and stands at the tail of the queue for students
and similarly the teacher goes and stands at the tail of the queue for teachers (FIFO). If a student is being serviced and a teacher 
arrives at the counter,he would be the next person to get service (PRIORITY-non preemptive).If two teachers arrive at the same time, 
they will stand in their queue to get service (FIFO). WAP to ensure that the system works in a non-chaotic manner. /*
#include<stdio.h>
int no_studen=0;
int no_teach=0;
main()
{
	printf("Enter no of students : ");
    scanf("%d",&no_studen);
    printf("Enter no of faculty : ");
    scanf("%d",&no_teach);
    int at_s[no_studen];
    int s[no_studen];
    int at_t[no_teach];
    int t[no_teach];
    int i;
    for(i=0;i<no_studen;i++)
    {
    	printf("at of %d student :  ",i);
    	s[i]=i;
    	scanf("%d",&at_s[i]);
	}
	    for(i=0;i<no_teach;i++)
    {
    	printf("at of %d faculty :  ",i);
    	t[i]=i;
    	scanf("%d",&at_t[i]);
	}
	int max;
	int c;
	int checks[no_studen];
		  for(c=0;c<no_studen;c++)
	  {
	  	checks[c]=0;
	  	if(max<at_s[c])
	  	{
	  		max=at_s[c];
		  }
	  }
	int checkt[no_teach];
		  for(c=0;c<no_teach;c++)
	  {
	  	checkt[c]=0;
	  	if(max<at_t[c])
	  	{
	  		max=at_t[c];
		  }
	  }
	for(i=1;i<=max;i++)
	{ int fs[no_studen];
	  int fsp=0;
	  int j;
	  for(j=0;j<no_studen;j++)
	  {
	  	fs[j]=0;
	  }
		for(j=0;j<no_studen;j++)
		{
			if((at_s[j]<=i)&&(checks[j]==0))
			{
			fs[fsp]=j;
			fsp++;
		}
		}
	int ft[no_teach];
	  int ftp=0;
	for(j=0;j<no_teach;j++)
	  {
	  	ft[j]=0;
	  }
		for(j=0;j<no_teach;j++)
		{
			if((at_t[j]<=i)&&(checkt[j]==0))
			{
			ft[ftp]=j;
			ftp++;
		}
		}
		for(j=0;j<ftp;j++)
		{
			printf("faculty %d has completed\n",ft[j]);
			checkt[(ft[j])]=1;
		}
				for(j=0;j<fsp;j++)
		{
			printf("sudent %d has completed\n",fs[j]);
			checks[(fs[j])]=1;
		}
	}
	
}
