


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
 
FILE *archivo;
char VENTASa[50]="Ventas.txt";
 
void insertarProductoVenta(char producto[], char producto2[], int precio_VENTA){
	archivo = fopen(VENTASa,"a");
	fprintf(archivo,"%s %s %i \n",producto, producto2, precio_VENTA);
	fclose(archivo);
	archivo = NULL;
}
void listarProductosStock(){
	char producto[50], producto2[50];
	int precio_VENTA;
	archivo = fopen(VENTASa,"r");
	if(archivo != NULL){
		while(!feof(archivo)){
			fscanf(archivo, "%s %s %i \n",producto,producto2,&precio_VENTA);
			printf("%s %s %i\n",producto,producto2,precio_VENTA);
		}
 
	}
	fclose(archivo);
	archivo = NULL;
}
 
 
int main()
{
	int opcion_CV, opc_compra;
	int acum_precio=0, total_precio=0;
	int VUELTO,FALTANTE,pago;
	char producto[50],producto2[50];
	int precio_VENTA;
	int precios_COMPRA[15]={35,18,18,25,35,35,18,18,25,25,43,80,58,85,15};
 
	printf("\t\t\t\tBienvenido   Melvin Lopez\n");
	printf("\n\nQue desea Comprar? Por favor introduce el numero de la opcion a requerir");
	printf("\n1- Bebidas Calientes");
	printf("\n2- Bebidas Frias");
	printf("\n3- Reposteria");
	scanf("%i",&opcion_CV);
	system("clear||cls");
 
	if(opcion_CV==1){
		do{
			printf("\n~/~/~/~/~/~/~Bebidas Calientes~/~/~/~/~/~/~\n");
			printf("\n1.- Capuccino.---- 35\n");
			printf("2.- Expresso ---- 18\n");
			printf("3.- Americano ---- 18\n");
			printf("4.- Coffe Latte ---- 25\n");
			printf("5.- Flat White ---- 35\n");
			
			printf("Introduzca el numero del producto que desee adquirir.\n Al finalizar su compra, introduzca 0.\n");
			scanf("%i",&opc_compra);
			system("clear||cls");
			switch(opc_compra){
				case 1:
					printf("\nElejiste Capuccino.\n");
				break;
 
				case 2:
					printf("\nElejiste Expresso.\n");
				break;
 
				case 3:
					printf("\nElejiste Americano.\n");
				break;
 
				case 4:
					printf("\nElejiste Coffe latte.\n ");
				break;
 
				
			}
			if(opc_compra!= 0){
			printf("precio actual: %d\n",precios_COMPRA[opc_compra-1]);
			acum_precio= precios_COMPRA[opc_compra-1];
			total_precio=total_precio+acum_precio;
			printf("total: %d\n",total_precio);
			}
		}while(opc_compra!=0);
 
		printf("\n\n\n El total a pagar es de %d Lps\n",total_precio);
		printf("\n\n\n Introduzca el dinero:");
		scanf("%d",&pago);
		if(pago>total_precio){
			VUELTO=pago-total_precio;
			printf("\nGracias por preferirnos!");
			printf("\n\n\nAqui esta su vuelto %d Lps",VUELTO);
		}else if(pago<total_precio){
			FALTANTE=total_precio-pago;
			printf("\nLo sentimos, su compra no pudo ser procesada! Hacen falta %d$ para completar el pago.",FALTANTE);
		}else{
			printf("\nGracias por preferirnos!");
		}
	}
	
	
	if(opcion_CV==2){
		do{
			printf("\n~/~/~/~/~/~/~Bebidas Frias~/~/~/~/~/~/~\n");
			printf("\n1.- Gaseosa Lata.---- 35\n");
			printf("\n2.- Refresco Natural ---- 18\n");
			printf("\n3.- Piña Colada---- 18\n");
			printf("\n4.- Te Frio ---- 25\n");
			printf("\n5.- Limonada ---- 25\n");
			
			printf("Introduzca el numero del producto que desee adquirir.\n Al finalizar su compra, introduzca 0.\n");
			scanf("%i",&opc_compra);
			system("clear||cls");
			switch(opc_compra){
				case 1:
					printf("\nElejisteGaseosa Lata.\n");
				break;
 
				case 2:
					printf("\nElejisteRefresco Natural.\n");
				break;
 
				case 3:
					printf("\nElejistePiña Colada.\n");
				break;
 
				case 4:
					printf("\nElejisteTe Frio.\n ");
				break;
				
				case 5:
					printf("\nElejisteLimonada");
					break;
 
				
			}
			if(opc_compra!= 0){
			printf("precio actual: %d\n",precios_COMPRA[opc_compra-2]);
			acum_precio= precios_COMPRA[opc_compra-2];
			total_precio=total_precio+acum_precio;
			printf("total: %d\n",total_precio);
			}
		}while(opc_compra!=0);
 
		printf("\n\n\n El total a pagar es de %d Lps\n",total_precio);
		printf("\n\n\n Introduzca el dinero:");
		scanf("%d",&pago);
		if(pago>total_precio){
			VUELTO=pago-total_precio;
			printf("\nGracias por preferirnos!");
			printf("\n\n\nAqui esta su vuelto %d Lps",VUELTO);
		}else if(pago<total_precio){
			FALTANTE=total_precio-pago;
			printf("\nLo sentimos, su compra no pudo ser procesada! Hacen falta %d$ para completar el pago.",FALTANTE);
		}else{
			printf("\nGracias por preferirnos!");
		}
	}
	
		if(opcion_CV==3){
		do{
			printf("\n~/~/~/~/~/~/~Reposteria~/~/~/~/~/~/~\n");
			printf("\n1.- Chocolate Fresa.---- 43\n");
			printf("\n2.- Tres Leches ---- 80\n");
			printf("\n3.- Pay de queso---- 58\n");
			printf("\n4.- Pan de Platano ---- 85\n");
			printf("\n5.- Bagel ---- 15\n");
			
			printf("\nIntroduzca el numero del producto que desee adquirir.\n Al finalizar su compra, introduzca 0.\n");
			scanf("%i",&opc_compra);
			system("clear||cls");
			switch(opc_compra){
				case 1:
					printf("\nElejiste Chocolate Fresa.\n");
				break;
 
				case 2:
					printf("\nElejiste Tres Leches.\n");
				break;
 
				case 3:
					printf("\nEElejiste Pay de queso.\n");
				break;
 
				case 4:
					printf("\nElejiste Pan de Platano.\n ");
				break;
				
				case 5:
					printf("\nElejiste Bagel");
					break;
 
				
			}
			if(opc_compra!= 0){
			printf("precio actual: %d\n",precios_COMPRA[opc_compra-3]);
			acum_precio= precios_COMPRA[opc_compra-3];
			total_precio=total_precio+acum_precio;
			printf("total: %d\n",total_precio);
			}
		}while(opc_compra!=0);
 
		printf("\n\n\n El total a pagar es de %d Lps\n",total_precio);
		printf("\n\n\n Introduzca el dinero:");
		scanf("%d",&pago);
		if(pago>total_precio){
			VUELTO=pago-total_precio;
			printf("\nGracias por preferirnos!");
			printf("\n\n\nAqui esta su vuelto %d Lps",VUELTO);
		}else if(pago<total_precio){
			FALTANTE=total_precio-pago;
			printf("\nLo sentimos, su compra no pudo ser procesada! Hacen falta %d$ para completar el pago.",FALTANTE);
		}else{
			printf("\nGracias por preferirnos!");
		}
	}
	
	
	else if(opcion_CV==3){
		printf("Introduzca el nombre del producto que desea vendernos y su precio\n");
		scanf("%s %s %i",producto,producto2, &precio_VENTA);
		insertarProductoVenta(producto, producto2, precio_VENTA);
		system("pause");
		system("clear||cls");
		printf("\nAqui está nuestra lista de productos que tenemos en reserva, para ser vendidos mas tarde\n");
		listarProductosStock();
		return 0;
	}
}
