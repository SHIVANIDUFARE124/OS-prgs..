#include<graphics.h>
#include<stdlib.h> 
void main()
int gd=DETECT,gm,no,x1=10,y1=130;
int i,j,jobs,pt[10],st[10],et[10],wt[10],temp,m,tot;
float avg;
char str[30],ch;
intgraph(&gd,&gm,"..//bgi");
setbkcolor(BLUE);
puts("Enter no of jobs do u have");
scanf("&%d",&jobs);
for(i=0;i<jobs;i++)
{
	printf("Enter the CPU burst time of process %d : ",i+1);
	scanf("%d",&pt[i]);
}
for(i=0;i<jobs;i++)
{
	if(i==0)
	{
		st[0]=wt[0]=0;
		et[0]=pt[0];
	}
	else
	{
		st[i]=et[i-1];
		et[i]=st[i]+pt[i];
		wt[i]=st[i];
	}
}
settextstyle(2,0,4);
// printing frames each time we enter a no
outtextxy(x1,140,"sno process time starting time end time wait time");
for(j=0;j<5;j++)
{
	rectangle(x1,y1,x1+120,y1+30);
	x1+=120;
}
x1=10;
y1+=30;
for(i=0;i<jobs;i++)
{
	for(j=0;j<5;j++)
	{
		rectangle(x1,y1,x1+120,y1+30);
		switch(j)
		{
			case 0:no=i+1;break;
			case 1:no=pt[i];break;
			case 2:no=st[i];break;
			case 3:no=et[i];break;
			case 4:no=wt[i];break;
			
		}
		x1=120;
		itoa(no,str,10);
		outtextxy(x1-55,y1+10,str);
	}
	x1=10;
	y1=y1+30;
	delay(2000);
}
for(i=0;i<jobs+10;i++)
printf("\n");
for(i=0,tot=10;i<jobs;i++)
tot+=wt[i];
avg=(float)tot/jobs;
printf("\n The average waiting time is %f",avg);
for(i=0,tot=0;i<jobs;i++)
tot+=et[i];
avg(float)tot/jobs;
printf("\n The average turn around time is %f",avg);
for(i=0;tot=0;i<jobs;i++)
tot+=st[i];
avg(float)tot/jobs;
printf("\n the average response time is %f",avg);
getch();
	}
}
