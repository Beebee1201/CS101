#include <stdio.h>
#include <string.h>
int main()
{
    FILE *file = fopen("main.c", "r");
    FILE *out = fopen("main.txt", "w+");
    
    
    char buffer[1024];
    int n=1;
    while ((fgets(buffer,sizeof(buffer), file)) > 0) {
        if (strncmp(buffer, "int main()\n",10)==0){
            fprintf(out,"%d\n",n);
          	break;
        }
        n++;
        
    }

    fclose(file);
    fclose(out);



    return 0;
}
