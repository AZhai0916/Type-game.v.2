/* type english game */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
void show(void);
int main(void)
{										/* �ҪO: {"",""}, */
	struct data
	{
		char chin[10];
		char eng[20];
	} wh[30]={{"��Ǫ�","literary"},			          /* wh=warehouse */
			  {"�p��","fiction"},
			  {"�ˤ��a","affectionately"},
			  {"�X�W�a","famously"},
		 	  {"�쥻","originally"},
		 	  {"�i�檺","feasible"},
		 	  {"�Ϊv","reign"},
			  {"��v","residence"},
			  {"���B","roam"},
			  {"�S��","feature"},
			  {"�߬�ʪ�","feline"},
			  {"è�g","obsession"}, 
			  {"�̻�","barrier"},
			  {"�T��","flooding"},
			  {"��ê","setback"},
			  {"�I���ʪ�","invasive"},
			  {"���o","emit"},
			  {"���","forgo"},
			  {"�ǶO","tuition"},
			  {"�[�t","acceleration"},
			  {"�h�C��","barren"},
			  {"�ΨU��","fertile"},
			  {"��D��","desolate"},
			  {"�ٸ�","designation"},
			  {"���㪺","stark"},
			  {"�~�l��","amateur"},
			  {"�Ϥ�","distinguish"},
			  {"��Y��","astonished"},
			  {"���F","deception"},
			  {"���v","compensate"},};
			 
	int i,j,t;
	float c1,c2,t_used;  /* c1=�����r��,c2=���T�r��,tu=time used */ 
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
	
	printf("���T�v:%.2f%%\n",c2/c1*100);
	printf("�Ӯ�:%.2f��\n",t_used);
	
	printf("���ť���ӭ��s�}�l�C��,��Esc�h�X�C��\n");
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
 	printf("|         ���C���L�k�Ȱ�        |\n"); 
 	printf("|      �Шϥέ^��p�g��J       |\n");
 	printf("|  �ھڥX�{���r����J�۲Ū��^�� |\n");
 	printf("|     ��J���~���r���|��� ~    |\n");
 	printf("| �����N�ض}�l�C���ö}�l�p��Ou< |\n");
 	printf("|_______________________________|\n");
 }
