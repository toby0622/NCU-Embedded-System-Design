#include<stdio.h>
int X0 = 1, X1 = 0, X2 = 0, X3 = 0, X4 = 0, X5 = 0, X6 = 0;
void grafcet0();
void datapath0();
void action();
void Wi-Fi 管理();
void Web 伺服器操作();
void 處理用戶請求();
void 指紋識別();
void 數據管理();
void 結果顯示();
void main()
{
printf("X0 = %d,X1 = %d,X2 = %d,X3 = %d,X4 = %d,X5 = %d,X6 = %d\n",X0 ,X1 ,X2 ,X3 ,X4 ,X5 ,X6 );
while(1)
{
datapath0();
grafcet0();
printf("X0 = %d,X1 = %d,X2 = %d,X3 = %d,X4 = %d,X5 = %d,X6 = %d\n",X0 ,X1 ,X2 ,X3 ,X4 ,X5 ,X6 );
}
}
void grafcet0()
{

	if((X0 == 1) && (System Initialization Complete))
	{
		X0 = 0;
		X1 = 1;
		return;
	}

	if((X1 == 1) && (Wi-Fi Connection Online))
	{
		X1 = 0;
		X2 = 1;
		return;
	}

	if((X2 == 1) && (Web Server Online))
	{
		X2 = 0;
		X3 = 1;
		return;
	}

	if((X3 == 1) && (User Request Complete))
	{
		X3 = 0;
		X4 = 1;
		return;
	}

	if((X4 == 1) && (Fingerprint Recognition Complete))
	{
		X4 = 0;
		X5 = 1;
		return;
	}

	if((X5 == 1) && (Database Record Update))
	{
		X5 = 0;
		X6 = 1;
		return;
	}

	if(X6 == 1)
	{
		if(New Process)
		{
			X6 = 0;
			X1 = 1;
		}
		else if( System Exit)
		{
			X6 = 0;
			X0 = 1;
		}
		return;
	}

}
void datapath0()
{
if(X0 == 1)
action();
if(X1 == 1)
Wi-Fi 管理();
if(X2 == 1)
Web 伺服器操作();
if(X3 == 1)
處理用戶請求();
if(X4 == 1)
指紋識別();
if(X5 == 1)
數據管理();
if(X6 == 1)
結果顯示();
}
void action()
{
printf("action activate !!\n");
}
void Wi-Fi 管理()
{
printf("Wi-Fi 管理 activate !!\n");
}
void Web 伺服器操作()
{
printf("Web 伺服器操作 activate !!\n");
}
void 處理用戶請求()
{
printf("處理用戶請求 activate !!\n");
}
void 指紋識別()
{
printf("指紋識別 activate !!\n");
}
void 數據管理()
{
printf("數據管理 activate !!\n");
}
void 結果顯示()
{
printf("結果顯示 activate !!\n");
}
