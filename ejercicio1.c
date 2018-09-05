#include<stdio.h>
int primos=0;
int main (){
	int f, c,col, tamanio, producto,suma, contador=0, i;
	printf("Ingrese el tamaño de las matrices cuadradas N*N : ");
	scanf("%d", & tamanio );
	int a [tamanio][tamanio];
	int b [tamanio][tamanio];	
	int p [tamanio][tamanio];	
	printf("\nLLENADO DE MATRIZ A \n");
	for(f=0; f<tamanio;f++){
		for(c=0; c<tamanio; c++){
			printf("Ingrese un valor: ");
			scanf("%d", & a[f][c]);	
		}
	}
	printf("\nLLENADO DE MATRIZ B \n");
	for(f=0; f<tamanio;f++){
		for(c=0; c<tamanio; c++){
			printf("Ingrese un valor: ");
			scanf("%d", & b[f][c]);	
		}
	}
	printf("\n MATRIZ A \n");
	for(f=0; f<tamanio;f++){
		printf("\n");
		for(c=0; c<tamanio; c++){
			printf("%d\t", a[f][c]);
		}
	}
	printf("\n MATRIZ B \n");
	for(f=0; f<tamanio;f++){
		printf("\n");
		for(c=0; c<tamanio; c++){
			printf("%d\t", b[f][c]);
		}
	}
	for(col=0; col<tamanio; col++){
		for(f=0; f<tamanio;f++){
			suma=0;
			for(c=0; c<tamanio; c++){
				producto=0;
				producto=(a[col][c])*(b[c][f]);
				suma=suma+producto;
				p[col][f]=suma;
			}
		}
	}
	printf("\n ");
	for(f=0; f<tamanio;f++){
		printf("\n ");
		for(c=0; c<tamanio; c++){
			printf("%d\t", p[f][c]);
		}
	}
	
	for(i=1;i<tamanio;i++){
		for(f=0; f<tamanio;f++){
			for(c=0; c<tamanio; c++){
				
				if((p[f][c])%i==0){
					contador++;
				}if(contador==2){
					printf("\n El numero %d ", p[f][c]);
					printf(" es primo, En la posicion ");
					printf("%d %d ", f,c);
					contador=0;
					primos++;
				 }	
			}
		}
	}
	contador=0;
	int vector[primos];
	for(i=1;i<tamanio;i++){
		for(f=0; f<tamanio;f++){
			for(c=0; c<tamanio; c++){
				if((p[f][c])%i==0){
					contador++;
					}if(contador==2){
				     vector[c]=p[f][c];
				     contador=0;
			}
			}
		}
	}
		printf("\n Mostrar el vector");
		for(f=0; f<primos;f++){
			printf(" %d ", vector[f]);
		}
	return 0;
}
