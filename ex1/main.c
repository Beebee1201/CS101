

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE* fp;
    int a[] = {0,1,2};
    char b[] = "ABC";
    float c[] = {1.1,1.2,1.3};
    
    int ra[3];
    char rb[4];
    float rc[3];
    
    fp = fopen("a.bin","wb+");

    fwrite(a,sizeof(a),1,fp);
    fwrite(b,sizeof(b),1,fp);
    fwrite(c,sizeof(c),1,fp);
    fseek(fp, 0, SEEK_SET);
    fread(ra,sizeof(int),3,fp);
    fread(rb,sizeof(char),4,fp);
    fread(rc,sizeof(float),3,fp);
    for(int i=0;i<3;i++){
        printf("%d ",ra[i]);
    }
    printf("\n");
    for(int i=0;i<3;i++){
        printf("%c ",rb[i]);
    }
    printf("\n");
    for(int i=0;i<3;i++){
        printf("%.1f ",rc[i]);
    }
    printf("\n");
    fclose(fp);
    return 0;
}
