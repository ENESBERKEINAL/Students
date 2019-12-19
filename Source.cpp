#include<stdio.h>
#include<process.h>
#define NSTUDENT 3
float midfinal(float mid, float fin)
{
	return mid*0.4 + fin*0.6;
}
float avarage(float point[]) {
	int i;
	float avg = 0;

	for (i = 0; i < NSTUDENT; i++) {
		avg += point[i];
		point[i] = 0;
	}
	return avg / NSTUDENT;
}
#include <stdlib.h>
#include <time.h>

#define NNUM 10

int searching(int ary[], int wnt)
{
	int i, flag = 0;
	for (i = 0; i < NNUM; i++)
	{
		if (wnt == ary[i])
			return i;
		else
			flag = -1;
	}
	return flag;
}
///////////////////////////////////////
int main() {
	/*
	int array1[10], i;
	char array2[10];
	float array3[10];

	for (i = 0; i < 10; i++) {
		array1[i] =i*3;
		array2[i] =i+22;
		array3[i] =i*8.3;
		}
	for (i = 0; i < 10; i++) {

		printf("array1 integer array1[%d] %d\n", i, array1[i]);
		
			}
	for (i = 0; i < 10; i++) {

		printf("array2 integer array1[%d] %c\n",i, array2[i]);
		
	}for (i = 0; i < 10; i++) {

		printf("array3 integer array1[%d] %f\n",i, array3[i]);

	}*/
	/*


	int		numbers[] = { 3,5,7,9,11 };
	int		numbers2[5] = { 4,6,8,10,12 };
	int		numbers3[5] = { 2,5 };
	int		numbers4[5] = { 3 };
	int		i;

	// IF characters 
	char	word[] = { 'C','E','N',' ','1','1','1' };
	char	word2[8] = { 'C' };                           // When you initialize your array empty cells are filled with \0 
	char	word3[8] = { 'C','E' };						  // When you initialize your array empty cells are filled with \0 
	char	word4[] = "CEN 111";  // It is a string the last element of the word4 will be '\0'. '\0' terminating character

								  // sizeof

	printf("The size of the array word is %d\n", sizeof(word));
	printf("The size of the array word2 is %d\n", sizeof(word2));
	printf("The size of the array word3 is %d\n", sizeof(word3));
	printf("The size of the array word4 is %d\n", sizeof(word4));

	// Printing the values
	printf("\nElements of the array numbers:  ");

	for (i = 0; i < 5; i++) {

		printf("%d\t", numbers[i]);
	}

	printf("\nElements of the array numbers2: ");

	for (i = 0; i < 5; i++) {

		printf("%d\t", numbers2[i]);
	}

	printf("\nElements of the array numbers3: ");

	for (i = 0; i < 5; i++) {

		printf("%d\t", numbers3[i]);
	}

	printf("\nElements of the array numbers4: ");

	for (i = 0; i < 5; i++) {

		printf("%d\t", numbers4[i]);
	}

	printf("\n\nElements of the array word: ");

	for (i = 0; i < sizeof(word); i++) {

		printf("%c", word[i]);
	}

	printf("\nElements of the array word2: ");

	for (i = 0; i < sizeof(word2); i++) {

		printf("%c", word2[i]);
	}

	printf("\nElements of the array word3: ");

	for (i = 0; i < sizeof(word3); i++) {

		printf("%c", word3[i]);
	}

	printf("\nElements of the array word4: ");

	for (i = 0; i < sizeof(word4); i++) {


		printf("%c", word4[i]);
	}

	printf("\n");*/

/*

	int i;
	float mid[NSTUDENT], fin[NSTUDENT];

	for (i = 0; i < NSTUDENT; i++)
	{
		printf("Enter midterm and final\n");
		scanf("%f %f", &mid[i], &fin[i]);
		printf("%dth student point is %f\n", (i + 1), midfinal(mid[i], fin[i]));
	}*/

/*
int i;
float grades[NSTUDENT];

printf("Enter grades\n");
for (i = 0; i < NSTUDENT; i++) {
	scanf("%f", &grades[i]);
}
printf("avarage is %f\n", avarage(grades));
printf("The new grade %f\n", grades[2]);
*/

/*
int i, rnd, num, rslt;
int numbers[NNUM];

srand(time(NULL));
//random array

for (i = 0; i < NNUM; i++)
{
	rnd = rand() % 50;
	numbers[i] = rnd;
}

printf("Search for a number:\n");
scanf("%d", &num);
rslt = searching(numbers, num);
if (rslt == -1) {

	printf("It is not in the list, elements of the list\n");
	for (i = 0; i < NNUM; i++)
		printf("%d ", numbers[i]);
}
else {

	printf("It is in the list, its first index is %d\n", rslt);
	for (i = 0; i < NNUM; i++)
		printf("%d ", numbers[i]);
}

printf("\n");
*/

	system("pause");
	return 0;
}