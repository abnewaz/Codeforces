#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s[102];

    fgets(s, sizeof(s), stdin);

    for(i=0; i<strlen(s)-1; i++)
    {

        //printf("%c",s[i]);
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
        if(s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i')
        {
            continue; //do nothing
        }

//        if(s[i] >= 'a' && s[i] <= 'z')
//        {
//
//        }
        else
        {
            printf(".%c",s[i]);
        }
//        if(!(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'))
//        {
//            printf(".%c",s[i]);
//        }


        //printf("%c",s[i]);
    }

    return 0;
}
