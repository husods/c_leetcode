#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * mergeAlternately(char * word1, char * word2);

int main()
{
    char * word1 = "abc";
    char * word2 = "pqr";
    
    printf("%s", mergeAlternately(word1, word2));

    return 0;
}



char * mergeAlternately(char * word1, char * word2){
    int i = 0, j = 0, k = 0;
    int l1 = strlen(word1), l2 = strlen(word2);

    char *target = (char *) malloc(sizeof(char) * (l1 + l2 + 1));
    
    while(i < l1 || j < l2)
    {
        if(i < l1)
            target[k++] = word1[i++];
        if(j < l2)
            target[k++] = word2[j++];
    }
    
    target[k] = '\0';

    return target;

}
