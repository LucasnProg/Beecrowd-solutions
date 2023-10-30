#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 1000

typedef struct noArv{

	char letra;
	struct noArv *rigth;
	struct noArv *left;

} noArv;

noArv* novoNo(char letra);
void showposfixa(noArv *arvore);
int src(char *str, int inicio, int fim, char letra);
noArv* tree(char *infixa, char *prefixa, int inInicio, int inFim);

short indice;

void main ()
{

	short testCases;
	char prefixa[MAXSIZE], infixa[MAXSIZE];

	while (scanf("%s %s", prefixa, infixa) != EOF)
	{

		int tam = strlen(prefixa);
		indice = 0;
		noArv *root = tree(infixa, prefixa, 0, tam - 1);
		showposfixa(root);
		printf("\n");

	}

}

noArv* novoNo(char letra)
{

	noArv *node = (noArv *) malloc(sizeof(noArv));
	node->letra = letra;
	node->left = node->rigth = NULL;

	return node;
}

int src(char *str, int inicio, int fim, char letra)
{

	short i;
	for (i = inicio; i <= fim; ++i)
		if (str[i] == letra)
			return i;

	return -1;

}

noArv* tree(char *infixa, char *prefixa, int inInicio, int inFim)
{

	int infixaIndice;

	if (inInicio > inFim)
		return NULL;

	noArv *node = novoNo(prefixa[indice++]);
	if (inInicio == inFim)
		return node;

	infixaIndice = src(infixa, inInicio, inFim, node->letra);
	node->left = tree(infixa, prefixa, inInicio, infixaIndice - 1);
	node->rigth = tree(infixa, prefixa, infixaIndice + 1, inFim);

	return node;

}

void showposfixa(noArv *node)
{

	if (node == NULL)
		return;

	showposfixa(node->left);
	showposfixa(node->rigth);
	printf("%c", node->letra);

}