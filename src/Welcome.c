#include "Header.h"

/*initiate setCoord*/
COORD setCoord={};

/*Goto function*/
void gotoxy(int x , int y){
    setCoord.X=x;
    setCoord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), setCoord);
}

/*Set background function	*/
void background(){
	
    system("color 68"); /*changing background*/
    int x= 0;
    int y= 0 ;
    
    /*print border*/
    gotoxy(x,y); /*starting coordinate*/
    int i,j;
	for ( i= 0 ; i <80 ; i++){
    	printf("=");
	}
	
	printf("\n");
	y++;
	
	for ( j =0 ; j < 39 ; j++ ){
		gotoxy(x,y);
		for ( i= 0 ; i <80 ; i++){
			if (i==0){
				printf("%c",186);
			}
		}
		y++;
	}	
	x = 79;
	y = 1 ;
	for ( j =0 ; j < 39 ; j++ ){
		gotoxy(x,y);
		for ( i= 0 ; i <80 ; i++){
			if (i == 79){
					printf("%c\n",186);
			}
		}
		y++;
	}
	x = 0;
	gotoxy(x,y);
	for ( i= 0 ; i <80 ; i++){
    	printf("=");
	}
	/*footer*/
	gotoxy(30,39);
    printf("copyright hadi & jo\n");
}

/*Loading bar*/
void loading(){
	
    int r;
    int q;
    
    gotoxy(28,18);
    printf("loading game please wait\n");
    gotoxy(28,19);
    
    /*printing loading bar*/
    for(r=1;r<=24;r++){
        for(q=0;q<=50000000;q++);
        printf("%c",221);
    }
}

/*Membuat panah yang nanti digerakkan*/
void arrow(int ap, int rp){
    if (rp == ap){
        printf("===>  ");
    }
    else {
        printf("      ");
    }

}

/*Main menu welcome screen*/
void menu(){
    int pos = 1;
    int kpress = 0;
	int i;
	int j;
    while(kpress !=13){
	    system("cls");
	    background();
	    
		/*display snake logo*/
		int p=1;
		int q = 12;
		gotoxy(q,p);printf("     _______..__   __.      ___       __  ___  _______ ");
		gotoxy(q,p+1);printf("    /       ||  \\ |  |     /   \\     |  |/  / |   ____|");
		gotoxy(q,p+2);printf("   |   (----`|   \\|  |    /  ^  \\    |  '  /  |  |__   ");
		gotoxy(q,p+3);printf("    \\   \\    |  . `  |   /  /_\\  \\   |    <   |   __|  ");
		gotoxy(q,p+4);printf(".----)   |   |  |\\   |  /  _____  \\  |  .  \\  |  |____ ");
		gotoxy(q,p+5);printf("|_______/    |__| \\__| /__/     \\__\\ |__|\\__\\ |_______|");
	                                                       
		gotoxy(q,p+7);printf("        _______      ___      .___  ___.  _______      ");   
		gotoxy(q,p+8);printf("       /  _____|    /   \\     |   \\/   | |   ____|     ");   
		gotoxy(q,p+9);printf("      |  |  __     /  ^  \\    |  \\  /  | |  |__        ");  
		gotoxy(q,p+10);printf("      |  | |_ |   /  /_\\  \\   |  |\\/|  | |   __|       ");  
		gotoxy(q,p+11);printf("      |  |__| |  /  _____  \\  |  |  |  | |  |____     ");   
		gotoxy(q,p+12);printf("       \\______| /__/     \\__\\ |__|  |__| |_______|    ");  
		
		
		/*Display smaller table*/
		q = 8 ;
		gotoxy(q,p+15);for ( i= 0 ; i <64 ; i++){
	    printf("=");
		}
		printf("\n");
		for ( j =0 ; j < 10 ; j++ ){
		gotoxy(q,p+16);
			for ( i= 0 ; i <64 ; i++){
				if (i==0){
					printf("%c",186);
				}
				else if (i == 63){
						printf("%c",186);
				}
				else{
					printf(" ");
				}
			}
			p++;
		}
		
		/*Display menu options*/
		p= 26;
		gotoxy(q,p);for ( i= 0 ; i <64 ; i++){
	    printf("=");
		}
		q = 30;
		p = 18;   
		gotoxy(q,p);
	    arrow(1,pos);printf("PLAY\n");
	    gotoxy(q,p+2);
	    arrow(2,pos);printf("how to play\n");
	    gotoxy(q,p+4);
	    arrow(3,pos);printf("high score\n");
	    gotoxy(q,p+6);
	    arrow(4,pos);printf("EXIT\n");
	    
	    /*Display snake*/
	    p = 28;
	    q = 20;
		gotoxy(q,p);printf("   _________         _________");p++;
		gotoxy(q,p);printf("  /         \\       /         \\");p++;
		gotoxy(q,p);printf(" /  /~~~~~\\  \\     /  /~~~~~\\  \\");p++;
		gotoxy(q,p);printf(" |  |     |  |     |  |     |  |         /");p++;
		gotoxy(q,p);printf(" |  |     |  |     |  |     |  |       //");p++;
		gotoxy(q,p);printf("(o  o)    \\  \\_____/  /     \\  \\_____/ /");p++;
		gotoxy(q,p);printf(" \\__/      \\         /       \\        /");p++;
		gotoxy(q,p);printf("  |         ~~~~~~~~~         ~~~~~~~~");p++;
		gotoxy(q,p);printf("  ^");p++;
	    
	                     	
		/*waiting keyboard input to change coordinate*/                                  
	    kpress = getch();
	
		/*
		1. keyboard input down and hasnt reached the last position -> will go down 
		2. keyboard input down and has reached the last position -> position will be the first option
		3. keyboard input up and hasnt reached the first position -> will go up
		4. keyboard input up and has reached the last position -> position will be the last place
		5. else -> will stay
		*/
	    if (kpress== DOWN && pos != MAX_POS){
	        pos++;
	    }
	    else if (kpress== UP && pos != MIN_POS){
	        pos--;
	    }
	    else if(kpress == DOWN && pos == MAX_POS){
	    	pos = MIN_POS;
		}
	    else if(kpress == UP && pos == MIN_POS){
	    	pos = MAX_POS;
		}
	    else{
	        pos = pos;
	    }
    }
    
    /*switch case position into opening other functions*/
    switch (pos){
    case 1:
        system("cls");
        /*start playing snake*/
		startFunction();
		/*print lose*/
		printLose();
    case 2:
        system("cls");
        /*print about the game*/
		about();
        break;
    case 3:
        system("cls");
        /*print leaderboard*/
		showScore();
        break;
    case 4:
    	system("cls");
    	/*asking user if they're sure to quit the game*/
		areYouSure();
        return;
        break;
    }

}

/*Main Starts Here*/
void mainFunction() {
	system("cls");
	background();
	HANDLE wHnd;    /*Handle to write to the console.*/ 
	wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTitle("Snake Game Project 1.0.0");
	SMALL_RECT windowSize = {0, 0, MAIN_BORDER_RIGHT+10, MAIN_BORDER_BOTTOM+10};
	SetConsoleWindowInfo(wHnd, 1, &windowSize);
	loading();
	menu();
    getch();
    return;
}


