#include <stdio.h>
int main(){
	//parking lot project
	int ch=0,c=0,v=0,bus=0,bike=0,car=0,au=0,s=0;
	printf(" Enter 1 to input vehicle \n 2 to show records \n 3 to delete entire record \n 4 to exit program \n");
	do{
		printf("\n Enter choice: ");
		scanf("%d",&ch);
		switch (ch){
			case 1:
				if (v<42){
					printf(" Enter 1 for bus \n 2 for car \n 3 for bike \n 4 for auto \n 5 to exit vehicle input \n");
					do{
						printf("\n Enter vehicle type: ");
						scanf("%d",&c);
						switch (c){
							case 1:
								if(bus<5){
							
									v++;
									bus++;
									s+=100;
								}
								else{
									printf(" Parking lot full! No space for buses");
									
								}
								break;
							case 2:
								if (car<10){
									v++;
									car++;
									s+=50;
								}
								else{
									printf(" Parking lot full! No space for cars");
									
								}
								break;
							case 3:
								if (bike<20){
									v++;
									bike++;
									s+=20;
								}
								else{
									printf(" Parking lot full! No space for bike");
									
								}
								break;
							case 4:
								if (au<7){
									v++;
									au++;
									s+=30;
								}
								else{
									printf(" Parking lot full! No space for auto");
									
								}
								break;
							
							case 5:
								break;
							default:
								printf(" Input does not match. Try again!");
								break;
									
							}//switch v type
						
						}while(c!=5); //while v type
						break;
			case 2:
				printf(" Total income=%d \t Total vehicles=%d \n buses=%d \t cars=%d \t bikes=%d \t autos=%d \n",s,v,bus,car,bike,au);
				break;
			case 3:
				v=0;
				s=0;
				bus=0;
				car=0;
				bike=0;
				au=0;
				printf(" All records deleted!");
				break;
			case 4:
				printf("Thanks for using Parkinglotpro!~ Sruty");
				break;
			default:
				printf(" Input does not match. Try again!");
				break;
				
				}
				else{
					printf(" Parking lot is full");
				}
					
				
		}//switch menu
	}while(ch!=4); //while menu
	
	
}//main
