#include <stdio.h>

int main ()
{
	int a[7], i, nshoes, size, j, temp;
	
	printf("Enter number of shoes in store >> ");
	scanf ("%d", &nshoes);
	printf("Enter shoes size that available in store >>\n ");
	for(i=0; i<nshoes; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<nshoes-1; i++)
		{
			for(j=0; j<nshoes-1; j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		} 
		printf("\nShoes are arranged in ascending order.\n");
		
		for(i=0; i<nshoes; i++)
			printf("%d ",a[i]);
	
	printf("\nEnter your shoes size >> ");
	scanf("%d", &size);
	
	for (i=0; i<nshoes; i++)
	{
		if(a[i]==size)
		{
			printf ("Shoes found in store. ");
			return 0;
		}
	}
	printf ("Shoes didn't found.");	
}

