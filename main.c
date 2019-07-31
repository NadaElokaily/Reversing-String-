#include <stdio.h>
#include <string.h>

char * reverseString(char * str, int size){
    char * ret=(char *)calloc (size,sizeof(char));
    char * temp= (char *)malloc (size*sizeof(char));
    int updatedsize = size;
    int i ,j=0;
    for (i=0; i <size; i++){
        if ((str[size-1-i]!=' ')){
            j++;
            if(i == size-1){
                strncpy (temp, str + updatedsize-j, j);
                temp[j]='\0';
                strcat(ret,temp);
                continue;
            }
        }
        else {
            strncpy (temp, str + updatedsize-j, j);
            temp[j]='\0';
            j++;
            updatedsize-=j;
            strcat(ret,temp);
            strcat(ret," ");
            free(temp);
            j=0;
        }
    }
    return ret;
}

int main()
{
    //
   char * str={"She is beautiful"};
   str=reverseString(str,17);
   printf("%s",str);
   getchar();
   return 0;
}
