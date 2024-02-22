#include<stdio.h>
#include<stdlib.h>
int main(void){
  struct student{
    char name[50];
    int age;
    int mark;
  }a[2];
for(int i=0;i<2;i++){
  printf("enter your Name : ");
  scanf("%s",&a[i].name);
  printf("enter your age : ");
  scanf("%d",&a[i].age);
  printf("enter your mark : ");
  scanf("%d",&a[i].mark);
}


}
