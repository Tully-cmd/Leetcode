#include<stdio.h>
#include<string.h>

char * firstPalindrome(char ** words, int wordsSize){
        
    if(words[0] == NULL) {
        return "";
    }
    
    for (int i = 0; i < wordsSize; i += 1) {
        
        char stringReversed[101] = "";
        
        strcpy(stringReversed,words[i]);
        
        strrev(stringReversed);
        
        if( strcmp(words[i],stringReversed) == 0 ) {
            
            return words[i];
        }
    }
    
    return "";
    
}
//strrev not provided by Leetcode
//source:
//https://android.googlesource.com/kernel/lk/+/qcom-dima-8x74-fixes/lib/libc/string/strrev.c

void strrev(unsigned char *str)
{
	int i;
	int j;
	unsigned char a;
	unsigned len = strlen((const char *)str);
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		a = str[i];
		str[i] = str[j];
		str[j] = a;
	}
}
