#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE* fp;
	fp = fopen("sample.txt","w"); 	//쓰기모드로 open file
	char word[100];
	int i;
	for(i=0;i<3;i++){
		printf("input a word:");
		scanf("%s",word);
		fprintf(fp,"%s\n",word);
	}
	fclose(fp);
	
	return 0;
}
