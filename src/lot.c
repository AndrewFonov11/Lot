// 'Lot' programming language

// Released into the public domain under Unlicense

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	srand(time(NULL));
	int com,com_mem,com_akt = 1,a,b,c,rnd,i,j,drnda,drndb;
	char str[25],var_n,io,var_n2;
	printf("\n'Lot' - programming language");
	printf("\nPUBLIC DOMAIN SOFTWARE");
	do
	{
		if (com_akt == 1)
		{
			printf("\n\n~");
			scanf("%d",&com);
		}
		com_akt = 1;
		if (com == 100)
		{
			printf("\n:");
			scanf("%s",&str);
			printf("\n%s",str);
		}
		else if (com == 150) {
			printf("\n-");
			scanf(" %c",&var_n);
			if (var_n == 'a')
			{
				printf("\n%d",a);
			}
			else if (var_n == 'b')
			{
				printf("\n%d",b);
			}
			else if (var_n == 'c')
			{
				printf("\n%d",c);
			}
			else
			{
				printf("\nError! Invalid variable name. Only - a,b,c are available");
			}
		}
		else if (com == 200)
		{
			printf("\n-");
			scanf(" %c",&var_n);
			if (var_n == 'a')
			{
				printf("\n:");
				scanf("%d",&a);
			}
			else if (var_n == 'b')
			{
				printf("\n:");
				scanf("%d",&b);
			}
			else if (var_n == 'c')
			{
				printf("\n:");
				scanf("%d",&c);
			} 
			else
			{
				printf("\nError! Invalid variable name. Only - a,b,c are available");
			}
		}
		else if (com == 300)
		{
			printf("\n-");
			scanf(" %c",&var_n);
			if (var_n == 'a')
			{
				a++;
			}
			else if (var_n == 'b')
			{
				b++;
			}
			else if (var_n == 'c')
			{
				c++;
			}
			else
			{
				printf("\nError! Invalid variable name. Only - a,b,c are available");
			}
			printf("\nOk");
		}
		else if (com == 350)
		{
			printf("\n-");
			scanf(" %c",&var_n);
			if (var_n == 'a')
			{
				a--;
			}
			else if (var_n == 'b')
			{
				b--;
			}
			else if (var_n == 'c')
			{
				c--;
			} 
			else 
			{
				printf("\nError! Invalid variable name. Only - a,b,c are available");
			}
			printf("\nOk");
		}
		else if (com == 400)
		{
			printf("\n=");
			scanf("%d",&drnda);
			printf("\n=");
			scanf("%d",&drndb);
			printf("\n-");
			scanf(" %c",&var_n);
			rnd = rand() * (drnda - drndb) / RAND_MAX + drndb;
			if (var_n == 'a')
			{
				a = rnd;
			}
			else if (var_n == 'b')
			{
				b = rnd;
			}
			else if (var_n == 'c')
			{
				c = rnd;
			} 
			else 
			{
				printf("\nError! Invalid variable name. Only - a,b,c are available");
			}
		}
		else if (com == 500)
		{
			printf("\n=");
			scanf(" %d",&j);
			printf("\n-");
			scanf(" %c",&var_n);
			if (var_n == 'a')
			{
				for (i = 1; i < j; i++)
				{
					a++;
				}
			}
			else if (var_n == 'b')
			{
				for (i = 1; i < j; i++)
				{
					b++;
				}
			}
			else if (var_n == 'c')
			{
				for (i = 1; i < j; i++)
				{
					c++;
				}
			} 
			else 
			{
				printf("\nError! Invalid variable name. Only - a,b,c are available");
			}
		}
		else if (com == 550)
		{
			printf("\n=");
			scanf(" %d",&j);
			printf("\n-");
			scanf(" %c",&var_n);
			if (var_n == 'a')
			{
				for (i = 1; i < j; i++)
				{
					a--;
				}
			}
			else if (var_n == 'b')
			{
				for (i = 1; i < j; i++)
				{
					b--;
				}
			}
			else if (var_n == 'c')
			{
				for (i = 1; i < j; i++)
				{
					c--;
				}
			} 
			else 
			{
				printf("\nError! Invalid variable name. Only - a,b,c are available");
			}
		}
		else if (com == 600)
		{
			printf("\n-");
			scanf(" %c",&var_n);
			if (var_n == 'a')
			{
				printf("\n-");
				scanf(" %c",&var_n);
				if (var_n == 'a')
				{
					a += a;
				}
				else if (var_n == 'b')
				{
					a += b;
				}
				else if (var_n == 'c')
				{
					a += c;
				} 
				else 
				{
					printf("\nError! Invalid variable name. Only - a,b,c are available");
				}
			}
			else if (var_n == 'b')
			{
				printf("\n-");
				scanf(" %c",&var_n);
				if (var_n == 'a')
				{
					b += a;
				}
				else if (var_n == 'b')
				{
					b += b;
				}
				else if (var_n == 'c')
				{
					b += c;
				} 
				else 
				{
					printf("\nError! Invalid variable name. Only - a,b,c are available");
				}
			}
			else if (var_n == 'c')
			{
				printf("\n-");
				scanf(" %c",&var_n);
				if (var_n == 'a')
				{
					c += a;
				}
				else if (var_n == 'b')
				{
					c += b;
				}
				else if (var_n == 'c')
				{
					c += c;
				} 
				else 
				{
					printf("\nError! Invalid variable name. Only - a,b,c are available");
				}
			} 
			else 
			{
				printf("\nError! Invalid variable name. Only - a,b,c are available");
			}
		}
		else if (com == 650)
		{
			printf("\n-");
			scanf(" %c",&var_n);
			if (var_n == 'a')
			{
				printf("\n-");
				scanf(" %c",&var_n);
				if (var_n == 'a')
				{
					a -= a;
				}
				else if (var_n == 'b')
				{
					a -= b;
				}
				else if (var_n == 'c')
				{
					a -= c;
				} 
				else 
				{
					printf("\nError! Invalid variable name. Only - a,b,c are available");
				}
			}
			else if (var_n == 'b')
			{
				printf("\n-");
				scanf(" %c",&var_n);
				if (var_n == 'a')
				{
					b -= a;
				}
				else if (var_n == 'b')
				{
					b -= b;
				}
				else if (var_n == 'c')
				{
					b -= c;
				} 
				else 
				{
					printf("\nError! Invalid variable name. Only - a,b,c are available");
				}
			}
			else if (var_n == 'c')
			{
				printf("\n-");
				scanf(" %c",&var_n);
				if (var_n == 'a')
				{
					c -= a;
				}
				else if (var_n == 'b')
				{
					c -= b;
				}
				else if (var_n == 'c')
				{
					c -= c;
				} 
				else 
				{
					printf("\nError! Invalid variable name. Only - a,b,c are available");
				}
			} 
			else 
			{
				printf("\nError! Invalid variable name. Only - a,b,c are available");
			}
		}
		else if (com == 700)
		{
			printf("\n-");
			scanf(" %c",&var_n);
			if (var_n == 'a')
			{
				printf("\n-");
				scanf(" %c",&var_n);
				if (var_n == 'a')
				{
					if (a == a)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				}
				else if (var_n == 'b')
				{
					if (a == b)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				}
				else if (var_n == 'c')
				{
					if (a == c)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				} 
				else 
				{
					printf("\nError! Invalid variable name. Only - a,b,c are available");
				}
			}
			else if (var_n == 'b')
			{
				printf("\n-");
				scanf(" %c",&var_n);
				if (var_n == 'a')
				{
					if (b == a)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				}
				else if (var_n == 'b')
				{
					if (b == b)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				}
				else if (var_n == 'c')
				{
					if (b == c)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				} 
				else 
				{
					printf("\nError! Invalid variable name. Only - a,b,c are available");
				}
			}
			else if (var_n == 'c')
			{
				printf("\n-");
				scanf(" %c",&var_n);
				if (var_n == 'a')
				{
					if (c == a)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				}
				else if (var_n == 'b')
				{
					if (c == b)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				}
				else if (var_n == 'c')
				{
					if (c == c)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				} 
				else 
				{
					printf("\nError! Invalid variable name. Only - a,b,c are available");
				}
			} 
			else 
			{
				printf("\nError! Invalid variable name. Only - a,b,c are available");
			}
		}
		else if (com == 710)
		{
			printf("\n-");
			scanf(" %c",&var_n);
			if (var_n == 'a')
			{
				printf("\n-");
				scanf(" %c",&var_n);
				if (var_n == 'a')
				{
					if (a < a)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				}
				else if (var_n == 'b')
				{
					if (a < b)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				}
				else if (var_n == 'c')
				{
					if (a < c)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				} 
				else 
				{
					printf("\nError! Invalid variable name. Only - a,b,c are available");
				}
			}
			else if (var_n == 'b')
			{
				printf("\n-");
				scanf(" %c",&var_n);
				if (var_n == 'a')
				{
					if (b < a)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				}
				else if (var_n == 'b')
				{
					if (b < b)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				}
				else if (var_n == 'c')
				{
					if (b < c)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				} 
				else 
				{
					printf("\nError! Invalid variable name. Only - a,b,c are available");
				}
			}
			else if (var_n == 'c')
			{
				printf("\n-");
				scanf(" %c",&var_n);
				if (var_n == 'a')
				{
					if (c < a)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				}
				else if (var_n == 'b')
				{
					if (c < b)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				}
				else if (var_n == 'c')
				{
					if (c < c)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				} 
				else 
				{
					printf("\nError! Invalid variable name. Only - a,b,c are available");
				}
			} 
			else 
			{
				printf("\nError! Invalid variable name. Only - a,b,c are available");
			}
		}
		else if (com == 720)
		{
			printf("\n-");
			scanf(" %c",&var_n);
			if (var_n == 'a')
			{
				printf("\n-");
				scanf(" %c",&var_n);
				if (var_n == 'a')
				{
					if (a > a)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				}
				else if (var_n == 'b')
				{
					if (a > b)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				}
				else if (var_n == 'c')
				{
					if (a > c)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				} 
				else 
				{
					printf("\nError! Invalid variable name. Only - a,b,c are available");
				}
			}
			else if (var_n == 'b')
			{
				printf("\n-");
				scanf(" %c",&var_n);
				if (var_n == 'a')
				{
					if (b > a)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				}
				else if (var_n == 'b')
				{
					if (b > b)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				}
				else if (var_n == 'c')
				{
					if (b > c)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				} 
				else 
				{
					printf("\nError! Invalid variable name. Only - a,b,c are available");
				}
			}
			else if (var_n == 'c')
			{
				printf("\n-");
				scanf(" %c",&var_n);
				if (var_n == 'a')
				{
					if (c > a)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				}
				else if (var_n == 'b')
				{
					if (c > b)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				}
				else if (var_n == 'c')
				{
					if (c > c)
					{
						com = com_mem;
						com_akt = 0;
					}
					else
					{
						printf("\nNo");
					}
				} 
				else 
				{
					printf("\nError! Invalid variable name. Only - a,b,c are available");
				}
			} 
			else 
			{
				printf("\nError! Invalid variable name. Only - a,b,c are available");
			}
		}
		else if (com == 800)
		{
			printf("\n~");
			scanf("%d",&com_mem);
		}
		else if (com == 850)
		{
			com = com_mem;
			com_akt = 0;
		}
		else if (com == 0)
		{
			printf("\n");
		}
		else
		{
			printf("\nSyntax Error");
		}
	}
	while (com != 0);
	return 0;
}