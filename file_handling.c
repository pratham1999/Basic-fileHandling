

# include <stdio.h>
# include <string.h>

int main( )
{


	FILE *filePointer ;

	char string[50]
		= "CSE Branch, JIIT 128",data[50];


	filePointer = fopen("info.txt", "r") ;
	if ( filePointer == NULL )
    {
        printf( "failed to open file\n" ) ;
    }
    else
    {

        printf("file opened in read mode.\n") ;


        while( fgets (data, 50, filePointer ) != NULL )
        {


            printf( "%s" , data) ;
         }
    }

    filePointer = fopen("info.txt", "a") ;


	if ( filePointer == NULL )
	{
		printf( "failed to open the file\n" ) ;
	}
	else
	{
	    printf("file  opened in append mode.\n") ;


		if ( strlen (string) > 0 )
		{


			fputs(string, filePointer) ;
			fputs("\n", filePointer) ;
		}



		fclose(filePointer) ;


		printf("file  closed.") ;
	}
	return 0;
}

