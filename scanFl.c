//Brianna Hill bhill28@student.gsu.edu
#include <stdio.h>
#include <stdlib.h>

void main() //main
{
    FILE *fptr;
    char ch;
    int wd=1,charct=1; //scan file for words $ characters
    char fn[20];  //scan file for filename

        printf(" Enter filename to be opened: "); //prompt user for input
        scanf("%s",fn);

    fptr=fopen(fn,"r");
    if(fptr==NULL) //Not application or not found 
     {
         printf(" The file unfortunately does not exist or can not be opened."); // File was not found in search
      }
    else
        {
          ch=fgetc(fptr);
          printf(" Showing contents of entered file %s : ",fn); //prompt user for input  
          while(ch!=EOF)
            {
                printf("%c",ch);
                if(ch==' '||ch=='\n') //scanning fr spaces
                    {
                        wd++; //scanning for words 
                    }
                    else
                    {
                        charct++; //increment
                    }
                ch=fgetc(fptr);
            }
        printf("\n Number of words in the file %s: %d\n",fn,wd-2); //display number of words in file 
        printf(" Number of characters in the file %s: %d\n\n",fn,charct-1); //display number of words in file 
        }
    fclose(fptr); //close file
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LSIZ 128 
#define RSIZ 10 

int mainI(void) //main
{
    char line[RSIZ][LSIZ];
        char fn[20];
 FILE *fptr = NULL;
    int i = 0;
    int txt = 0;

        printf("Enter file: "); //prompt user for file name
        scanf("%s",fn); //scan contents of entered file

    fptr = fopen(fn, "r");

    while(fgets(line[i], LSIZ, fptr)) //reading lines of file
        {
        line[i][strlen(line[i]) - 1] = '\0';
        i++; //increment
    }
    txt = i;
        printf("\n The contents of the file %s: \n",fn); //display entered file    
    for(i = 0; i < txt; ++i)
    {
        printf(" %s\n", line[i]); //print number of lines
    }
 printf("\n The lines in the file: %d\n",txt-1); //display number of lines 
    printf("\n");

    return 0;
}
