#include<stdio.h>
int X0 = 1, X1 = 0, X2 = 0, X3 = 0;
void grafcet0();
void datapath0();
void ();
void Wi-Fi 連線();
void 數據上傳();
void 重新連線();
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

	if(X1 == 1)
	{
		if(Wi-Fi Connection Online)
		{
			X1 = 0;
			X2 = 1;
		}
		else if( Wi-Fi Connection Offline)
		{
			X1 = 0;
			X3 = 1;
		}
		return;
	}

	if((X2 == 1) && (New Session))
	{
		X2 = 0;
		X1 = 1;
		return;
	}

	if(X3 == 1)
	{
		if(Wi-Fi Connection Online)
		{
			X3 = 0;
			X2 = 1;
		}
		else if( Wi-Fi Connection Offline)
		{
			X3 = 0;
			X3 = 1;
		}
		return;
	}

}
void datapath0()
{
if(X0 == 1)
();
if(X1 == 1)
Wi-Fi 連線();
if(X2 == 1)
數據上傳();
if(X3 == 1)
重新連線();
}
void ()
{
printf(" activate !!\n");
}
void Wi-Fi 連線()
{
printf("Wi-Fi 連線 activate !!\n");
}
void 數據上傳()
{
printf("數據上傳 activate !!\n");
}
void 重新連線()
{
printf("重新連線 activate !!\n");
}
