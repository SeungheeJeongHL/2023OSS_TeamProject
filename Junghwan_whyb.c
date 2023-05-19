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

    char buf[SIZE];
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

    fgets(buf, SIZE, stdin);   
    menu = atoi(buf);

    return menu;
}

int addFood(food *f){   //��ȯ

    char buf[SIZE];

    printf("\n�޴� �̸��� �Է��ϼ���: ");
    fgets(f->name, SIZE, stdin);
    f->name[strlen(f->name)-1] = '\0';
    
    printf("�޴��� ������? (�Ļ� : 1, ���� : 2, ���̵� : 3): ");
    fgets(buf, SIZE, stdin);
    f->type = atoi(buf);
    
    printf("������?: ");
    fgets(buf, SIZE, stdin);
    f->price = atoi(buf);
    
    printf("������?: ");
    fgets(buf, SIZE, stdin);
    f->cnt = atoi(buf);

    f->del = 1;
    
    printf("�޴��� ���������� �߰��Ǿ����ϴ�!\n");
    
    return 1;

    //�޴� (�̸�, ����, Ÿ��) �߰�
    //1 ����
}

void readFood(food f){//��ȯ
    if (f.del == 0) {
        printf("������ �����ϴ�.");
        return;
    }
    else {
        printf("| %s\t   | %d\t\t | %d��\t | %d��\n", f.name, f.type, f.price, f.cnt);
    }
    //�ش� �޴��� �̸�, ���� print
}


void listFood(food *f[], int count){//��ȯ

    printf("��ȣ\t| �޴��̸�\t   | ����\t | ����\t\t | ����\n");
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
    printf("��ȣ��? (��� :0) : ");
    scanf("%d", &num);
    return num;
}

void updateFood(food *f){//��ȯ

    char buf[SIZE];

    printf("\n�޴���  -  �޴� ����\n");
    printf("---------------------\n\n");

    printf("\n�޴� �̸��� �Է��ϼ���: ");
    fgets(f->name, SIZE, stdin);
    f->name[strlen(f->name)-1] = '\0';
    
    printf("�޴��� ������? (�Ļ� : 1, ���� : 2, ���̵� : 3): ");
    fgets(buf, SIZE, stdin);
    f->type = atoi(buf);
    
    printf("������?: ");
    fgets(buf, SIZE, stdin);
    f->price = atoi(buf);
    
    printf("������?: ");
    fgets(buf, SIZE, stdin);
    f->cnt = atoi(buf);
    
    printf("�޴��� ���������� �����Ǿ����ϴ�!\n");
    
    return 1;
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