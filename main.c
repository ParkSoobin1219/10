#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char word[30];
	FILE* fp=NULL;
	fp=fopen("sample.txt", "w");
	

	printf("input a word:");
	scanf("%s", word);
	fprintf(fp, "%s\n", word);
	
	printf("input a word:");
	scanf("%s", word);
	fprintf(fp, "%s\n", word);
	
	printf("input a word:");
	scanf("%s", word);
	fprintf(fp, "%s\n", word);
    
	
	fclose(fp);
	
	return 0;
}
