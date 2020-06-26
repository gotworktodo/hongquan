/*#include<stdio.h>
#define SIZE 10
int mtxA[]={57,2,63,4,9,6,7,8,11,19};
int i,j;
void sap_xep(bool tangdan)
{
	if(tangdan == true) //sap xep tang dan
	{
		
		for(i =0;i<=SIZE;i++)
		{
		for(j=i+1;j<=(SIZE-1); j++)
		{
			if(mtxA[i]<mtxA[j])
			{
				int temp = mtxA[i];
				mtxA[i]= mtxA[j];
				mtxA[j]= temp;
			}
		}
		
		}
		for(i=0;i<SIZE;i++)
		{
			printf("mtxA[%d]=%d\n", i,mtxA[i]);
		}
	}
}
int main()
{
	sap_xep(true);
	return 0;
}*/
#include<stdio.h>
#define SIZE 10
int mtxA[4][4]={
//cot 0,1,2,3	
      4,6,8,10,    //hang 0
      3,5,7,9,     // hang 1
      11,12,14,16, // hang 2
      15,17,28,35};//hang 3
#define row 0
#define column 1
int main()
{
	for(int i=0;i<4;i++)
	{
		for (int j=0;j<4;j++)
		{
		printf("%d\n",mtxA[i][j]);	
		}
	}
	
	return 0;
}