#include <stdio.h>
#include <stdlib.h>


typedef struct
{
		// Definicion del nodo tipo de Dato
}Dato_t;

typedef struct{
    Dato_t *dato; 	// Representa el dato almacenado en el nodo
    Nodo_t* next; 	// Puntero que apunta al siguiente nodo en la lista
}Nodo_t;

void print_vector(int v[], int n)
{
	int index;
	printf("[");
	for(index=0;index<n-1;index++)
	{
		printf("%d,",v[index]);
	}
	printf("%d]\n",v[index]);
}

// Algoritmo de ordenamiento por seleccion
void ordSeleccion(int a[], int n)
{
	int indiceMenor, i, j;
	int aux;
	// Ordenar a[0], a[1], ......, a[n-2] y a[n-1] , en cada pasada
	for( i=0 ; i<n ; i++ )
	{
		// Comienza con la exploracion del indice-i
		indiceMenor = i;
		for( j=i+1 ; j<n ; j++ )
		{
			if( a[j] < a[indiceMenor] )
			{
				indiceMenor = j ;
			}
		}
		// Situa el elemento mas pequeño en a[i]
		if( i != indiceMenor )
		{
			aux = a[i] ;
			a[i] = a[indiceMenor] ;
			a[indiceMenor] = aux ;
		}
		printf("Vector Ordenado STEP[%d]: ",i+1);
		print_vector(a,n);
	}		
}

int main(void)
{
	//int a[5] = {50,20,40,80,30};
	int a[10] = {11,7,12,14,19,1,6,18,8,20};
	int sizeVector = 10 ;
	
	printf("Vector Original STEP[0]: ");
	print_vector(a,sizeVector);
	ordSeleccion(a,sizeVector);

	return 0;
}




