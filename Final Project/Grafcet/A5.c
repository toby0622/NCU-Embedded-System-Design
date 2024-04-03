#include<stdio.h>
int X0 = 1, X1 = 0, X2 = 0, X3 = 0;
void grafcet0();
void datapath0();
void action();
void 等待顯示命令();
void 處理顯示內容();
void 更新顯示器();
void main()
{
printf("X0 = %d,X1 = %d,X2 = %d,X3 = %d\n",X0 ,X1 ,X2 ,X3 );
while(1)
{
datapath0();
grafcet0();
printf("X0 = %d,X1 = %d,X2 = %d,X3 = %d\n",X0 ,X1 ,X2 ,X3 );
}
}
void grafcet0()
{

	if((X0 == 1) && (Module Initialization Complete))
	{
		X0 = 0;
		X1 = 1;
		return;
	}

	if((X1 == 1) && (Display Signal Retrieved))
	{
		X1 = 0;
		X2 = 1;
		return;
	}

	if((X2 == 1) && (Content Manipulation Complete))
	{
		X2 = 0;
		X3 = 1;
		return;
	}

	if((X3 == 1) && (New Display Signal))
	{
		X3 = 0;
		X0 = 1;
		return;
	}

}
void datapath0()
{
if(X0 == 1)
action();
if(X1 == 1)
等待顯示命令();
if(X2 == 1)
處理顯示內容();
if(X3 == 1)
更新顯示器();
}
void action()
{
printf("action activate !!\n");
}
void 等待顯示命令()
{
printf("等待顯示命令 activate !!\n");
}
void 處理顯示內容()
{
printf("處理顯示內容 activate !!\n");
}
void 更新顯示器()
{
printf("更新顯示器 activate !!\n");
}
