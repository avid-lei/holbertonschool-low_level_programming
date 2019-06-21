#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	    int i, j, l, k;

	        for (k = '0'; k <= '9'; k++)
			    {
				            for (l = '0'; l <= '9'; l++)
						            {
								                for (j = '0'; j <= '9'; j++)
											            {
													                    for (i = '0'; i <= '9'; i++)
																                    {
																			                        putchar(k);
																						                    putchar(l);
																								                        putchar(' ');
																											                    putchar(j);
																													                        putchar(i);
																																                    //    if (k != '9'|| l != '9' || i != '9' || j != '9')
																																                    //{''
																																                    //    putchar(',');
																																                    //    putchar(' ');
																																                    //
																																                }
																		                }
															            }
										    }
					        putchar('\n');
						    return (0);
			    }
		Message Input


			Message Trevor
