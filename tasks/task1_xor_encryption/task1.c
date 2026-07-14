TASK-1
#include<stdio.h>
#include<string.h>
int main()
{
char username[300];
char password[300];
char key=1;
printf("enter the username-");
scanf("%s",&username);
printf("enter the password-");
scanf("%s",&password);
for(int i=0; password[i]!='\0';i++){
    password[i]=password[i]^key;
}
printf("encrypted password-");
for(int i=0; password[i]!='\0'; i++){
    printf("%c", password[i]);
}
for(int i=0; password[i]!='\0';i++){
    password[i]=password[i]^key;
}
printf("decrypted password-%s\n",password);
return 0;
}
