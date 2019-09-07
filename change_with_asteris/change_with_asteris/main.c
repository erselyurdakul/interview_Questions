
/*Elimizde ard arda tekrarlayan harflerin çok sýk karþýlaþýldýðý,
sadece harfler ve boþluklardan oluþan stringler var.
Bu alfabetik stringlerin içinde arka arkaya n kere veya daha fazla tekrarlayan harflerin
yýldýz karakteriyle(‘*’) deðiþtirilmiþ halini istiyoruz.*/

/*We have strings consisting of only letters and spaces,
where repeated letters are encountered very often.
In these alphabetic strings, we want the letters that are repeated
n times or more in succession to be replaced with an asterisk character (‘*’).*/



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char str[] = "afdafkaksfdddaksdffjaksdaaaadklfalsdfkalksdfaaklsdfjalkkkksdfalkf";
	int str_len = strlen(str);
	int n = 0;
	printf("input repeat count : \n\n");
	scanf("%d", &n);
	for (int i = 0; i < str_len; i++)
	{
		int j;
		for (j = 0;(i + j < str_len) && (j < n); j++)
		{
			if (str[i] != str[i + j])
			{
				break;
			}
		}

		if (j == n)
		{
			memset(str + i, '*', n);

			for (;i + j < str_len; j++)
			{
				if (str[i] == str[i + j])
				{
					str[i + j] = '*';
				}
			}
		}
	}

	printf("%s\n\n\n", str);


	return 1;
}