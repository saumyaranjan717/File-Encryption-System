
void perform_task3(){
printf("Task 3: Reading Encrypted Files\n");
char file[50];
char text[50];
int key;
char dec[50];
FILE *fp;
printf("enter the file name-");
scanf("%s",file);
printf("\nenter key-");
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
