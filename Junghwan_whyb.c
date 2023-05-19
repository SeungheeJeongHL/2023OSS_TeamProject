#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "whyb.h"


int selectFoodType(){//��ȯ
    
    //Type 1 : ~
    //Type 2 : ~
    //return Type ��ȣ
}

int selectMenuOne() {

    char buf[SIZE];
    int menu;
    
    printf("\nMenu  -  Select Menu\n");
    printf("----------------------\n\n");
    printf("1 : Read Menu\n");
    printf("2 : Add Menu\n");
    printf("3 : Fix Menu\n");
    printf("4 : Delete Menu\n");
    printf("5 : Search Menu\n");
    printf("6 : Save Menu\n");
    printf("0 : EXit\n\n");
    printf("Enter a number : ");

    fgets(buf, SIZE, stdin);   
    menu = atoi(buf);

    return menu;
}

int addFood(food *f){   //��ȯ

    char buf[SIZE];

    printf("\nEnter the name of the menu: ");
    fgets(f->name, SIZE, stdin);
    f->name[strlen(f->name)-1] = '\0';
    
    printf("Menu type? (Meal : 1, Dring : 2, Side : 3): ");
    fgets(buf, SIZE, stdin);
    f->type = atoi(buf);
    
    printf("Price?: ");
    fgets(buf, SIZE, stdin);
    f->price = atoi(buf);
    
    printf("Quantity?: ");
    fgets(buf, SIZE, stdin);
    f->cnt = atoi(buf);

    f->del = 1;
    
    printf("Menu has been successfully added!\n");
    
    return 1;

}

void readFood(food f){//��ȯ
    if (f.del == 0) {
        printf("No data.");
        return;
    }
    else {
        printf("| %s\t   | %d\t\t | %d won\t | %d\n", f.name, f.type, f.price, f.cnt);
    }
    //�ش� �޴��� �̸�, ���� print
}


void listFood(food *f[], int count){//��ȯ


    printf("\nnumber\t| Name\t\t   | Type\t | Price\t | Quantity\n");
    printf("------------------------------------------------------------------\n");
    for(int i = 0; i < count; i++){
        if(f[i] == NULL) continue;
        printf("%d \t", i+1);
        readFood(*f[i]);
    }
    printf("\n");

}

int selectFoodNo(food *f[], int count){//��ȯ
    int num;
    listFood(f, count);
    printf("What is the menu number? (Cancle :0) : ");
    scanf("%d", &num);
    return num;
}

void updateFood(food *f){//��ȯ

    char buf[SIZE];

    printf("\nMenu  -  Fix Menu\n");
    printf("-------------------\n\n");

    printf("\nEnter the name of the menu: ");
    fgets(f->name, SIZE, stdin);
    f->name[strlen(f->name)-1] = '\0';
    
    printf("Menu type? (Meal : 1, Dring : 2, Side : 3): ");
    fgets(buf, SIZE, stdin);
    f->type = atoi(buf);
    
    printf("Price?: ");
    fgets(buf, SIZE, stdin);
    f->price = atoi(buf);
    
    printf("Quantity?: ");
    fgets(buf, SIZE, stdin);
    f->cnt = atoi(buf);
    
    printf("Menu has been successfully fixed!\n");
}

void deleteFood(food *f){//��ȯ
    f->name[0] = '\0';
    f->type = -1;
    f->price = -1;
    f->cnt = -1;
    f->del = 0;
}

void searchName(food *f[], int count){//��ȯ

    char menuName[SIZE];
    bool found = false;

    printf("\nMenu  -  Search Menu\n");
    printf("----------------------\n\n");

    printf("Enter the name of the menu: ");
    fgets(menuName, SIZE, stdin);
    menuName[strlen(menuName)-1] = '\0';
    printf("\n");

    for(int i = 0; i < count; i++) {

        if (f[i] == NULL) continue;
        else if (strcmp(f[i]->name, menuName) == 0) {
            printf("%d \t", i+1);
            readFood(*f[i]);
            found = true;
        }
    }

    if (!found) printf(">> Menu not found <<\n");
}

void saveData(food *f[], int count){//��ȯ
    //���ݱ��� �߰�, ����, ���� �� ���� .txt���Ͽ� �����ϱ�
    //loadData������ .txt���ϸ�� ������ txt�����̿��� ��
}