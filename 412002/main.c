/*ת���ַ�������nΪ��ĸn��\nΪ����
 *\?    ����д��������ʺ�ʱʹ�ã���ֹ���Ǳ�����������ĸ�ʡ�
 *      ����ĸ�ʣ����������ӡ�ɡ�����������ӡ�ɡ���ĳЩ���ڱ�������  д��\?\?)�Ϳ�����
 * \'   ���ڱ�ʾ�ַ�������   ����˵ printf("%c\n",������)�������������ӡ�����������ţ���Ҫ���м��Ǹ���֮ǰ�������\
 * \"   ��ʾһ���ַ����ڲ���˫����
 *      �ַ����Ĵ�ӡԭ����������Щ��һ���ģ���Ҫ�ȸ����涨��ӡ�ĸ�ʽ printf("%s\n","abc"),�����ַ�������ʡ��ǰ��ĸ�ʽprintf����abc����
 * \\   ��ʾһ����б�ܣ���ֹ������Ϊһ��ת�����з���  ��\����ת���ַ���б�ܣ���Ӱ�����������������˵abc\0dֻ�����abc������abc\\0d���abc\0d
 * \a   �����ַ������������Ծ���
 * \b   �˸�
 * \f   ��ֽ��
 * \n   ����
 * \r   �س�
 * \t   ˮƽ�Ʊ�������һ��tab��\tһ����Ч��
 * \v   ��ֱ�Ʊ���
 * \ddd 1-3���˽��Ƶ����֡��磺\130 ��ӡ��X���˽��Ƶ�130����ʮ���Ƶ�88��X��ASCII�����88
 *      �Ѱ˽��Ƶ�����ת����10���ƣ����Ҵ�ʱASCII���Ӧ��ŵ��ַ�����Ҫ��ӡ������
 * \xdd ����ʮ����������.  �磺\x30 ��ӡ��0��
 *      ��ʮ��������ת����16��Ȼ���ӡ��ӦASCII�ַ�
 *      /* *��/���׳���Ƕ��ע�ʹ���
 */

//c����ʵ��ѡ��if else��switch
//c����ʵ��ѭ����while��for��do while

/*#include<stdio.h>
int main()
{
    int line = 0;
    while(line<20000)
    {
        printf("����д���룡���Ѿ�д��%d��\n",line);
        line++;
    }
    if(line>=20000)
    {
        printf("��ϲ��д�˳���20000���ˣ�\n");
    }
    else
    {
        printf("��������\n");
    }
    return 0;
}*/



//���ú�����ͣ�������ֱ��д����ʽsum=a+b
#include<stdio.h>
int Add(int a ,int b)               //int�Ƿ������ͣ�Add�Ǻ�������inta��b�Ǻ�������
{
    int c = 0;
    c = a+b;
    return c;
}                                   //���������Ǻ�����
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = Add(a,b);             //���������Զ���ĺ���
    printf("%d",sum);
    return 0;
}