#include <iostream>
using namespace std;
int main()
 {
    int N;
    cout<<"N=";
    cin>>N;
    int a[N+1][N+1];//�����±�������
    int row,column,n,k,t,i,j,p;
    row=0;//��
    column=1;//��
    n=N;//�����ʽ������
    t=1;//��ֵ����
    k=0;//�������������Ժ�Ҳ����һȦ��ֵ����p��һ�ı���ÿһȦ������
    for(p=1;p<=N/2;)
    {
        if(k!=0&&k%2==0)p++;//��������һȦһȦ�ĸ�ֵ
    for(i=1;i<=n;i++)
    {
        row+=t;
    a[row][column]=p;
    }//��һ�и�ֵ
     n--;//������һ
     for(j=1;j<=n;j++)
     {
         column+=t;
         a[row][column]=p;
     }//���и�ֵ
    k++;
    t=-t;//��һ������ֵ
    };
    for(i=1;i<=N;++i)//���
    {
        for(j=1;j<=N;++j)
            cout<<' '<<a[i][j];
            cout<<endl;
    }
    return 0;

}
