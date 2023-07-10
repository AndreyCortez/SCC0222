#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define max(a, b) (a > b ? a : b)

int cmp_str(char* str1, char* str2){
	if(strlen(str1) != strlen(str2)) return 0;
	int n = strlen(str1);

	for(int i = 0; i < n; i++){
		char c1 = str1[i];
		char c2 = str2[i];

		//if(isspace(c1) && isspace(c2)) continue;

		if(c1 < 'a') c1 = c1 - 'A' + 'a';
		if(c2 < 'a') c2 = c2 - 'A' + 'a';

		if(c1 != c2) return 0;
	}

	return 1;
}

int main(void){
	char inv[32];
	char* text = NULL;
	char c;
	int text_tam = 1;
	int num_inv = 0;
	int old_i = 0;

	scanf(" %s", inv);

	while((c = getchar()) != EOF){
		text_tam++;
		text = realloc(text, text_tam);
		text[text_tam - 2] = c;
		text[text_tam - 1] = '\0';
	}

	for(int i = 0; i < text_tam; i++){
		char current = text[i];
		if(isspace(current) || current == '\n' || current == '\0'){
			char text_part[i - old_i + 1];
			strncpy(text_part, text + old_i, i - old_i);
			text_part[i - old_i] = '\0';
			old_i = i + 1;
			if(cmp_str(inv, text_part)) num_inv++;
		}
	}

	printf("[Palavras invasoras: %d]\n", num_inv);

	old_i = 0;

	for(int i = 0; i < text_tam; i++){
		char current = text[i];
		if(isspace(current) || current == '\n' || current == '\0'){
			char text_part[i - old_i + 1];
			strncpy(text_part, text + old_i, i - old_i);
			text_part[i - old_i] = '\0';
			old_i = i + 1;
			if(!cmp_str(inv, text_part)){
				printf("%s%c", text_part, current);
			}
		}
	}
}