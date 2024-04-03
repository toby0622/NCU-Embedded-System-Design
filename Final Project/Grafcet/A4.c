#include<stdio.h>
int X0 = 1, X1 = 0, X2 = 0, X3 = 0;
void grafcet0();
void datapath0();
void action();
void 新增紀錄();
void 刪除紀錄();
void 查詢紀錄();
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

	if(X0 == 1)
	{
		if(Module Initialization Complete)
		{
			X0 = 0;
			X1 = 1;
		}
		else if(Module Initialization Complete)
		{
			X0 = 0;
			X2 = 1;
		}
		return;
	}

	if(X1 == 1 && (Record Update))
	{
		X1 = 0;
		X3 = 1;
		return;
	}

	if(X2 == 1 && (Record Update))
	{
		X2 = 0;
		X3 = 1;
		return;
	}


	if((X3 == 1) && (New Process))
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
新增紀錄();
if(X2 == 1)
刪除紀錄();
if(X3 == 1)
查詢紀錄();
}
void action()
{
printf("action activate !!\n");
}
void 新增紀錄()
{
printf("新增紀錄 activate !!\n");
}
void 刪除紀錄()
{
printf("刪除紀錄 activate !!\n");
}
void 查詢紀錄()
{
printf("查詢紀錄 activate !!\n");
}
