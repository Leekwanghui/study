#include <stdio.h>
#include <stdlib.h>

int compare(int a, int b) {
    if (a > b)return a;
    else return b;
}



int main(void) {
	int N, sum = 0, max = -1000; 
	int num[100001];
	
	scanf("%d", &N);

	for (int i = 1; i <= N; i++){
		scanf("%d", &num[i]);

        if (num[i] > 0) { //�ش� ���� ����� ���
            if (sum < 0) { //���� �������� ���� ������ ���
                sum = 0; //���ؿ� ���� �ʱ�ȭ�ϰ�
                sum = sum + num[i]; //���� �����Ѵ�.
            }
            else { //���� �������� ���� ����� ���
                sum = sum + num[i]; //��� �����ش�.
            }
            max = compare(max, sum); //if(sum<0)�� ��� ���� ���Ѱ��� Ŭ�� �ֱ⿡ �����ش�.
        }
        else { //�ش� ���� ������ ���
            if (sum <= 0) { //���� �������� ���� ������ ���
                max = compare(max, num[i]); //���� �ʿ� ���� �����ش�.
            }
            else { //���� �������� ���� ����� ���
                sum = sum + num[i]; //���� ����� ���� �� Ŀ���� �����Ƿ� �ջ길 ���ش�.
            }
        }
    }
    printf("%d", max);
    return 0;
}
			

