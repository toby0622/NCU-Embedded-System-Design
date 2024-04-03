#include<stdio.h>
int X0 = 1, X1 = 0, X2 = 0, X3 = 0;
void grafcet0();
void datapath0();
void action();
void 等待網頁請求();
void 處理網頁請求();
void 發送完成響應();
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

	if((X1 == 1) && (Request Received))
	{
		X1 = 0;
		X2 = 1;
		return;
	}

	if((X2 == 1) && (Request Complete))
	{
		X2 = 0;
		X3 = 1;
		return;
	}

	if(X3 == 1)
	{
		if(Module Exit)
		{
			X3 = 0;
			X0 = 1;
		}
		else if( New Session)
		{
			X3 = 0;
			X1 = 1;
		}
		return;
	}

}
void datapath0()
{
if(X0 == 1)
action();
if(X1 == 1)
等待網頁請求();
if(X2 == 1)
處理網頁請求();
if(X3 == 1)
發送完成響應();
}
void action()
{
printf("action activate !!\n");
}
void 等待網頁請求()
{
printf("等待網頁請求 activate !!\n");
}
void 處理網頁請求()
{
printf("處理網頁請求 activate !!\n");
}
void 發送完成響應()
{
printf("發送完成響應 activate !!\n");
}
