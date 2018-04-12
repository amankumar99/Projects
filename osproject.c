#include<stdio.h>

main()
{
	int a[4],b[4],ct[4],tat[4],wt[4],s=0;
	int avgw,avgt;
    int i,j;
    for(i=0;i<4;i++)
    {
    	printf("Enter Arrival time for process P[%d]",i+1);
    	scanf("%d",&a[i]);
    	printf("Enter Burst time for process p[%d]",i+1);
    	scanf("%d",&b[i]);
	}

	 printf("\nProcess			Arrival Time			Burst Time\n");
	 for(i=0;i<4;i++)
	 {
	 	printf("P[%d]			%d				%d",i+1,a[i],b[i]);
	 	printf("\n");
	 	s=s+b[i];
	 }
	 printf("\n%");

	//logic
	 int t,c=0;
	 t=a[0];
	 for(t=a[0];t<s;t++)
	 {
	 	c=0;
	 	for(j=0;j<4;j++)
	 	{
	 	if(a[j]<=t)
		c=c+1;
		if(c>1)
		{
			//Priority
		}
		else
		{
			// 1 only available process will run.
			ct[j]=ct[j]+b[j];
			t=t+b[j];
			printf("%d",ct[j]);
			break;
		}

		ct[i]=ct[j]+b[j];

		}
	 	//t=t+b[];
	 }

}
