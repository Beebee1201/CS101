
#include <stdio.h>
#include <string.h>

typedef struct employee{
    int id;
    char name[12];
    int age;
    float salary;
}empt;

void emp_info(empt emp){
    printf("emploee id = %d\nemploee name = %s\nemploee age = %d\nemploee salary = %f\n\n",emp.id,emp.name,emp.age,emp.salary);
}

int get_avg_age(empt emp[],int n){
    int sum;
    for(int i=0;i<3;i++){
        sum+=emp[i].age;
    }
    return sum/3;
}

void emp_w(empt emp[],int n){
    FILE* fp = fopen("employee.bin","wb+");
    for (int i=0;i<n;i++){
        fwrite(emp+i,sizeof(empt),1,fp);
    }
    fclose(fp);
    return;
}

void emp_r(empt emp[]){
    FILE* fp = fopen("employee.bin","rb");
    int i = 0;
    while(fread(emp+i,sizeof(empt),1,fp)){
        printf("[%d] %d %s\n",i,emp[i].id,emp[i].name);
        i++;
    }
    fclose(fp);
    return;
}

int main()
{
    empt emp[3];
    
    emp[0].id = 1;
    emp[0].age = 20;
    emp[0].salary = 30000.0;
    strcpy(emp[0].name,"IU");
        
    emp[1].id = 2;
    emp[1].age = 26;
    emp[1].salary = 36000.0;
    strcpy(emp[1].name,"taylor");
        
    emp[2].id = 3;
    emp[2].age = 31;
    emp[2].salary = 90000.0;
    strcpy(emp[2].name,"swift");
    
    emp_w(emp,3);
    empt empr[10];
    emp_r(empr);
    
    for(int i=0;i<3;i++){
        emp_info(empr[i]);
    }

    return 0;
}
