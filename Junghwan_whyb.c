#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "whyb.h"


int selectFoodType(){//��ȯ
    
    //Type 1 : ~
    //Type 2 : ~
    //return Type ��ȣ
}

int selectMenuOne() {

    int menu;
    
    printf("\n�޴���  -  �޴� ����\n");
    printf("---------------------\n\n");
    printf("1 : �޴� ��ȸ\n");
    printf("2 : �޴� �߰�\n");
    printf("3 : �޴� ����\n");
    printf("4 : �޴� ����\n");
    printf("5 : �޴� ã��\n");
    printf("6 : �޴� ����\n");
    printf("0 : ����\n\n");
    printf("�޴� �Է� : ");
    scanf("%d", &menu);
    
    return menu;
}

int addFood(food *f){   //��ȯ

    char buf[SIZE];

    printf("Enter the menu name: ");
    fgets(f->name, SIZE, stdin);
    f->name[strlen(f->name)-1] = '\0';
    
    printf("\nEnter the menu type (1 for meal, 2 for beverage, 3 for side): ");
    fgets(buf, SIZE, stdin);
    f->type = atoi(buf);
    
    printf("\nEnter the menu price: ");
    fgets(buf, SIZE, stdin);
    f->price = atoi(buf);
    
    f->cnt = 0;
    f->del = 0;
    f->get = 0;
    
    printf("Menu added successfully!\n");
    
    return 1;

    //�޴� (�̸�, ����, Ÿ��) �߰�
    //1 ����
}

void readFood(food f){//��ȯ
    //�ش� �޴��� �̸�, ���� print
}


void listFood(food *f[], int count){//��ȯ
    //selectFoodType���� type �Է¹ޱ�
    //�������� ���� ��ȣ�̰�, type�� ��ġ�ϸ� �ش� ��ȣ print
    //readFood�Լ����� menu �б�
}

int selectFoodNo(food *f[], int count){//��ȯ
    //listFood�� ��ȣ�� �޴��� �����ֱ�
    //�޴� ��ȣ ����(��� : 0)
}

void updateFood(food *f){//��ȯ
    //�޴� �̸�, ����, Ÿ�� ������Ʈ�ϱ�
    //1 �����ϱ�
}

void deleteFood(food *f){//��ȯ
    //del�� 0���� ����
}

void searchName(food *f[], int count){//��ȯ
    //�˻��� �̸��� �Է¹ް� 
    //�������� �ʰ�, �̸��� ������ readFood�Լ����� menu �б�
}

void saveData(food *f[], int count){//��ȯ
    //���ݱ��� �߰�, ����, ���� �� ���� .txt���Ͽ� �����ϱ�
    //loadData������ .txt���ϸ�� ������ txt�����̿��� ��
}