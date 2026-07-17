
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
