#include <stdio.h>
#include <string.h>

void vypisSachovnici(int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if(i % 2 == 0)
			{
				if (j % 2 == 1)
				{
					printf("0");
				}
				else
					printf("1");
			}
			else
			{
				if (j % 2 == 0)
				{
					printf("0");
				}
				else
					printf("1");
			}
		}
		printf("\n");
	}
}

int toUpper(char c)
{
	return (c >= 'a' && c <= 'z') ? c = c - 'a' + 'A': c; 
}
int main(int argc, char const *argv[])
{
	char *jmeno = "Vit Sebela Prvni";
	int len = strlen(jmeno);
	int velikost_sachovnice = 10;
	vypisSachovnici(velikost_sachovnice);
	printf("\n");
	for (int i = 0; i <= len; i++)
	{
		printf("%c", toUpper(jmeno[i]));
	}
	printf("\n");
	return 0;
}