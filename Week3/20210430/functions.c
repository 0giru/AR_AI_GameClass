#include<stdio.h>
#include<windows.h>
#include"functions.h"

void printMain() {
	system("cls");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("                #####################################################################################################################\n");
	printf("                #####################################################################################################################\n");
	printf("                ###                ###                ###                ###                ###                ###                ###\n");
	printf("                ##########  ##########  ########################  ##########  ############  ##########  ##########  #################\n");
	printf("                ##########  ##########  ########################  ##########  ############  ##########  ##########  #################\n");
	printf("                ##########  ##########  ########################  ##########  ############  ##########  ##########  #################\n");
	printf("                ##########  ##########                ##########  ##########                ##########  ##########                ###\n");
	printf("                ##########  ##########  ########################  ##########  #########  #############  ########################  ###\n");
	printf("                ##########  ##########  ########################  ##########  ##########  ############  ########################  ###\n");
	printf("                ##########  ##########  ########################  ##########  ###########  ###########  ########################  ###\n");
	printf("                ##########  ##########                ##########  ##########  ############  ###                ###                ###\n");
	printf("                #####################################################################################################################\n");
	printf("                #####################################################################################################################\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("                                                                게임시작                                                             \n");
	printf("\n");
	printf("                                                                  종료                                                               \n");

}

void printBowl() {
	system("cls");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	for (int i = 0; i < 30; i++) {
		if (i == 3) {
			printf("               □..................................□\n");
		}
		printf("               □                                  □\n");
	}
	printf("               □□□□□□□□□□□□□□□□□□□");

}
