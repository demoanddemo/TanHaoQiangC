// File: 9.3.c
// Author: TaoKY

#include <stdio.h>

#define NAMLEN 20

struct student_t{
	int num;
	char name[NAMLEN];
	int score[3];
} students[5];

void print(struct student_t *stu);

int main(){
	for (int i = 0; i < 5; i++){
		scanf("%d%s%d%d%d", &students[i].num, students[i].name, &students[i].score[0], 
							&students[i].score[1], &students[i].score[2]);
	}
	print(students);
	return 0;
}

void print(struct student_t *stu){
	for (int i = 0; i < 5; i++){
		printf("%d %s %d %d %d\n", students[i].num, students[i].name, students[i].score[0], 
									students[i].score[1], students[i].score[2]);
	}
}
