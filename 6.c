#include <stdio.h> 
int main() 
{ 
	const int arr[4][4][4] = 
	{ 
	{{0,0,0,0},{0,1,0,0},{0,1,0,0},{0,1,1,0}},{{0,0,0,0},{0,1,1,1},
	{0,1,0,0},{0,0,0,0}}, {{0,0,0,0},{0,1,1,0},{0,0,1,0},{0,0,1,0}},
	{{0,0,0,0},{0,0,1,0},{1,1,1,0},{0,0,0,0}
	} 
};
	int i,j,k;
	 for ( i= 0; i < 4; i++) 
	 { 
	 for ( j= 0; j < 4; j++) 
	{ 
	for ( k= 0; k < 4; k++) 
	{ 
	if (arr[j][i][k] == 1)
	 printf("��"); 
	 else 
	 printf(" "); 
	 } 
	printf(" "); 
	} printf("\n"); 
	} 
	return 0; 
	}

