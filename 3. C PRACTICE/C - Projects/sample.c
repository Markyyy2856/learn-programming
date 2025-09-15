#include<stdio.h>
#include<malloc.h>
char array[11][7] = {0};
void choose1();void choose2();void choose3();
int main();
struct passenger{
	int rno;
	char name[20];
	int age;
	char city[20];
	int seatrow;
	char seatcol;
};

// table of available seats

void table(){


	struct passenger passengerrec;
	FILE *f;
	int j;
	f=fopen("passenger2.txt", "r");
	
	while(fread(&passengerrec, sizeof(struct passenger),1,f))
	{
	// checking if there is previous passenger records
	if(passengerrec.seatrow != 0 && passengerrec.seatrow != 0){
	
	array[passengerrec.seatrow][passengerrec.seatcol] = 'X';}
	
	}
	// marking the previous records if there is
  	printf("\n                           \x04---\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04");
	printf("\n                           | \x03 |   A   |   B   |   C   |  \x03\x05\x03  |   D   |   E   |   F   |");
  	printf("\n                           \x04---\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04");
  	printf("\n                           | 1 |   %c   |   %c   |   %c   |  \x03\x05\x03  |   %c   |   %c   |   %c   |", array[1]['A'], array[1]['B'], array[1]['C'], array[1]['D'], array[1]['E'], array[1]['F']);
  	printf("\n                           \x04---\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04");
	printf("\n                           | 2 |   %c   |   %c   |   %c   |  \x03\x05\x03  |   %c   |   %c   |   %c   |", array[2]['A'], array[2]['B'], array[2]['C'], array[2]['D'], array[2]['E'], array[2]['F']);
  	printf("\n                           \x04---\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04");
	printf("\n                           | 3 |   %c   |   %c   |   %c   |  \x03\x05\x03  |   %c   |   %c   |   %c   |", array[3]['A'], array[3]['B'], array[3]['C'], array[3]['D'], array[3]['E'], array[3]['F']);
  	printf("\n                           \x04---\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04");
  	printf("\n                           | 4 |   %c   |   %c   |   %c   |  \x03\x05\x03  |   %c   |   %c   |   %c   |", array[4]['A'], array[4]['B'], array[4]['C'], array[4]['D'], array[4]['E'], array[4]['F']);
  	printf("\n                           \x04---\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04");
  	printf("\n                           | 5 |   %c   |   %c   |   %c   |  \x03\x05\x03  |   %c   |   %c   |   %c   |", array[5]['A'], array[5]['B'], array[5]['C'], array[5]['D'], array[5]['E'], array[5]['F']);
  	printf("\n                           \x04---\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04");
  	printf("\n                           | 6 |   %c   |   %c   |   %c   |  \x03\x05\x03  |   %c   |   %c   |   %c   |", array[6]['A'], array[6]['B'], array[6]['C'], array[6]['D'], array[6]['E'], array[6]['F']);
  	printf("\n                           \x04---\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04");
  	printf("\n                           | 7 |   %c   |   %c   |   %c   |  \x03\x05\x03  |   %c   |   %c   |   %c   |", array[7]['A'], array[7]['B'], array[7]['C'], array[7]['D'], array[7]['E'], array[7]['F']);
  	printf("\n                           \x04---\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04");
  	printf("\n                           | 8 |   %c   |   %c   |   %c   |  \x03\x05\x03  |   %c   |   %c   |   %c   |", array[8]['A'], array[8]['B'], array[8]['C'], array[8]['D'], array[8]['E'], array[8]['F']);
  	printf("\n                           \x04---\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04");
	printf("\n                           | 9 |   %c   |   %c   |   %c   |  \x03\x05\x03  |   %c   |   %c   |   %c   |", array[9]['A'], array[9]['B'], array[9]['C'], array[9]['D'], array[9]['E'], array[9]['F']);
  	printf("\n                           \x04---\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04");
  	printf("\n                           | 10|   %c   |   %c   |   %c   |  \x03\x05\x03  |   %c   |   %c   |   %c   |", array[10]['A'], array[10]['B'], array[10]['C'], array[10]['D'], array[10]['E'], array[10]['F']);
	printf("\n                           \x04---\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04");
}


// create a reservation
void reserve(){
	

	struct passenger *s;
	FILE *fp;
	FILE *f;
	int i,n, j;
	char option;
	printf("\n\n\t\t\tHow many do you want to reserve?:  ");
	scanf("%d", &n);
	
	s = (struct passenger*) malloc(n * sizeof(struct passenger));
	fp=fopen("passenger.txt", "w");
	f=fopen("passenger2.txt", "w");
	for(i=0;i<n;i++){
	
	
	printf("\n\t\t\tEnter Roll Number: ");
	scanf("%d", &s[i]);
	fflush(stdin);
	printf("\n\t\t\tEnter name: ");
	scanf("%[^\n]s", s[i].name);
	printf("\n\t\t\tEnter Age: ");
	scanf("%d", &s[i].age);
	printf("\n\t\t\tEnter City: ");
	scanf("%s", &s[i].city);
	printf("\n\n\t\t\tEnter your preferred seat row and column (ex: 1A): ");
	scanf("%d%c", &s[i].seatrow, &s[i].seatcol);
	
	

{
// checking if the inputted row and column is between 1-10 and A-F
if (s[i].seatrow > 0 && s[i].seatrow < 11 && s[i].seatcol >= 'A' && s[i].seatcol <='F'){
		
		//checking the availability of the seats
		if (array[s[i].seatrow][s[i].seatcol] == 0){
		array[s[i].seatrow][s[i].seatcol] = 'X';}
		
		else {
		printf("\n\t\t\tSorry the Seat Number %d%c is already taken!!\n", s[i].seatrow,s[i].seatcol);
		table();
		printf("\n\n\t\t\tPLEASE CHECK THE AVAILABLE SEATS ABOVE \n");
		choose1();
		return;
		}
	}
		
	else {
		printf("\n\t\t\tSorry the Seat Number %d%c is not available. Please choose between 1-10 and A-F only!!\n", s[i].seatrow,s[i].seatcol);
	
			table();
			printf("\n\n\t\t\tPLEASE CHECK THE AVAILABLE SEATS ABOVE \n");
			choose1();
			return;
		}
}

   	
printf("\n\n\t\t\tCongratulations %s, You are now reserved for the Seat %d%c\n\n", s[i].name,s[i].seatrow,s[i].seatcol);
fwrite(&s[i], sizeof(struct passenger),1,f);
fprintf(fp, "\n%d  \t%s   \t%d  \t%s  \t\t%d%c", s[i].rno, s[i].name, s[i].age, s[i].city, s[i].seatrow, s[i].seatcol);
}

	fclose(fp);
	fclose(f);
}

// displaying all the passenger records
void display(){

	struct passenger passengerrec;
	FILE *f;
	int j;
	
	printf("\n\t\t\tNo.  \tName \t\tAge  \tAddress  \t\tSeat No.\n");
	f=fopen("passenger2.txt", "r");
	
	while(fread(&passengerrec, sizeof(struct passenger),1,f))
	{
	
		printf("\n\t\t\t%d  \t%s   \t%d  \t%s  \t\t%d%c", passengerrec.rno, passengerrec.name, passengerrec.age, passengerrec.city, passengerrec.seatrow, passengerrec.seatcol);
	}
	fclose(f);
}

// adding another reservation
void append(){

	struct passenger *s;
	FILE *fp;
	FILE *f;
	int a,b,i,n, j;
	char option;
	printf("\n\n\t\t\tHow many do you want to reserve?:  ");
	scanf("%d", &n);
	
	s = (struct passenger*) malloc(n * sizeof(struct passenger));
	fp=fopen("passenger.txt", "a");
	f=fopen("passenger2.txt", "a");
	for(i=0;i<n;i++){
	
	
	printf("\n\t\t\tEnter Roll Number: ");
	scanf("%d", &s[i]);
	fflush(stdin);
	printf("\n\t\t\tEnter name: ");
	scanf("%[^\n]s", s[i].name);
	printf("\n\t\t\tEnter Age: ");
	scanf("%d", &s[i].age);
	printf("\n\t\t\tEnter City: ");
	scanf("%s", &s[i].city);
	printf("\n\n\t\t\tEnter your preferred seat row and column (ex: 1A): ");
	scanf("%d%c", &s[i].seatrow, &s[i].seatcol);
	
	

	{
	// checking if the inputted row and column is between 1-10 and A-F
	if (s[i].seatrow > 0 && s[i].seatrow < 11 && s[i].seatcol >= 'A' && s[i].seatcol <='F'){
		
		// checking the availability of the seat
		if (array[s[i].seatrow][s[i].seatcol] == 0){
		array[s[i].seatrow][s[i].seatcol] = 0;}
		
		else {
		printf("\n\t\t\tSorry the Seat Number %d%c is already taken!!\n", s[i].seatrow,s[i].seatcol);
		table();
		printf("\n\n\t\t\tPLEASE CHECK THE AVAILABLE SEATS ABOVE\n");
		choose3();
		return;
		}
	}
	

	else {
		printf("\n\t\t\tSorry the Seat Number %d%c is not available. Please choose between 1-10 and A-F only!!\n", s[i].seatrow,s[i].seatcol);
	
			table();
			printf("\n\n\t\t\tPLEASE CHECK THE AVAILABLE SEATS ABOVE\n");
			choose3();
			return;
		}
	}
printf("\n\n\t\t\tCongratulations %s, You are now reserved for the Seat %d%c\n\n", s[i].name,s[i].seatrow,s[i].seatcol);
fwrite(&s[i], sizeof(struct passenger),1,f);
fprintf(fp, "\n%d  \t%s   \t%d  \t%s  \t\t%d%c", s[i].rno, s[i].name, s[i].age, s[i].city, s[i].seatrow, s[i].seatcol);
   	
	
	
}

	fclose(fp);
	fclose(f);
}

// option to try again if the seat is unavailable/taken
void choose1(){
	char option;
	
	printf("\n\t\t\tWould you like to choose another seat? (Y/N): ");
	scanf(" %c", &option);
		if (option == 'Y' || option == 'y'){
			reserve();
		}
		else if (option == 'N' || option == 'n'){
			printf("\n\t\t\tGoing Back to the Main Menu...");
			}
		else{
			choose1();
		}
}
void choose3(){
	char option;
	
	printf("\n\t\t\tWould you like to choose another seat? (Y/N): ");
	scanf(" %c", &option);
		if (option == 'Y' || option == 'y'){
			append();
		}
		else if (option == 'N' || option == 'n'){
			printf("\n\t\t\tGoing Back to the Main Menu...");
			}
		else{
			choose3();
		}
}


// to update your name, age, city, and seat number
void change(){
	struct passenger passengerrec;
	FILE *f, *fpp, *fp; 
	int j;
	int found=0;
	int rollNumber;
	char choose, option;

	f=fopen("passenger2.txt", "r");
	fpp=fopen("passenger3.txt", "w");
	fp=fopen("passenger.txt", "w");
	printf("\n\t\t\tEnter Roll Number to update: ");
	scanf("%d", &rollNumber);
	
	while(fread(&passengerrec, sizeof(struct passenger),1,f))
	{
// checking if the inputted roll number is existing within the previous data
if(passengerrec.rno == rollNumber){
	found = 1;
	// Unmarking the previous seat of the inputted roll number
	if(passengerrec.seatrow != 0 && passengerrec.seatrow != 0){
	
	array[passengerrec.seatrow][passengerrec.seatcol] = 0;}
	
		
		fflush(stdin);
				printf("\n\t\t\tEnter name: ");
				scanf("%[^\n]s", passengerrec.name);
				printf("\n\t\t\tEnter Age: ");
				scanf("%d", &passengerrec.age);
				printf("\n\t\t\tEnter City: ");
				scanf("%s", &passengerrec.city);
				printf("\n\n\t\t\tEnter your preferred seat row and column (ex: 1A): ");
				scanf("%d%c", &passengerrec.seatrow, &passengerrec.seatcol);

	// checking if the inputted new row and column is within the range of 1-10 and A-F
	if (passengerrec.seatrow > 0 && passengerrec.seatrow < 11 && passengerrec.seatcol >= 'A' && passengerrec.seatcol <='F'){
		
		// checking the availability of the seat
		if (array[passengerrec.seatrow][passengerrec.seatcol] == 0){
		array[passengerrec.seatrow][passengerrec.seatcol] = 'X';}
		
		else {
		
		table();
		printf("\n\t\t\tPLEASE CHECK THE AVAILABLE SEATS ABOVE");
		choose2();
		}
	}
	else {
		printf("\n\t\t\tSorry the Seat Number %d%c is not available. Please choose between 1-10 and A-F only!!\n", passengerrec.seatrow,passengerrec.seatcol);
	
			table();
			printf("\n\t\t\tPLEASE CHECK THE AVAILABLE SEATS ABOVE");
			choose2();
			return;
		}
	

   	
	printf("\n\n\t\t\tCongratulations %s, You are now reserved for the Seat %d%c\n\n", passengerrec.name,passengerrec.seatrow,passengerrec.seatcol);
	}
	fwrite(&passengerrec, sizeof(struct passenger),1,fpp);
	fprintf(fp, "\n%d  \t%s   \t%d  \t%s  \t\t%d%c", passengerrec.rno, passengerrec.name, passengerrec.age, passengerrec.city, passengerrec.seatrow, passengerrec.seatcol);
}
	printf("\n                           \x04---\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04");
	printf("\n                           | \x03 |   A   |   B   |   C   |  \x03\x05\x03  |   D   |   E   |   F   |");
  	printf("\n                           \x04---\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04");
  	printf("\n                           | 1 |   %c   |   %c   |   %c   |  \x03\x05\x03  |   %c   |   %c   |   %c   |", array[1]['A'], array[1]['B'], array[1]['C'], array[1]['D'], array[1]['E'], array[1]['F']);
  	printf("\n                           \x04---\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04");
	printf("\n                           | 2 |   %c   |   %c   |   %c   |  \x03\x05\x03  |   %c   |   %c   |   %c   |", array[2]['A'], array[2]['B'], array[2]['C'], array[2]['D'], array[2]['E'], array[2]['F']);
  	printf("\n                           \x04---\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04");
	printf("\n                           | 3 |   %c   |   %c   |   %c   |  \x03\x05\x03  |   %c   |   %c   |   %c   |", array[3]['A'], array[3]['B'], array[3]['C'], array[3]['D'], array[3]['E'], array[3]['F']);
  	printf("\n                           \x04---\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04");
  	printf("\n                           | 4 |   %c   |   %c   |   %c   |  \x03\x05\x03  |   %c   |   %c   |   %c   |", array[4]['A'], array[4]['B'], array[4]['C'], array[4]['D'], array[4]['E'], array[4]['F']);
  	printf("\n                           \x04---\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04");
  	printf("\n                           | 5 |   %c   |   %c   |   %c   |  \x03\x05\x03  |   %c   |   %c   |   %c   |", array[5]['A'], array[5]['B'], array[5]['C'], array[5]['D'], array[5]['E'], array[5]['F']);
  	printf("\n                           \x04---\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04");
  	printf("\n                           | 6 |   %c   |   %c   |   %c   |  \x03\x05\x03  |   %c   |   %c   |   %c   |", array[6]['A'], array[6]['B'], array[6]['C'], array[6]['D'], array[6]['E'], array[6]['F']);
  	printf("\n                           \x04---\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04");
  	printf("\n                           | 7 |   %c   |   %c   |   %c   |  \x03\x05\x03  |   %c   |   %c   |   %c   |", array[7]['A'], array[7]['B'], array[7]['C'], array[7]['D'], array[7]['E'], array[7]['F']);
  	printf("\n                           \x04---\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04");
  	printf("\n                           | 8 |   %c   |   %c   |   %c   |  \x03\x05\x03  |   %c   |   %c   |   %c   |", array[8]['A'], array[8]['B'], array[8]['C'], array[8]['D'], array[8]['E'], array[8]['F']);
  	printf("\n                           \x04---\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04");
	printf("\n                           | 9 |   %c   |   %c   |   %c   |  \x03\x05\x03  |   %c   |   %c   |   %c   |", array[9]['A'], array[9]['B'], array[9]['C'], array[9]['D'], array[9]['E'], array[9]['F']);
  	printf("\n                           \x04---\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04");
  	printf("\n                           | 10|   %c   |   %c   |   %c   |  \x03\x05\x03  |   %c   |   %c   |   %c   |", array[10]['A'], array[10]['B'], array[10]['C'], array[10]['D'], array[10]['E'], array[10]['F']);
	printf("\n                           \x04---\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04-------\x04");
		
fclose(f);
fclose(fpp);
fclose(fp);



	if(found == 1){
		f=fopen("passenger2.txt","w");

		fpp=fopen("passenger3.txt", "r");
		
		while(fread(&passengerrec, sizeof(struct passenger),1,fpp)){
			fwrite(&passengerrec,sizeof(struct passenger),1,f);
		}
		
		fclose(f);
		fclose(fpp);
	}
	else{
	
		printf("\n\n\t\t\tNO RECORD FOUND!! PLEASE TRY AGAIN");
		
		}
}

// an option to choose if you want to try changing seats again or just go back to the main menu
void choose2(){

char option;
	
	printf("\n\t\t\tWould you like to choose another seat? (Y/N): ");
	scanf(" %c", &option);
		if (option == 'Y' || option == 'y'){
			change();
		}
		else if (option == 'N' || option == 'n'){
			printf("\n\t\t\tGoing Back to the Main Menu...");
			}
		else{
			choose2();
		}
}

// Cancel the reservation
void cancel(){
	struct passenger passengerrec;
	FILE *f, *fpp, *fp;
	int j;
	int found=0;
	int rollNumber;
	
	f=fopen("passenger2.txt", "r");
	fpp=fopen("passenger3.txt","w");
	fp=fopen("passenger.txt", "w");
	printf("\n\t\t\tEnter Roll Number to delete: ");
	scanf("%d", &rollNumber);
	
	while(fread(&passengerrec, sizeof(struct passenger),1,f))
	{
// unmarking the seat number of the inputted roll number
if(passengerrec.rno == rollNumber){
	found=1;
	if(passengerrec.seatrow != 0 && passengerrec.seatrow != 0){
	array[passengerrec.seatrow][passengerrec.seatcol] = 0;}		
		}
	else{
			fwrite(&passengerrec, sizeof(struct passenger),1,fpp);
			fprintf(fp, "\n%d  \t%s   \t%d  \t%s  \t\t%d%c", passengerrec.rno, passengerrec.name, passengerrec.age, passengerrec.city, passengerrec.seatrow, passengerrec.seatcol);
	}
	}
	fclose(f);
	fclose(fp);
	fclose(fpp);
	
	if(found==1){
		fpp=fopen("passenger3.txt","r");
		f=fopen("passenger2.txt","w");

		
		while(fread(&passengerrec, sizeof(struct passenger),1,fpp)){
			fwrite(&passengerrec,sizeof(struct passenger),1,f);
		}
		
		fclose(f);
		fclose(fpp);
	}
	else{
		printf("\n\t\t\tRecord not found\n");
	}	
}

// search a specific record by typing the roll number
void search(){
	struct passenger passengerrec;
	FILE *f;
	int j;
;
	int found=0;
	int rollNumber;
	f=fopen("passenger2.txt", "r");
	printf("\n\t\t\tEnter Roll Number to search: ");
	scanf("%d", &rollNumber);
	printf("\n\t\t\tNo.  \tName \t\tAge  \tAddress  \tSeat No.\n");
	while(fread(&passengerrec, sizeof(struct passenger),1,f))
	{
		if(passengerrec.rno == rollNumber){
			found=1;
		printf("\n\t\t\t%d  \t%s   \t%d  \t%s  \t%d%c", passengerrec.rno, passengerrec.name, passengerrec.age, passengerrec.city, passengerrec.seatrow, passengerrec.seatcol);
		}
	}
	if(found==0){
		printf("\n\t\t\tRecord not found\n");
	}
	fclose(f);
	}
	
// to know the number of overall records
void noOfRecords(){
	struct passenger passengerrec;
	FILE *f;
	f=fopen("passenger2.txt", "r");
	fseek(f,0,SEEK_END);
	int n = ftell(f)/sizeof(struct passenger);
	printf("\n\t\t\tNumber of passenger records: %d\n", n);	
	fclose(f);
	}

// to sort the list on screen from lowest to highest roll number
void sort(){
	struct passenger *pass, pass1;
	int i,j;
	FILE *f;
	f=fopen("passenger2.txt","r");
	fseek(f,0,SEEK_END);
	int n = ftell(f)/sizeof(struct passenger);

	pass=(struct passenger*) malloc(n * sizeof(struct passenger));
	rewind(f);
	for(i=0;i<n;i++){
		fread(&pass[i],sizeof(struct passenger),1,f);
	}
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(pass[i].rno>pass[j].rno){
				pass1=pass[i];
				pass[i]=pass[j];
				pass[j]=pass1;
			}
		}
	}
	printf("\n\t\t\tNo.  \tName \t\tAge  \tAddress  \tSeat No.\n");
	for(i=0;i<n;i++){
	printf("\n\t\t\t%d  \t%s   \t%d  \t%s  \t%d%c", pass[i].rno, pass[i].name, pass[i].age, pass[i].city, pass[i].seatrow, pass[i].seatcol);	
	}
	printf("\n\n\t\t\tThe List has now been sorted!!");
	fclose(f);
}
// main menu
int main(){
	int ch;
	
	do{
	printf("\n\n\n");
   	printf("\n                                       :::::::::::::::::::::::::::::::::::::::::");
   	printf("\n                                       ::                                     ::");
   	printf("\n                                       ::      \x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06      ::");
   	printf("\n                                       ::      \x06                       \x06      ::");
   	printf("\n                                       ::      \x06       WELCOME TO      \x06      ::");
   	printf("\n                                       ::      \x06                       \x06      ::");
   	printf("\n                                       ::      \x06    Bernard Airlines   \x06      ::");
   	printf("\n                                       ::      \x06                       \x06      ::");
   	printf("\n                                       ::      \x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06\x06      ::");
   	printf("\n                                       ::                                     ::");
   	printf("\n                                       :::::::::::::::::::::::::::::::::::::::::\n\n");
   	table();
	printf("\n\n\t\t\t[1] CREATE RESERVATION");
	printf("\n\t\t\t[2] DISPLAY LIST");
	printf("\n\t\t\t[3] ADD RESERVATION");
	printf("\n\t\t\t[4] CHANGE SEATS");
	printf("\n\t\t\t[5] CANCEL RESERVATION");
	printf("\n\t\t\t[6] NUMBER OF RECORDS");
	printf("\n\t\t\t[7] SEARCH RECORDS");
	printf("\n\t\t\t[8] SORT (ON-SCREEN)");
	printf("\n\t\t\t[0] EXIT");
	printf("\n\n\t\t\tEnter your choice:  ");
		scanf(" %d",&ch);
	
	
		switch(ch){
			case 1:reserve();
				break;
			case 2:display();
				break;
			case 3:append();
				break;
			case 4:change();
				break;
			case 5:cancel();
				break;
			case 6:noOfRecords();
				break;
			case 7:search();
				break;
			case 8:sort();
				break;
			default:	
				break;	
		}
	}while (ch!=0);

	return 0;
}