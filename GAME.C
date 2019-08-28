#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int i=0,w,q;
	int xg=30,yg=5;
	int d,y=3,n;
	int l1=1,l2=1,l3=1;
	int x1=4,y1=4,x2=9,y2=5,x3=3,y3=6;
	int score=0,hi=5000;
	int s=50,a=40,f=45;
	char var;
	clrscr();
	flushall();
	delay(100);
	gotoxy(1,3);
	printf("%c",201);
	for(i=0;i<34;i++)
	{
		printf("%c",205);
	}
	printf("%c",187);
	gotoxy(1,4);
	y=4;
	for(i=0;i<3;i++)
	{
		gotoxy(1,y++);
		cprintf("%c\n",186);
	}
	gotoxy(1,7);
	printf("%c",200);
	gotoxy(35,4);
	y=4;
	for(i=0;i<3;i++)
	{
		gotoxy(36,y++);
		cprintf("%c\n",186);
	}
	gotoxy(2,7);
	for(i=0;i<34;i++)
	{
		cprintf("%c",205);
	}
	printf("%c",188);
	gotoxy(xg,yg);
	printf("%c",185);
	while(1)
	{
		while(!kbhit())
		{
			gotoxy(40,5);
			printf("SCORE :  %d",score);
			gotoxy(40,7);
			if(hi<score)
				hi+=100;
			printf("HIGH SCORE  :%d",hi);
			if(l1==0)
			{
				l1=1;
				x1=3;
			}
			if(l2==0)
			{
				l2=1;
				x2=9;
			}
			if(l3==0)
			{
				l3=1;
				x3=4;
			}
			if(l1==1)
			{
				delay(f);
				gotoxy(x1,y1);
				cprintf("\b ");
				cprintf("%c",204);
				++x1;
				if(x1==34)
				{
					gotoxy(33,4);
					cprintf(" ");
						l1=0;
					score+=10;
					f-=5;
				}
			}
			if(l2==1)
			{
				delay(a);
				gotoxy(x2,y2);
				cprintf("\b ");
				cprintf("%c",204);
				++x2;
				if(x2==34)
				{
					gotoxy(33,5);
					cprintf(" ");
					l2=0;
					score+=10;
					a-=5;
				}
			}
			if(l3==1)
			{
				delay(s);
				gotoxy(x3,y3);
				cprintf("\b ");
				cprintf("%c",204);
				++x3;
				if(x3==34)
				{
					gotoxy(33,6);
					cprintf(" ");
					l3=0;
					score+=10;
					s-=5;
				}
			}
			switch(yg)
			{
				case 4:
					if(xg==x1&&yg==y1)
					{
						gotoxy(25,10);
						cprintf("\nGame over....");
						goto w;
					}
					break;
				case 5:
					if(xg==x2&&yg==y2)
					{
						gotoxy(25,10);
						cprintf("\nGame over....");
						goto w;
					}
					break;
				case 6:
					if(xg==x3&&yg==y3)
					{
						gotoxy(25,10);
						cprintf("\nGame over....");
						goto w;
					}
					break;
			}
		}
		var=getch();
		switch(var)
		{
		       case '2':
				if(!(yg>5))
				{
					gotoxy((xg),yg);
					printf(" ");
					gotoxy(xg,(++yg));
					cprintf("%c",185);
					flushall();
				}
				break;
		       case '8':
				if(yg>4)
				{
					gotoxy((xg),yg);
					printf(" ");
					gotoxy(xg,(--yg));
					cprintf("%c",185);
					flushall();
				}
				break;
		       case '4':
				if(xg>5)
				{
					gotoxy((xg),yg);
					printf(" ");
					gotoxy((xg-2),yg);
					cprintf("%c",185);
					xg=xg-2;
					flushall();
				}break;
		       case '6':
				if(xg<33)
				{
					gotoxy((xg),yg);
					printf(" ");
					gotoxy((xg+1),yg);
					cprintf("%c",185);
					xg=xg+1;
					flushall();
				}break;
			case'p':
				gotoxy(25,25);
				printf("Press any key to continue");
				getch();
				gotoxy(25,25);
				printf("                               ");

		}
		switch(yg)
		{
			case 4:
				if(xg==x1&&yg==y1)
				{
					gotoxy(25,10);
					cprintf("\nGame over....");
					goto w;
				}
				break;
				case 5:
					if(xg==x2&&yg==y2)
					{
						gotoxy(25,10);
						cprintf("\nGame over....");
						goto w;
					}
					break;

				case 6:
					if(xg==x3&&yg==y3)
					{
						gotoxy(25,10);
						cprintf("\nGame over....");
						goto w;
					}
			}
	}
	w:
	getch();
	return;
}









