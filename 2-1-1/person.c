#include <stdio.h>

        typedef struct{
                char name[10];
                int age;
        }Person;

int main(){

	Person arr[3];

	for (int i=0 ; i<3 ; i++){
		scanf("%s",arr[i].name);
		scanf("%d",&arr[i].age);
	}

	for (int i=0; i<3 ; i++){
		printf("Name:%s, Age:%d\n",arr[i].name,arr[i].age);
	}
	return 0;
}
