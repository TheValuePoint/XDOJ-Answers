//����	
//��һ��
//
//���
//���̿���
//	
//ʱ������	
//1S
//
//�ڴ�����	
//256Kb
//
//��������	
//��һ����һ��΢��С��Ϸ����Ϸ����ǳ��򵥣�ֻ�����Ҫ��һ������������һ�����飬���δ�ܳɹ�������һ����������Ϸ������
//�Ʒֹ������£�
//1. ����ɹ�������һ�������ϣ���δ�����������ģ���1��
//2. ����ɹ�������һ�������ϣ��Ҹպ������������ģ����һ�μ�2�֣��˺�������������ʱÿ�ε���2�֡�Ҳ����˵����һ�������������ļ�2�֣������ڶ��������������ļ�4�֣����������������������ļ�6�֣������Դ����ơ�
//3. ���δ�ܳɹ����������ϣ���0�֣�����Ϸ����
//���ڸ������һ����Ϸ��ÿ����Ծ����������������յ÷֡�
//
//����˵��	
//����Ϊ���ɸ�������������������С��1000������ʾ���ÿ�ε���Ծ���������֮���ÿո�ָ�������ȡֵΪ0��1��2��
//0 ��ʾδ�ܳɹ�������һ�������ϣ�
//1 ��ʾ�ɹ�������һ�������ϵ�δ�����������ģ�
//2 ��ʾ�ɹ�������һ�������ϣ��Ҹպ������������ġ�
//���������ֻ�����һ��������0����������㡣
//
//���˵��	
//���һ��������ʾ����ҵ����յ÷֡�
//
//��������	
//1 1 2 1 2 2 2 0
//
//�������	
//17
#include<stdio.h>

int map[114514];

int main(){
	int score = 0;
	int repeater = 2;
	int counter = 0;
	while(1){
		scanf("%d",&map[counter]);
		if(map[counter]==0)
			break;
		if(counter!=0 && map[counter] == 2){
			if(map[counter-1] == 2){
				repeater+=2;
				score+=repeater;
			}
			else{
				repeater=2;
				score+=map[counter];
			}
		}
		else
			score+=map[counter];
		counter++;
	}
	printf("%d",score);
	return 0;
}