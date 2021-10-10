#include <stdio.h>
 
int prime(int n)
{
	int prime;
	prime = 0;
	for (int i=1; i<=n; i++)
    {
		if ((n % i) == 0)
        prime++;
	}
	return prime;
}

int main()
{
	int n;
	scanf("%d", &n);
	
    for(int i=2; i<=n; i++)
    {
		if (prime(i) == 2)
        {
            printf(" * ");
	    }
		else
        { 
            printf(" %d ", i);
        }
    }

    return 0;
}