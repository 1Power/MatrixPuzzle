/**
 *  ����n����������߳�Ϊn�Ļ��ξ���
 *
 */

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    int n = 0;
    cout << "Please input the long" << endl;
    cin >> n;
    cout << endl;

    int output[n][n] = {0};         //����һ����ά�����������
    int min = 0,max = 0;            //�ı䴫��ֵ�����½�
    int k = 1;                      //����ֵ

    for(int i = 0; i < n; i++){     //���������
        if(i >= n / 2){             //�Դ���ֵ���½����ж�
            min = n - i - 1;
            max = i;
        }else{
            min = i;
            max = n - i - 1;
        }

        for(int j = 0; j < n; j++){ //����������
            output[i][j] = k;       //����ֵ

            if(j < min){            //�������½�ı䴫��ֵ
                k++;
            }else if(j >= max && k != 1){
                k--;
            }
        }
    }
    for(int i = 0; i < n; i++){     //��ӡ���
        for(int j = 0; j < n; j++){
            cout << right << setw(3) << output[i][j];
        }
        cout << endl;
    }

    getch();
    return 0;
}
