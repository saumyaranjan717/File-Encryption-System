#include<stdio.h>
#include<string.h>
#include<stdint.h>

void registerr(const char* user, const char* pass){
        printf("username-%s\n",user);
        printf("password-%s\n",pass);
         FILE *fp=fopen("test0.txt", "a");
    if(fp==NULL){
        printf("error\n");
    }
    fprintf(fp,"%s,%s\n",user,pass);
        fclose(fp);
}

/* void login(const char* user, const char* pass){
        printf("username-%s\n",user);
        printf("password-%s\n",pass);
         FILE *fp=fopen("test0.txt", "r");
    if(fp==NULL){
        printf("error\n");
    }
        char str_user[50];
        char str_pass[50];
while (fscanf(fp, "%49[^,],%49s", str_user, str_pass) == 2)
{
    if (strcmp(user, str_user) == 0 &&
        strcmp(pass, str_pass) == 0)
    {
        printf("Login Success\n");
        fclose(fp);
        return;
    }

printf("Login Failed\n");
}
        fclose(fp);
}
*/

int login(const char *user, const char *pass)
{
    FILE *fp = fopen("test0.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file\n");
        return;
    }

    char str_user[50];
    char str_pass[50];

    while (fscanf(fp, " %49[^,],%49[^\n]", str_user, str_pass) == 2)
    {
        printf("username-%s\n",str_user);
        printf("password-%s\n",str_pass);
        if (strcmp(user, str_user) == 0 &&
            strcmp(pass, str_pass) == 0)
        {
            printf("Login Success\n");
            fclose(fp);
            return 0;
        }
    }

    printf("Login Failed\n");
    fclose(fp);
return -1;
}

void perform_task1(){
printf("task 1-Implement XOR Encryption\n");
int key;
printf("enter key-");
scanf("%d",&key);
char string[50];
printf("enter any string-");
scanf("%s",string);
char enc[100];
char dec[50];
for(int i=0; i<sizeof(string);i++){
    enc[i]=string[i]^key;
}
printf("encrypted string-%s",enc);
printf("\n");
for(int i=0; i<sizeof(enc);i++){
    dec[i]=enc[i]^key;
}
printf("decrypted string-%s\n",dec);

}

void perform_task2(){
printf("task 2-File Creation with XOR Encryption\n");
char file[50];
char text[50];
int key;
FILE *fp;
printf("Enter file name: ");
    scanf("%s", file);

    printf("Enter text: ");
    scanf("%s", text);

    printf("Enter key: ");
    scanf("%d", &key);

fp=fopen(file,"r");
if (fp!=NULL){
    printf("file exists");
    fclose(fp);
    return 1;
}
fp=fopen(file,"w");
for(int i=0; text[i]!='\0';i++){
    text[i]=text[i]^key;
}
fprintf(fp,"%s",text);
fclose(fp);
return;
}

void perform_task3(){
printf("Task 3: Reading Encrypted Files\n");
char file[50];
char text[50];
int key;
char dec[50];
FILE *fp;
printf("enter the file name-");
scanf("%s",file);
printf("enter key-");
scanf("%d",&key);
fp=fopen(file,"r");
if(fp == NULL)
{
 perror("Error");
 return;
}
fscanf(fp,"%s",text);
for(int i=0; text[i]!=0; i++){
        dec[i]=text[i]^key;
        }
printf("decrypted text-%s\n",dec);
fclose(fp);
}

void perform_task4(){
 printf("Task 4: Appending to Existing Encrypted Files\n");
char file[50];
char text[50];
int key;
char dec[50];
char enc[50];
FILE *fp;
printf("enter the filename(already existing)-");
scanf("%s",file);
printf("enter the text to append-");
scanf("%s",text);
printf("enter the key-");
scanf("%d",&key);
fp=fopen(file,"r");
fscanf(fp,"%s",enc);
for(int i=0; text[i]!=0; i++){
        dec[i]=enc[i]^key;
        }
printf("encrypted text-%s\n",dec);
strcat(dec,text);
for(int i=0; dec[i] != '\0'; i++){
        dec[i] = dec[i] ^ key;
}
for(int i=0; dec[i] != '\0'; i++){
        enc[i] = dec[i] ^ key;
}
printf("appended text-%s\n",enc);
fp=fopen(file,"w");
fprintf(fp,"%s", dec);
fclose(fp);
return;
}

void perform_task5(){
char username[50];
char operation[50];
char file[50];
char logfile[50];
FILE *fp;
printf("Task 5: Logging File Operations\n");
printf("enter username-");
scanf("%s",username);
printf("enter operation(READ, WRITE, ENCRYPT, DECRYPT, DELETE)-");
scanf("%s",operation);
printf("enter filename-");
scanf("%s",file);
printf("enter log file name-");
scanf("%s",logfile);
fp=fopen(logfile,"a");
fprintf(fp,"%s,%s,%s\n", username, operation, file);
fclose(fp);
printf("log saved\n");
printf("%s %s %s\n", username, operation, file);
return;
}

void perform_task6(){
char filename[50];
char username[50];
printf("Task 6: Secure File Deletion\n");
printf("enter username-");
scanf("%s",username);
printf("enter file to be deleted-");
scanf("%s",filename);
if(remove(filename) == 0){
printf("file deleted successfully\n");
}
else{
printf("file not deleted\n");
}
return;
}

int main(){
    char username[50];
    char password[50];
        int input;
int status;
    printf("enter the username=\t");
    scanf("%s", username);
    printf("enter the password=\t");
    scanf("%s", password);
        printf("1. for register\n2. for login\n");
        scanf("%d",&input);
        if(input == 1) registerr(username,password);
        else if(input == 2)  status = login(username,password);
        if(status == 0){
        printf("User can perform other tasks\n");
        printf("Task 1: Implement XOR Encryption\n");
        printf("Task 2: File Creation with XOR Encryption\n");
        printf("Task 3: Reading Encrypted Files\n");
        printf("Task 4: Appending to Existing Encrypted Files\n");
        printf("Task 5: Logging File Operations\n");
        printf("Task 6: Secure File Deletion\n");
        int taskno;
        printf("Enter task number to perform:");
        scanf("%d",&taskno);
        if(taskno == 1) perform_task1();
        if(taskno == 2) perform_task2();
        if(taskno == 3) perform_task3();
        if(taskno == 4) perform_task4();
        if(taskno == 5) perform_task5();
        if(taskno == 6) perform_task6();
}

        return 0;
}
