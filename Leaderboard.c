#include "Header.h"

struct Score{
	char inisial[3];
	int data;
	int key;
	struct Score *next;
};

struct Score *head = NULL;
struct Score *current = NULL;

int number;


void printLose(){
    int n=0;
    int a=0;
    for(n=1 ; n <= 7 ; n++){
    a= n ;
    if (a == 1) {
	    system("cls");
	    system("COLOR 8C");
	    printf("\n\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("00000000000   000000000000         00000         0000           00000000000\n");printf("\t\t\t");
	    printf("00000000000   000000000000  00000  00000  00000000000  00000000000000000000\n");printf("\t\t\t");
	    printf("00000000000   000000000000  00000  00000  00000000000  00000000000000000000\n");printf("\t\t\t");
	    printf("00000000000   000000000000  00000  00000         0000           00000000000\n");printf("\t\t\t");
	    printf("00000000000   000000000000  00000  000000000000  0000  00000000000000000000\n");printf("\t\t\t");
	    printf("00000000000   000000000000  00000  000000000000  0000  00000000000000000000\n");printf("\t\t\t");
	    printf("00000000000          00000         000000        0000           00000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");
	    Sleep(100);
	}
    if (a == 2) {
		system("cls");
		system("COLOR 8C");
		printf("\n\t\t\t");
		printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
		printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
		printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
		printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
		printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
		printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
		printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
		printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
		printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
		printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
		printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");
		Sleep(100);
	}
    if (a == 3) {
	    system("cls");
	    system("COLOR 8C");
	    printf("\n\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("00000000000   000000000000         00000         0000           00000000000\n");printf("\t\t\t");
	    printf("00000000000   000000000000  00000  00000  00000000000  00000000000000000000\n");printf("\t\t\t");
	    printf("00000000000   000000000000  00000  00000  00000000000  00000000000000000000\n");printf("\t\t\t");
	    printf("00000000000   000000000000  00000  00000         0000           00000000000\n");printf("\t\t\t");
	    printf("00000000000   000000000000  00000  000000000000  0000  00000000000000000000\n");printf("\t\t\t");
	    printf("00000000000   000000000000  00000  000000000000  0000  00000000000000000000\n");printf("\t\t\t");
	    printf("00000000000          00000         000000        0000           00000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");
	    Sleep(100);
	}
    if (a == 4) {
	    system("cls");
	    system("COLOR 8C");
	    printf("\n\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");
	    Sleep(100);
	}
    if (a == 5) {
	    system("cls");
	    system("COLOR 8C");
	    printf("\n\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("00000000000   000000000000         00000         0000           00000000000\n");printf("\t\t\t");
	    printf("00000000000   000000000000  00000  00000  00000000000  00000000000000000000\n");printf("\t\t\t");
	    printf("00000000000   000000000000  00000  00000  00000000000  00000000000000000000\n");printf("\t\t\t");
	    printf("00000000000   000000000000  00000  00000         0000           00000000000\n");printf("\t\t\t");
	    printf("00000000000   000000000000  00000  000000000000  0000  00000000000000000000\n");printf("\t\t\t");
	    printf("00000000000   000000000000  00000  000000000000  0000  00000000000000000000\n");printf("\t\t\t");
	    printf("00000000000          00000         000000        0000           00000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");
	    Sleep(100);
		}
    if (a == 6) {
	    system("cls");
	    system("COLOR 84");
	    printf("\n\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");
	    Sleep(100);
	}
    if (a == 7) {
	    system("cls");
	    system("COLOR 8C");
	    printf("\n\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("00000000000   000000000000         00000         0000           00000000000\n");printf("\t\t\t");
	    printf("00000000000   000000000000  00000  00000  00000000000  00000000000000000000\n");printf("\t\t\t");
	    printf("00000000000   000000000000  00000  00000  00000000000  00000000000000000000\n");printf("\t\t\t");
	    printf("00000000000   000000000000  00000  00000         0000           00000000000\n");printf("\t\t\t");
	    printf("00000000000   000000000000  00000  000000000000  0000  00000000000000000000\n");printf("\t\t\t");
	    printf("00000000000   000000000000  00000  000000000000  0000  00000000000000000000\n");printf("\t\t\t");
	    printf("00000000000          00000         000000        0000           00000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");printf("\t\t\t");
	    printf("000000000000000000000000000000000000000000000000000000000000000000000000000\n");
	    Sleep(2000);
	    system("cls");
	    }
    }
}

//
//void sort(){
//
//   int i, j, k, tempKey, tempData;
//   struct Score *current;
//   struct Score *next;
//	
//   int size = length();
//   k = size ;
//	
//   for ( i = 0 ; i < size - 1 ; i++, k-- ) {
//      current = head;
//      next = head->next;
//		
//      for ( j = 1 ; j < k ; j++ ) {   
//
//         if ( current->data > next->data ) {
//            tempData = current->data;
//            current->data = next->data;
//            next->data = tempData;
//
//            tempKey = current->key;
//            current->key = next->key;
//            next->key = tempKey;
//         }
//			
//         current = current->next;
//         next = next->next;
//      }
//   }   
//}

void enterScore(int score){
    FILE *fp;
    char nama[3];
    system("cls");
    system("COLOR 8f");
    fp = fopen("leaderboard.txt", "a");
    printf("\t\t\t");
    printf("=====================================================\n");
    printf("\n\t\t\tMasukkan 3 huruf inisialmu: ");
    scanf("%s", &nama);
 	fprintf(fp, "%s \t %d", nama, score);
	fclose(fp);
}

void showScore(){
    FILE *fp;
    char str[MAXCHAR];
    char filename[] = "leaderboard.txt";
    system("cls");
	number = 1;
    fp = fopen(filename, "r");
    if (fp == NULL){
        // printf("Could not open file %s", filename);
        // return 1;
    	printf("\t\t\t========================================\n");
    	printf("\t\t\t\t\tScoreBoard\t\t\n\n");
    	printf("\t\t\t========================================\n");
        printf("\t\t\tScoreboard is empty.\n");
    }
    else{
    	printf("\t\t\t========================================\n");
    	printf("\t\t\t\t\tScoreBoard\t\t\n\n");
    	printf("\t\t\t========================================\n");
    	printf("\t\t\t--Best\t Name \t Score--\n\n");
	}
	printf("\t\t\t========================================\n");
    while (fgets(str, MAXCHAR, fp) != NULL){
		printf("\t\t\t--%d \t %s", number,  str);
        number++;
        if(number == 11){
        	break;
		}
	}

    fclose(fp);
    printf("\n\n\t\t\tEnter to go to main.");
    getch();
    menu();
}