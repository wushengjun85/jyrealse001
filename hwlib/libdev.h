#ifndef _DEV_LIB_H_
#define _DEV_LIB_H_

#ifdef __cplusplus   
extern "C" {   
#endif

//�򿪷�����
//return:1,�ɹ�;-1\-2,ʧ��
int beep_on();
//�򿪷�����,�ε�
int beep_on_s();
//�رշ�����
//return:1,�ɹ�;-1\-2,ʧ��
int beep_off();
//sysϵͳGPIO�ļ�����
//gpion:(GPIO1_4=32*1+4=36)
//return:1,�ɹ�;-1\-2,ʧ��
int Export_Gpio(int gpion);
//GPIO�ź����������������
//gpion:(GPIO1_4=32*1+4=36)
//dir:0--in;dir:1--out
//return:1,�ɹ�;-1\-2\-3,ʧ��
int Set_Gpio_Dir(int gpion,int dir);
//GPIO�ź��ø�
//gpion:(GPIO1_4=32*1+4=36)
//return:1,�ɹ�;-1\-2\-3,ʧ��
int Set_Gpio_H(int gpion);
//GPIO�ź��õ�
//gpion:(GPIO1_4=32*1+4=36)
//return:1,�ɹ�;-1\-2\-3,ʧ��
int Set_Gpio_L(int gpion);
//�����źŹر�
//channel:ȡֵ{1,2,3},����ͨ����
//return:1,�ɹ�;0,ʧ��
int Cam_Power_on(int channel);
//����ͷ��Դ�ر�
//channel:ȡֵ{1,2,3,4},����ͨ����
//return:1,�ɹ�;0,ʧ��
int Cam_Power_off(int channel);
//�����źſ���
//channel:ȡֵ{1,2,3},����ͨ����
//return:1,�ɹ�;0,ʧ��
int Acc_Sig_on(int channel);
//�����źŹر�
//channel:ȡֵ{1,2,3},����ͨ����
//return:1,�ɹ�;0,ʧ��
int Acc_Sig_off(int channel);

#ifdef __cplusplus   
}   
#endif

#endif
