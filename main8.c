#include <stdio.h>
#include <stdlib.h>

int main()
{
    int words=1;
    const char end='.';
    char p=0;
    char c = getchar();
    while (c!=end)
    {
        
        if ((p==32)&&((c>=65&&c<=90)||(c>=97&&c<=122)))
                words++;
        p=c;
        c=getchar();
        
    }
    printf("The total words are %d\n",words);
}






