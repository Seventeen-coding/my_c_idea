/*�����ĵ��༭���༭���ļ�*/

/*
*	����C���Ե��﷨ �淶���
*	һ�����õ���д�淶����һ������ĺû�
*	Դ���벻�������Լ����п��ܸ����˿�
*/

/*1��ͷ�ļ�*/
#include <stdio.h>
#include <string.h>
/*2���궨��*/
//�淶���궨��һ���ô�дXXXX_XXXX
#define HW_LEN	10

/*3���ṹ������ .h�ļ�*/
//�淶��������ϰ����XXX_t
typedef struct{
	int  len;
	char *string;
}str_t;
/*4�������ͱ�������*/
//�淶����������ϰ���� Xxx_xxx ���� XxxXxx�ȵ�
//�淶����������ϰ���� xxx_xxx ���� xxxXxx�ȵ�
void Call_helloworld(str_t *hw_str);
char * str_helloworld = "helloworld";

/*5������ʵ����*/
//�淶��main���ڵ�һ�� ���� ���һ�� ����������
int main(void)
{
	str_t str;
	str.string = str_helloworld;
	str.len = strlen(str_helloworld);
	Call_helloworld(&str);
	return 0;
}

void Call_helloworld(str_t *hw_str)
{
	if(hw_str == NULL)	return;
	printf("function:%s line:%d\r\n",__FUNCTION__,__LINE__);	
	printf("str:%s len:%d\r\n",hw_str->string,hw_str->len);	
}
