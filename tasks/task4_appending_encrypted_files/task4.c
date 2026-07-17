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
        dec[i]=text[i]^key;
        }
printf("decrypted text-%s\n",dec);
strcat(dec,text);
for(int i=0; dec[i] != '\0'; i++){
        dec[i] = dec[i] ^ key;
        dec[i] = '\0';
}
fp=fopen(file,"w");
fprintf(fp,"%s", dec);
fclose(fp);
return;
}

