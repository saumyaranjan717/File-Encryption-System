TASK-0
#include<stdio.h>
#include<string.h>
#include<stdint.h>
int main(){
    char username[500];
    char password[500];
    char user[500];
    char pass[500];
    printf("enter the username=\t");
    scanf("%s", username);
    printf("enter the password=\t");
    scanf("%s", password);
    
    printf("user id created\n");
    FILE *fp=fopen("test1.txt", "a");
    if(fp==NULL){
        printf("error\n");
        return 0;
    }
    fprintf(fp,"%s,%s",user,pass);
    fprintf(fp,"%s,%s",username,password);
    if(strcmp(user,username)==0 && strcmp(pass,password)==0){
        printf("correct credentials");
    }
    else{
        printf("wrong credentials");
    }
    fclose(fp);
    printf("acc created");
    return 0;
} 
