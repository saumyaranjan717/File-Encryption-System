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

