TASK-2

#include<stdio.h>
#include<string.h>
int main(){
char file[300];
char text[300];
int key=1234;
int i;
FILE *fp;
printf("file name-");
scanf("%s", file);
printf("text-");
scanf("%s", text);
printf("enter key-");
scanf("%d", &key);
fp=fopen(file,"r");
if (fp!=NULL){
    printf("file exists");
    fclose(fp);
    return 0;
}
fp=fopen(file,"w");
for(int i=0; text[i]!='\0';i++){
    text[i]=text[i]^key;
}
fprintf(fp,"%s",text);
fclose(fp);
printf("%s",text);
return 0;
}
