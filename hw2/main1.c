#include <stdio.h>
#include <stdlib.h>

int main(){
    
    FILE *file = fopen("lotto.txt", "w");

    int n,a;
    int used[70] = {0};

    scanf("%d",&n);
    srand(1);
    int ans[5][7];
    for(int i=0;i<n;i++){
        int used[70] = {0};
        for(int j=0;j<7;){
            a = (rand()%69)+1;
            if (used[a]==0){
                used[a] = 1;
                ans[i][j] = a;
                j++;
            }
        }

    }
    fprintf(file,"========= lotto649 =========\n");
    for(int g=0;g<5;g++){
        fprintf(file,"[%d]:",g+1);
        if(g>n-1){
            fprintf(file," __ __ __ __ __ __ __");
        }
        else{
            for(int k=0;k<7;k++){
                fprintf(file," %02d",ans[g][k]);
            }
        }
        fprintf(file,"\n");
    }
    fprintf(file,"========= csie@CGU =========\n");




    fclose(file);
    return 0;
}
