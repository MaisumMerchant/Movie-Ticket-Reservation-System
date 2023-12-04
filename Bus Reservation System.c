#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

void gotoxy(short x, short y)                                             
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

admin () {
	
	char email[100], pass[100];
	
	printf("\n\n -=-=-=-ADMIN MENU-=-=-=-\n");
	
	printf("EMAIL: \n");
	printf("PASSWORD: ");
	
	gotoxy(7,3);
	gets(email);
	
	gotoxy(10,4);
	gets(pass);
	
	puts(email);
	puts(pass);
	
}

int panel() {
	
	char c;
	
	int select=1;
	printf("\n\n -=-=-=-LOGIN MENU-=-=-=-\n");
	
	printf(" \4 Login As Customer \4 \n");
	printf("   Login As Admin   ");
	
	while (1) {
		
        if(kbhit()){
        	
            c = getch();
            system("cls");
            
            if (c == 72) {
            	printf("\n\n -=-=-=-LOGIN MENU-=-=-=-\n");
	
            	printf(" \4 Login As Customer \4 \n");
				printf("   Login As Admin   ");
				select=1;
			}
			
			if (c == 80) {
				printf("\n\n -=-=-=-LOGIN MENU-=-=-=-\n");
	
				printf("   Login As Customer   \n");
				printf(" \4 Login As Admin \4 ");
				select=2;
			}
			
			if (c == 13) {
				system("cls");
	
				if ( select == 1 ) {
				//	customer();
				} else if ( select == 2 ) {
					admin();
					break;
				}
				
			}
			
		}
		
	}
	
	return 0;
	
}

void printmenu(int row, int col, char arr[row][col], int option) {
	
	int i;
	
	for ( i = 0 ; i < row ; i++ ) {
		if(option == i) {
			char temp[100], temp2[100] = " \4 ";
			strcpy(temp, arr[i]);
			strcat(temp2, strcat(temp, " \4 "));
			strcpy(arr[i], temp2);
		} else {
			char temp[100], temp2[100] = "   ";
			strcpy(temp, arr[i]);
			strcat(temp2, strcat(temp, "   "));
			strcpy(arr[i], temp2);
		}
		puts(arr[i]);
	}
	
}

void print(int option) {
	
	int i;
	
	char main_menu[8][100] = {"\n\n           --<:Main Menu:>--\n","Add New Movie Ticketing Record(s)",
	"Display All Movie Ticketing Record(s)","Modify Movie Ticketing Record(s)",
	"Search Movie Ticketing Record(s)","Delete Movie Ticketing Record(s)",
	"All Movies","Quit"};
	
	printmenu(8, 100, main_menu, option);
	
}

/*void addMov(){
	
}

void dispMov(){
	
}

void modMov(){
	
}

void findMov(){
	
}

void delMov() {
	
}

void showmovie()
{
	
	printf("\nChoose a type of movie:\n\n");
	int option;
	printf("1.Action movie\n");
	printf("2.War movie\n");
	printf("3.Sci-fi movie\n");
	printf("4.Horror movie\n");	
	printf("5.Animated movie\n");
	printf("6.Back to main menu\n");
	printf("\nWhat is your option (1-6)? ");
	scanf("%d", &option);
	switch(option)
	 {
		case 1:
			printf("\n1.The Equalizer\n");
			printf("2.Mad Max: Fury Road\n");
			printf("3.John Wick 3\n");
			printf("\nBack to main menu (1)\n");
			printf("Choose another type of movie select (2)\n");
			scanf("%d",&option);
			switch(option)
			{
				case 1:
					printf("\n");
					main();
				case 2:
					printf("\n");
					showmovie();
				default:
					printf("Please select (1) or (2)!\n");
			} while(option!=2);
			break;
		case 2:
			printf("\n1.Saving Private Ryan\n");
			printf("2.Un long dimanche de fiancailles\n");
			printf("3.Braveheart\n");
			printf("\nBack to main menu select (1)\n");
			printf("Choose another type of movie select (2)\n");
			scanf("%d",&option);
			switch(option)
			{
				case 1:
					printf("\n");
					main();
				case 2:
					printf("\n");
					showmovie();
				default:
					printf("Please select (1) or (2)!\n");
			} while(option!=2);
			break;
		case 3:
			printf("\n1.Avengers:EndGame\n");
			printf("2.Captain Marvel\n");
			printf("3.Spider-Man:Far From Home\n");
			printf("\nBack to main menu select (1)\n");
			printf("Choose another type of movie select (2)\n");
			scanf("%d",&option);
			switch(option)
			{
				case 1:
					printf("\n");
					main();
				case 2:
					printf("\n");
					showmovie();
				default:
					printf("Please select (1) or (2)!\n");
			} while(option!=2);
			break;
		case 4:
			printf("\n1.IT\n");
			printf("2.Get Out\n");
			printf("3.The Witch\n");
			printf("\nBack to main menu select (1)\n");
			printf("Choose another type of movie select (2)\n");
			scanf("%d",&option);
			switch(option)
			{
				case 1:
					printf("\n");
					main();
				case 2:
					printf("\n");
					showmovie();
				default:
					printf("Please select (1) or (2)!\n");
			} while(option!=2);
			break;
		case 5:
			printf("\n1.Inside Out\n");
			printf("2.Zootopia\n");
			printf("3.Finding Nemo\n");
			printf("\nBack to main menu select (1)\n");
			printf("Choose another type of movie select (2)\n");
			scanf("%d",&option);
			switch(option)
			{
				case 1:
					printf("\n");
					main();
				case 2:
					printf("\n");
					showmovie();
				default:
					printf("\nPlease select (1) or (2)!\n");
			} while(option!=2);
			break;
		case 6:
			main();
		default:
			printf("Please select a correct number (1-6)!");
	} while(option!=6);
}
*/
void main() {	
		
	 if (panel()) {
		
		
	char c;
	int option=1;	
		
	print(option);
		
		
		
	while (1) {
		
        if(kbhit()){
        	
            c = getch();
            system("cls");
            
            if (c == 80) {
            	if (option < 7) {
            		option++;
				}
			}
			
			if (c == 72) {
				if (option > 1) {
					option--;
				}
			}
			
			print(option);
		/*	
			if (c == 13) {
				
				switch(option) {
					
					case 1:
						print(1);
					break;
					case 2:
					 	print(2);
					break;
					case 3:
						print(3);
					break;
					case 4:
						print(4);
					break;
					case 5:
						print(5);
					break;
					case 6:
						showmovie();
					break;
					case 7:
						print(7);
					break;
			
				}
			
       		} */
       		
    	}

	}
	 
	}

}


