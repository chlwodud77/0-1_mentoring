#include <stdio.h>
#include <string.h>

int main(){
	char words[101];
	int alphabet[26];

	int i;
	for(i=0; i<26; i++){
		alphabet[i] = 0;
	}
	scanf("%s",words);
	for(i=0; words[i] != '\0'; i++){
		switch (words[i]){
			case 'a': alphabet[0]+=1;
						break;
			case 'b': alphabet[1]+=1;
						break;
			case 'c': alphabet[2]+=1;
						break;
			case 'd': alphabet[3]+=1;
						break;
			case 'e': alphabet[4]+=1;
						break;
			case 'f': alphabet[5]+=1;
						break;
			case 'g': alphabet[6]+=1;
						break;
			case 'h': alphabet[7]+=1;
						break;
			case 'i': alphabet[8]+=1;
						break;
			case 'j': alphabet[9]+=1;
						break;
			case 'k': alphabet[10]+=1;
						break;
			case 'l': alphabet[11]+=1;
						break;
			case 'm': alphabet[12]+=1;
						break;
			case 'n': alphabet[13]+=1;
						break;
			case 'o': alphabet[14]+=1;
						break;
			case 'p': alphabet[15]+=1;
						break;
			case 'q': alphabet[16]+=1;
						break;
			case 'r': alphabet[17]+=1;
						break;
			case 's': alphabet[18]+=1;
						break;
			case 't': alphabet[19]+=1;
						break;
			case 'u': alphabet[20]+=1;
						break;
			case 'v': alphabet[21]+=1;
						break;
			case 'w': alphabet[22]+=1;
						break;
			case 'x': alphabet[23]+=1;
						break;
			case 'y': alphabet[24]+=1;
						break;
			case 'z': alphabet[25]+=1;
						break;	
		}
	}

	for(i=0; i<26; i++){
		printf("%d ",alphabet[i]);
	}

	return 0;
}

// a b c d e f g h i j k l m n o p q r s t u v w x y z 26 