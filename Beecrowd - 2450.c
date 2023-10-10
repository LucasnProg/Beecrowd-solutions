#include <stdio.h>

#define true 1
#define false 0

int main ()
{

	int ehescada = 0;
	int c, qtsZeros;
	int bo, ok = 1;
	int numN, numM;

	scanf("%d %d", &numN, &numM);

	for (int linha = 0; linha < numN; ++linha)
	{

		qtsZeros = 0;
		bo = 1;

		for (int coluna = 0; coluna < numM; ++coluna)
		{

			scanf("%d", &c);
			if (c == 0 && bo)
				qtsZeros++;
			else
				bo = 0;

		}

		if (linha != 0)
		{

			if ((qtsZeros > ehescada || (qtsZeros == ehescada && qtsZeros == numM)) && ok)
				ehescada = qtsZeros;
			else
				ehescada = 0, ok = 0;

		}
		else
			ehescada = qtsZeros;

	}

	if (ehescada){
		printf("S\n");}
	else{
		printf("N\n");}

  return 0;
}