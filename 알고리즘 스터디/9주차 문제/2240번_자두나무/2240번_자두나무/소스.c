#include <stdio.h>
#include <string.h>
//#include <algorithm>

//using namespace std;



const int MAX = 1000;

const int MOVE = 30 + 1;



int T, W;

int plum[MAX];

int cache[3][MAX][MOVE];



int maxPlum(int tree, int second, int move) //���� ��ȣ, ��, ������ Ƚ��

{

    //�������

    if (second == T)

        return 0;

    int result = cache[tree][second][move];

    if (result != -1)

        return result;



    if (plum[second] == tree) //���� �ִ� �������� �ڵΰ� �������ٸ�

        if (move < W) //���� ������ �� �ִٸ�

                //max(�������� ���� ���, �������� ���)

            return result = max(1 + maxPlum(tree, second + 1, move), maxPlum(3 - tree, second + 1, move + 1));

        else

            return result = 1 + maxPlum(tree, second + 1, move);

    else  //�ݴ��� �������� �ڵΰ� �������ٸ�

        if (move < W)

            return result = max(maxPlum(tree, second + 1, move), 1 + maxPlum(3 - tree, second + 1, move + 1));

        else

            return result = maxPlum(tree, second + 1, move);

}





int main() {
	//int t, w;
	
    scanf("%d%d", &T, &W);

    for (int i = 0; i < T; i++)
        scanf("%d", &plum);



    memset(cache, -1, sizeof(cache));

    printf("%d", maxPlum(1, 0, 0));
    
    return 0;




}