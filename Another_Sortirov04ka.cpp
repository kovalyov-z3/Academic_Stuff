//Сортировка первой половины рандомного массива по возрастанию, а второй - по убыванию. 
#include<stdio.h> 
#include<time.h> 
#include<stdlib.h>
main() 
{ 
srand(time(NULL));
int n; int a[100];
scanf("%d", &n);
int buf; 
for(int i = 0; i<n; i++) 
{ 
	a[i]=rand()%11;
}
for(int i = 0; i<n; i++) 
{ 
	printf("%3d", a[i]);
}
printf("\n\n");
if (n%2 != 0) 
{ 
	for(int i = 0; i<(n-1); i++) 
	{ 
		for(int j = 0; j<(n/2-1); j++) 
		{ 
			if(a[j]>a[j+1]) 
			{ 
				buf = a[j]; 
				a[j] = a[j+1]; 
				a[j+1] = buf;
			} 
		} 
		for(int j = (n/2+1); j<(n-1); j++) 
		{ 
			if(a[j]<a[j+1]) 
			{ 
				buf = a[j]; 
				a[j] = a[j+1]; 
				a[j+1] = buf;
			} 
		}
		
	}
}
if (n%2 == 0) 
{ 
	for(int i =0; i<n-1; i++) 
	{
		for(int j=0; j<(n/2-1); j++) 
		{ 
			if(a[j]>a[j+1]) 
			{ 
				buf = a[j]; 
				a[j] = a[j+1]; 
				a[j+1] = buf;
			}
		} 
		for(int j=n/2; j<(n-1); j++) 
		{ 
			if(a[j]<a[j+1]) 
			{ 
				buf = a[j]; 
				a[j] = a[j+1]; 
				a[j+1] = buf;
			}
		}
	}
}
for(int i = 0; i<n; i++) 
{ 
	printf("%3d", a[i]);
}
printf("\n");
}