// Этот код позволяет подсчитать количество чётных элементов в массиве и вывести его в отсортированном по чётности порядке 
#include<stdio.h> 
main() 
{ 
	int n; int a[100]; int counter = 0;
	scanf("%d", &n); int buf;
	for (int i=0; i<n; i++) 
	{ 
		scanf("%d", &a[i]);
	} 
	for (int i=0; i<n; i++) 
	{ 
		printf("%3d", a[i]);
	} 
	printf("\n\n"); 
	for(int i = 0; i<n; i++) 
	{ 
		if (a[i]%2 == 0) 
		{ 
			counter +=1;
		} 	
	} 
	for(int i = 0; i<(n-1); i++) 
	{ 
		for(int j=0; j<(n-1); j++) 
		{ 
			if (a[j]%2 != 0) 
			{ 
				buf = a[j]; 
				a[j] = a[j+1]; 
				a[j+1] = buf;
			} 
		} 
	}
	for (int i=0; i<n; i++) 
	{ 
		printf("%3d", a[i]);
	} 
	printf("\n\n");
	printf(" Counter = %d", counter);
}
