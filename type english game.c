/* type english game */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
void show(void);
int main(void)
{										/* 模板: {"",""}, */
	struct data
	{
		char chin[10];
		char eng[20];
	} wh[30]={{"文學的","literary"},			          /* wh=warehouse */
			  {"小說","fiction"},
			  {"親切地","affectionately"},
			  {"出名地","famously"},
		 	  {"原本","originally"},
		 	  {"可行的","feasible"},
		 	  {"統治","reign"},
			  {"住宅","residence"},
			  {"漫步","roam"},
			  {"特色","feature"},
			  {"貓科動物","feline"},
			  {"癡迷","obsession"}, 
			  {"屏障","barrier"},
			  {"淹水","flooding"},
			  {"阻礙","setback"},
			  {"侵略性的","invasive"},
			  {"散發","emit"},
			  {"放棄","forgo"},
			  {"學費","tuition"},
			  {"加速","acceleration"},
			  {"貧瘠的","barren"},
			  {"肥沃的","fertile"},
			  {"荒涼的","desolate"},
			  {"稱號","designation"},
			  {"明顯的","stark"},
			  {"業餘的","amateur"},
			  {"區分","distinguish"},
			  {"驚訝的","astonished"},
			  {"欺騙","deception"},
			  {"補償","compensate"},};
			 
	int i,j,t;
	float c1,c2,t_used;  /* c1=全部字元,c2=正確字元,tu=time used */ 
	char vc,ed;					/* vc=vocabulary */
	clock_t start,end;
	
	st:
	system("cls");
	
	c1=0.0f,c2=0.0f;
	
	srand(time(NULL));
	show();
	vc=getch();
	start=clock();
	
	for(i=0;i<5;i++)
	{
		t=rand()%30;
		printf("%s %s: ",wh[t].chin,wh[t].eng);
		j=0;
		while(wh[t].eng[j]!='\0')
		{
			vc=getch();
			if(vc==wh[t].eng[j])
			{
				printf("%c",vc);
				c1++;
				c2++;
			}
			else
			{
				printf("~");
				c1++;
			}
			j++;
		}
		printf("\n");
	}
	end=clock();
	t_used=(float)(end-start)/CLK_TCK;
	
	printf("正確率:%.2f%%\n",c2/c1*100);
	printf("耗時:%.2f秒\n",t_used);
	
	printf("按空白鍵來重新開始遊戲,按Esc退出遊戲\n");
	while(1)
	{
		ed=getch();
		if(ed==32)
			goto st;
		else if(ed==27)
			break;
	}
	
	return 0;
 } 
 
 void show(void)
 {
 	printf("_________________________________\n");
 	printf("|            Type Game          |\n");
 	printf("|         此遊戲無法暫停        |\n"); 
 	printf("|      請使用英文小寫輸入       |\n");
 	printf("|  根據出現的字母輸入相符的英文 |\n");
 	printf("|     輸入錯誤的字母會顯示 ~    |\n");
 	printf("| 按任意建開始遊戲並開始計時Ou< |\n");
 	printf("|_______________________________|\n");
 }
