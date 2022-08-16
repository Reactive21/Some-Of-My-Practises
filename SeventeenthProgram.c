#include <stdio.h>
int main() {
	char str[]="ekmek elden su golden 232";
	
	int i;
	int vowel=0, digit=0, space=0, consonant=0;
	while(str[i]!='\0')
	{
		//Checking for vowels
		if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		vowel++;
		//Checking for digits
		else if ('0'<=str[i] && str[i]<='9')
		digit++;
		//Checking for spaces
		else if (str[i]==' ')
		space++;
		//Checkink for consonants
		else
		consonant++;
		i++;
	}
	printf("Vowels are this much: %d\n",vowel);
	printf("Spaces are this much: %d\n",space);
	printf("Digits are this much: %d\n",digit);
	printf("Consonants are this much: %d\n",consonant);
   return 0;
}
