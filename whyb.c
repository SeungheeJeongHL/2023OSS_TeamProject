#include <stdio.h>
#include "whyb.h"

int loadData(food *f[]){
   const char* filename = "menu_data.txt";
    FILE* file = fopen(filename, "r");

    if (file != NULL) {
        // ������ ���������� ������ �� ����Ǵ� �ڵ�
        // �����͸� ���Ϸκ��� �о�ͼ� f �迭�� �����ϴ� �۾��� �����ϸ� �˴ϴ�.

        // ����: ���Ͽ��� �����͸� �о�ͼ� �迭�� �����ϴ� ����
        int dataCount = 0;
        char line[256];
        while (fgets(line, sizeof(line), file) != NULL) {
            sscanf(line, "9s %d %d %d %d %d", 
                   f[dataCount]->name,
                   &f[dataCount]->type,
                   &f[dataCount]->price,
                   &f[dataCount]->cnt,
                   &f[dataCount]->del,
                   &f[dataCount]->get
                   );

            dataCount++;
        }

        fclose(file);

        printf("������ �ҷ���\n");

        // ���� �ȿ� �ִ� ������ ���� ��ȯ
        return dataCount;
    } else {
        printf("������ ����\n");

        // �����Ͱ� �����Ƿ� 0�� ��ȯ
        return 0;
    }

    //��ġ�ϴ� �޴��� ������ �ҷ�����
    //.txt������ ã�Ƽ� �ҷ����� "������ �ҷ���"
    //.txt������ �� ã���� "������ ����"
    //return ���� .txt���� �ȿ� �־��� ������ ���� (�������� 0 ����)
}


int selectMode(){//����
    int menu;
    printf("mode ����\n\n\n");
    printf("1 : �޴��� CRUD\n");
    printf("2 : �޴� ���� �����\n");
    printf("3 : �޴� �ֹ��ϱ�\n");
    printf("4 : ��ü ���α׷� ����\n");
    scanf("%d", &menu);
    return menu;
}

int selectFoodType(){//��ȯ
    //Type 1 : ~
    //Type 2 : ~
    //return Type ��ȣ
}


int selectMenuOne(){//��ȯ
    //�޴��� CRUD���� �޴� ����
    //menu 1 : �޴� ��ȸ
    //menu 2 : �޴� �߰�
    //menu 3 : �޴� ����
    //menu 4 : �޴� ����
    //menu 5 : �޴� ã��
    //menu 6 : �޴� ����
    //menu 0 : ����
    //return �޴� ��ȣ
}

int addFood(food *f){//��ȯ
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

int selectMenuTwo(){//����
    //menu 1 : �������� ����
    //menu 2 : ���������� ����
    //menu 0 : ����
}

void randomPick(food *f[], int count){//����
    //SelectFoodType ���ؼ� ���� ���ϱ�
    //type ��ġ, delete �ȵ� �޴� �� random���� ���� �� print
}

void worldCupPick(food *f[], int count){//����
    //SelectFoodType ���ؼ� ���� ���ϱ�
    //type ��ġ, delete �ȵ� �޴� �� ������ �ǽ�
    //���� �޴� print
}

int selectMenuThree(){//����

    int menu;
    printf("1 : �޴� ��ȸ\n");
    printf("2 : ��ٱ��� ��ȸ\n");
    printf("3 : ��ٱ��� �޴� �߰�\n");
    printf("4 : ��ٱ��� �޴� ����\n");
    printf("5 : ��ٱ��� �޴� ����\n");
    printf("6 : ��ٱ��� �޴� �˻�\n");
    printf("7 : ��ٱ��� �޴� ����\n");
    printf("8 : ���� �� ����\n");
    printf("0 : ����\n\n");
    printf("=> �����Ͻ� �޴��� �Է��ϼ��� : ");

    scanf("%d", &menu);

    return menu;
}

int loadMyFood(food *mf[]){//����
    //��ġ�ϴ� ��ٱ��� ������ �ҷ�����
    //.txt������ ã�Ƽ� �ҷ����� "���� ��ٱ��� �ҷ���"
    //.txt������ �� ã���� "���� ��ٱ��� ����"
    //return ���� .txt���� �ȿ� �־��� ������ ���� (�������� 0 ����)
}

void saveMyFood(food *f[], int myCnt){//����
    //���ݱ��� �߰�, ����, ���� �� ���� .txt���Ͽ� �����ϱ�
    //loadMyFood������ .txt���ϸ�� ������ txt�����̿��� ��
}

int loadMemberData(member *m[]){//����
    //MemberData�� �ؽ�Ʈ ���Ͽ��� �ҷ�����
    //�� member �� ����
}


int Buy(food *mf[], int myCnt){//����
    //��ٱ��� �ȿ� �ִ� �޴� ���
    //��ٱ��� �ȿ� �ִ� �޴� ���� ���� ���
    //�����ϴ� �κ� ����
    //��ٱ��� �ȿ� �ִ� �޴� ��ü ����
    //saveMyFood �̿��� ��ٱ��� �� ���� �����
    //�����ߴ� �޴��� ���� ����
}


int searchMember(member *m[], int count, int buyCnt){//����
    //�˻��� ID�� �Է¹ް� 
    //ID�� �����ϸ� ���� ����Ʈ�� buyCnt �߰� 
    //���� ����Ʈ ���
    //ID�� �������� ������ 1 ����
}


int addMember(member *m, int buyCnt){//����
    //�޴� (�̸�, point) �߰�
    //�����ϴٸ� �ߺ��� ID�� �Է����� ���ϰ� 
    //1 ����
}

void saveMemberData(member *m[], int memberCnt){//����
    //���ݱ��� �ɹ� ���� .txt���Ͽ� �����ϱ�
    //loadMemberData������ .txt���ϸ�� ������ txt�����̿��� ��
}
