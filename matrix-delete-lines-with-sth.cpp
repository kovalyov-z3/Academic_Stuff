// Этот код удаляет строки в матрице размером m*n, где встречается строго больше 3  чётных элементов
#include<stdio.h> 
#include<time.h> 
#include<stdlib.h>
main() 
{
int n; int m; int a[100][100];
int buf_a[100][100];
scanf("%d", &n); 
scanf("%d", &m); 
int counter = 0; 
int k = 0; 
srand(time(NULL));
for(int i=0; i<n; i++) 
{ 
	for(int j =0; j<m; j++) 
	{ 
		a[i][j] = rand()%11;
	}
}
for(int i=0; i<n; i++) 
{ 
	for(int j =0; j<m; j++) 
	{ 
		printf("%3d", a[i][j]);
	}
	printf("\n");
}
printf("\n\n"); 
for(int i=0; i<n; i++) 
{ 
	for(int j =0; j<m; j++) 
	{ 
		if (a[i][j] % 2 == 0) 
			counter +=1;
	}
	if (counter <= 3) 
	{ 
		for(int q = 0; q<m; q++) 
		{ 
			buf_a[k][q] = a[i][q];
		} 
		k++;
	}
	counter = 0;
}
for(int i=0; i<k; i++) 
{ 
	for(int j =0; j<m; j++) 
	{ 
		printf("%3d", buf_a[i][j]);
	}
	printf("\n");
}
}
