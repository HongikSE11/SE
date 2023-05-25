// ��� ����
#include <stdio.h>
#include <string.h>

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
void doTask();
void join();
void program_exit();

// ���� ����
FILE* in_fp, * out_fp;

int main()
{
    // ���� ������� ���� �ʱ�ȭ
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");


    doTask();

    return 0;
}




void doTask()
{
    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0, menu_level_3 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);


        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:   //"1.1. ȸ�� ���ԡ� �޴� �κ�
            {
                fscanf(in_fp, "%d", &menu_level_3);

                switch (menu_level_3)
                {
                case 1: //"1.1.1 ȸ�� ȸ�� ���ԡ� �޴� �κ�
                {
                    //do something
                    break;
                }
                case 2: //"1.1.2 �Ϲ� ȸ�� ���ԡ� �޴� �κ�
                {
                    //do something
                    break;
                }
                }
                {
                default:
                    break;
                }

                break;
            }
            case 2: //"1.2 ȸ�� Ż�� �޴� �κ�
            {
                //do something
                break;
            }

            }
        case 2:
            switch (menu_level_2)
            {
            case 1: //"2.1 �α��Ρ� �޴� �κ�
            {
                //do something
                break;
            }
            case 2: //"2.2 �α׾ƿ��� �޴� �κ�
            {
                //do something
                break;
            }
            }
        case 3:
            switch (menu_level_2)
            {
            case 1: //"3.1 ä�� ���� ��ϡ� �޴� �κ�
            {
                //do something
                break;
            }
            case 2: //"3.2  ��ϵ� ä�� ���� ��ȸ�� �޴� �κ�
            {
                //do something
                break;
            }
            }
        case 4:
            switch (menu_level_2)
            {
            case 1: //"4.1 ä�� ���� �˻��� �޴� �κ�
            {
                //do something
                break;
            }
            case 2: //"4.2 ä�� ������ �޴� �κ�
            {
                //do something
                break;
            }
            case 3: //"4.3 ���� ���� ��ȸ�� �޴� �κ�
            {
                //do something
                break;
            }
            case 4: //"4.4 ���� ��ҡ� �޴� �κ�
            {
                //do something
                break;
            }
            }
        case 5:
            switch (menu_level_2)
            {
            case 1: //"5.1 ���� ���� ��衰 �޴� �κ�
            {
                //do something
                break;
            }
            }
        case 6:
        {
            switch (menu_level_2)
            {
            case 1:   // "6.1. ���ᡰ �޴� �κ�
            {
                program_exit();
                is_program_exit = 1;
                break;
            }
            }
        }
        return;
        }
    }
}


void join()
{
    /*            !!!!!!!       �߿�        !!!!!!!!!
     * �ܼ��� ������ ���� ������ϴ� ����� ���̱� ���� �ڵ��̹Ƿ� �� �Լ����� �״�� ����ϸ� �ȵ�.
     * control �� boundary class�� �̿��ؼ� �ش� ����� �����ǵ��� �ؾ� ��.
     */

    char user_type[MAX_STRING], name[MAX_STRING], SSN [MAX_STRING],
        address[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];

    // �Է� ���� : �̸�, �ֹι�ȣ, ID, Password�� ���Ϸκ��� ����
    fscanf(in_fp, "%s %s %s %s", name, SSN, ID, password);


    // �ش� ��� ����  


    // ��� ����
    fprintf(out_fp, "1.1. ȸ������\n");
    fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
}


void program_exit()
{
    //exit program 
}