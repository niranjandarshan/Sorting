#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
void insert(int a[],int);
void show(int a[],int);
void bubble(int a[],int);
void selection(int a[],int);
void insertion_sort(int a[],int);
void heapsort(int a[]);
void build_max_heap(int a[]);
void max_heapify(int a[]);
clrscr();
int a[10],size,i,j,choice;
printf("\n Enter the size of an Array");
scanf("%d",&size);
printf("1.Bubble sort");
printf("2.Selection sort");
printf("\n 3. insertion sor");
printf("5.exit");

while(1){
printf("\n Enter Your choice");
scanf("%d",&choice);

switch(choice){
case 1:
       //	for(i=0;i<size;i++){
	insert(a, size);
	bubble(a, size);
	show(a, size);


	break;
case 2:
       //	for(i=0;i<size;i++){
	insert(a, size);
	selection(a, size);
	show(a, size);

	break;
case 3:
       //	for(i=0;i<size;i++){
	insert(a, size);
	insertion_sort(a, size);
	show(a, size);

	break;

case 5:
	exit(1);
default:
	exit(1);
}


getch();
}
}
void insert(int a[],int size){
	int i;
	printf("Enter item in an array");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
}
void show(int a[],int size){
int i;
	for(i=0;i<size;i++){
		printf("%d",a[i]);
	}
}
void bubble(int a[],int size){
	int i,j,flag=1;
	for(i=1;i<=size-1&&flag;i++){
		flag=0;
		for(j=0;j<size-i;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
		}
	}
}
void selection(int a[],int size){
	int i,j,temp,min,count,loc;
	for(i=0;i<=size-1;i++){
		min=a[i];
		for(j=i+1;j<size;j++){
			if(min>a[j]){
				min=a[j];
				loc=j;
		}	}
			temp=a[i];
			a[i]=a[loc];
			a[loc]=temp;

	}

}
void  insertion_sort(int a[],int size){
int i,j,key;
for(j=1;j<size;j++){
key=a[j];i=j-1;
while(i>=0 && a[i]>key)
{
a[i+1]=a[i];
i--;
}
a[i+1]=key;
}

}
